#include "mainwindow.h"
#include <QApplication>
#include <qwidget.h>
#include <mainwindow.h>
#include <MsgProtocol.h>
#include <UserInfo.h>
#include <Message.h>
#include <MessageQueue.h>
#include <resource_list.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow* window = new MainWindow();
    window->show();
    window->setWindowTitle("BeerpongGame");


















    return a.exec();

}
