#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSerialPort>
#include <QByteArray>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void getSerial();
    void updateTemp(QString);
    void updateMoist(QString);
    void updateHumid(QString);
    void updateMessage();

private:
    Ui::Dialog *ui;

    QSerialPort *arduino;

    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;

    QByteArray serialData;
    QString serialBuffer;
    QString parsed_dt1;
    QString parsed_dt2;
    QString parsed_dt3;

    double temp_value;
    double moist_value;
    double humid_value;

};

#endif // DIALOG_H
