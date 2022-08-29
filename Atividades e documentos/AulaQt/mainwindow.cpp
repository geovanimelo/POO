#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonGO_clicked()
{

    float np1= ui->lineEditNP1->text().toFloat();
    float np2= ui->lineEditNP1->text().toFloat();

    float media = (np1+np2)/2;
    QString status("Reprovado!");

    if(media>=8)
    {
     status= "Aprovado!";
    }else if(media>=4)
    {
        status= "Prova final";
    }

    ui->lineStatus->setText(status);
}


