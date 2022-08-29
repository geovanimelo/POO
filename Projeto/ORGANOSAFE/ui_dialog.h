/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_1;
    QLabel *moisture_label;
    QLCDNumber *moisture_lcd;
    QLabel *title;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *temperature_label;
    QLCDNumber *temperature_lcd;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *humidity_label;
    QLCDNumber *humidity_lcd;
    QLabel *author;
    QLabel *footer_label_1;
    QLabel *footer_label_2;
    QLabel *water_label;
    QPushButton *apagarPushButton;
    QPushButton *encenderPushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(661, 566);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 130, 541, 91));
        horizontalLayout_1 = new QHBoxLayout(layoutWidget);
        horizontalLayout_1->setSpacing(6);
        horizontalLayout_1->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        moisture_label = new QLabel(layoutWidget);
        moisture_label->setObjectName(QStringLiteral("moisture_label"));

        horizontalLayout_1->addWidget(moisture_label);

        moisture_lcd = new QLCDNumber(layoutWidget);
        moisture_lcd->setObjectName(QStringLiteral("moisture_lcd"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 94, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        QBrush brush2(QColor(60, 60, 60, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(76, 76, 76, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        moisture_lcd->setPalette(palette);
        moisture_lcd->setDigitCount(7);

        horizontalLayout_1->addWidget(moisture_lcd);

        title = new QLabel(Dialog);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(20, 0, 281, 61));
        layoutWidget_2 = new QWidget(Dialog);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 240, 541, 91));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        temperature_label = new QLabel(layoutWidget_2);
        temperature_label->setObjectName(QStringLiteral("temperature_label"));

        horizontalLayout_2->addWidget(temperature_label);

        temperature_lcd = new QLCDNumber(layoutWidget_2);
        temperature_lcd->setObjectName(QStringLiteral("temperature_lcd"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        temperature_lcd->setPalette(palette1);
        temperature_lcd->setDigitCount(7);

        horizontalLayout_2->addWidget(temperature_lcd);

        layoutWidget_3 = new QWidget(Dialog);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(40, 350, 541, 91));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        humidity_label = new QLabel(layoutWidget_3);
        humidity_label->setObjectName(QStringLiteral("humidity_label"));

        horizontalLayout_3->addWidget(humidity_label);

        humidity_lcd = new QLCDNumber(layoutWidget_3);
        humidity_lcd->setObjectName(QStringLiteral("humidity_lcd"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        humidity_lcd->setPalette(palette2);
        humidity_lcd->setFrameShape(QFrame::Panel);
        humidity_lcd->setLineWidth(2);
        humidity_lcd->setMidLineWidth(0);
        humidity_lcd->setDigitCount(7);

        horizontalLayout_3->addWidget(humidity_lcd);

        author = new QLabel(Dialog);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(80, 60, 161, 21));
        footer_label_1 = new QLabel(Dialog);
        footer_label_1->setObjectName(QStringLiteral("footer_label_1"));
        footer_label_1->setGeometry(QRect(0, 510, 181, 51));
        footer_label_2 = new QLabel(Dialog);
        footer_label_2->setObjectName(QStringLiteral("footer_label_2"));
        footer_label_2->setGeometry(QRect(420, 500, 231, 51));
        water_label = new QLabel(Dialog);
        water_label->setObjectName(QStringLiteral("water_label"));
        water_label->setGeometry(QRect(40, 450, 541, 51));
        apagarPushButton = new QPushButton(Dialog);
        apagarPushButton->setObjectName(QStringLiteral("apagarPushButton"));
        apagarPushButton->setGeometry(QRect(380, 40, 171, 23));
        encenderPushButton = new QPushButton(Dialog);
        encenderPushButton->setObjectName(QStringLiteral("encenderPushButton"));
        encenderPushButton->setGeometry(QRect(380, 10, 171, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        moisture_label->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#550000;\">Um. da Planta</span></p></body></html>", 0));
        title->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-family:'Calibri,sans-serif'; font-size:36pt; font-weight:600; color:#00aa00;\">ORGANO</span><span style=\" font-family:'Calibri,sans-serif'; font-size:36pt; font-weight:600; color:#0000ff;\">SAFE</span></p></body></html>", 0));
        temperature_label->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#0000ff;\">Temperature C\302\260</span></p></body></html>", 0));
        humidity_label->setText(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:600; color:#829335;\">Umidade AR %</span></p></body></html>", 0));
        author->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#0000ff;\">ARDUINO + QT</span></p></body></html>", 0));
        footer_label_1->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#00aa00;\">UNIFOR 2017</span></p></body></html>", 0));
        footer_label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#00aa00;\">ENGENHARIA EL\303\211TRICA</span></p></body></html>", 0));
        water_label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-family:'arial,sans-serif'; font-size:16px; font-weight:600; color:#ff0000; background-color:#ffffff;\">URGENTE: solo muito seco, por favor, aplique plantas agora!</span></p></body></html>", 0));
        apagarPushButton->setText(QApplication::translate("Dialog", "DESATIVAR", 0));
        encenderPushButton->setText(QApplication::translate("Dialog", "ATIVAR", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
