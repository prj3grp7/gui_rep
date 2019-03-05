#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "resource_list.h"
#include "QPixmap"
#include <QtGui>



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



void MainWindow::Background(Display msg)
{
    switch (msg)
    {
    case SHOW_IDLE:
        this->setStyleSheet(IDLE_SHEET);
        ui->infotext->setText("");
    break;
    case SHOW_INFO:

    break;
    case SHOW_GAME_STATUS:

    break;
    case SHOW_ENDGAME:

    break;
    case SHOW_SERVICE:
        ui->centralWidget->hide();
        this->setStyleSheet(SERVICE);
    break;
    case CUPS_UPDATED:
          updatecups();
    break;
    default:

    break;
    }
}

void MainWindow::updatecups()
{

}

void MainWindow::Cupcolor(int cup, int colorcode)
{
   if(colorcode==0)
   cups[cup]->setStyleSheet(REDCUP_SHEET);
   if(colorcode==1)
   cups[cup]->setStyleSheet(GREENCUP_SHEET);

}

void MainWindow::hidecups()
{
   ui->centralWidget->hide();

}

void MainWindow::showcups()
{
    ui->centralWidget->show();
}
