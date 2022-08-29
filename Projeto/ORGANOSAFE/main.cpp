#include "dialog.h"
#include "Widget.h"
#include "ui_Widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog s;
    Widget w;

    s.setWindowTitle("Temperature Sensor Reading");
    s.setFixedSize(660,550);
    s.show();
    w.show();

    return a.exec();
}
