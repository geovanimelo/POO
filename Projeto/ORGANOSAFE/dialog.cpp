#include "dialog.h"
#include "ui_dialog.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <string>
#include <QDebug>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->moisture_lcd->display("-------");
    ui->temperature_lcd->display("-------");
    ui->humidity_lcd->display("-------");
    ui->water_label->hide();

    arduino = new QSerialPort(this);
    serialBuffer = "";
    parsed_dt1 = "";
    parsed_dt2 = "";
    parsed_dt3 = "";
    moist_value = 0.0;
    temp_value = 0.0;
    humid_value = 0.0;

    /*
     *
     * Use essas linhas de código para obter a identificação do
     *  fornecedor e a ID do produto da Arduino conectada à porta serial.
     *

    qDebug() << "Number of ports: " << QSerialPortInfo::availablePorts().length() << "\n";
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
        qDebug() << "Description: " << serialPortInfo.description() << "\n";
        qDebug() << "Has vendor id?: " << serialPortInfo.hasVendorIdentifier() << "\n";
        qDebug() << "Vendor ID: " << serialPortInfo.vendorIdentifier() << "\n";
        qDebug() << "Has product id?: " << serialPortInfo.hasProductIdentifier() << "\n";
        qDebug() << "Product ID: " << serialPortInfo.productIdentifier() << "\n";
    }
    */
    // Identifica a porta em que o arduino uno está ligado.
    bool arduino_is_available = false;
    QString arduino_uno_port_name;

    //  Para cada porta serial disponível
    foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){

        //  verifique se o serialport possui um identificador de produto e um identificador de fornecedor

        if(serialPortInfo.hasProductIdentifier() && serialPortInfo.hasVendorIdentifier()){

            //   Verifique se o ID do produto e a identificação do fornecedor correspondem aos do arduino uno

            if((serialPortInfo.productIdentifier() == arduino_uno_product_id)
                    && (serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id)){
                arduino_is_available = true; //  Arduino uno está disponível nesta porta
                arduino_uno_port_name = serialPortInfo.portName();
            }
        }
    }
     //    Abra e configure a porta arduino se disponível

    if(arduino_is_available){
        qDebug() << "Arduino port FOUND...\n";
        arduino->setPortName(arduino_uno_port_name);
        arduino->open(QSerialPort::ReadOnly);
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(readSerial()));

    }else{
        qDebug() << " CANNOT find the correct port for Arduino.\n";
        QMessageBox::information(this, "Serial Port Error", "Couldn't open serial port to arduino.");
    }
}

Dialog::~Dialog()
{
    if(arduino->isOpen()){
        arduino->close(); //   Feche a porta serial se estiver aberta.
    }
    delete ui;
}

void Dialog::getSerial()
{
    /*
     * ReadyRead () não garante que toda a mensagem seja recebida de uma só vez.
     * A mensagem pode chegar dividida em partes. Portanto, precisamos armazenar os
     *  dados em série e depois analisar o valor da temperatura.
     */

    QStringList buffer_split = serialBuffer.split(","); // Divida a string serialBuffer, analisando com ',' como o separador

        // Verifique se há menos de 7 tokens em buffer_split.

    if(buffer_split.length() < 7){

        //  Não há valor analisado ainda, então continue acumulando bytes de série no buffer.

        serialData = arduino->readAll();
        serialBuffer = serialBuffer + QString::fromStdString(serialData.toStdString());
        serialData.clear();
    }else {

        //new section
        serialBuffer = "";

        qDebug() << buffer_split << "\n";

        parsed_dt1 = buffer_split[0];
        parsed_dt2 = buffer_split[1];
        parsed_dt3 = buffer_split[2];
        moist_value = parsed_dt1.toDouble();
        temp_value = parsed_dt2.toDouble();
        humid_value = parsed_dt3.toDouble();

        qDebug() << "Moisture: " << moist_value << "\n";
        qDebug() << "Temperature: " << temp_value << "\n";
        qDebug() << "Humidity: " << humid_value << "\n";
        parsed_dt1 = QString::number(moist_value, 'g', 4); // Formatar precisão de valor para 4 dígitos ou menos
        parsed_dt2 = QString::number(temp_value, 'g', 4);
        parsed_dt3 = QString::number(humid_value, 'g', 4);

        /*
         * Dialog::updateMoisture(moisture_value);
         * Dialog::updateTemperature(temperature_value);
         * Dialog::updateHumidity(humidity_value);
         *
        */

        Dialog::updateMoist(parsed_dt1);
        Dialog::updateTemp(parsed_dt2);
        Dialog::updateHumid(parsed_dt3);
        if(moist_value < 33.00){
            Dialog::updateMessage();
        }
    }
}

void Dialog::updateTemp(QString sensor_reading)
{

    // atualiza o valor exibido no lcdNumber
    ui->temperature_lcd->display(sensor_reading);
}

void Dialog::updateMoist(QString sensor_reading)
{

    // atualiza o valor exibido no lcdNumber
    ui->moisture_lcd->display(sensor_reading);
}

void Dialog::updateHumid(QString sensor_reading)
{

    // atualiza o valor exibido no lcdNumber
    ui->humidity_lcd->display(sensor_reading);

}

void Dialog::updateMessage()
{
    // Mostra mensagem de necessidade urgente de planta de água
    ui->water_label->show();

}



