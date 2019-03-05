#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <mainwindow.h>
#include <MsgProtocol.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow window;
    window.show();

    window.setWindowTitle("BeerpongGame");






    return a.exec();
}
