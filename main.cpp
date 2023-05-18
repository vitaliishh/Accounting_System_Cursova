#include "QDir"
#include "QFile"
#include "reg.h"
#include <conio.h>
#include <iostream>

#include "OS_CHECK.h"
#include <QApplication>
#include <QString>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Reg* w = new Reg;
    w->setFixedSize(493, 399);

    w->show();
    return a.exec();
}
