#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "resource_list.h"
#include "QPixmap"
#include <QtGui>
#include <EndGameCfm.h>
#include <UserInfo.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    cups[0] = ui->cup1;
    cups[1] = ui->cup2;
    cups[2] = ui->cup3;
    cups[3] = ui->cup4;
    cups[4] = ui->cup5;
    cups[5] = ui->cup6;

    cups[6] = ui->cup7;
    cups[7] = ui->cup8;
    cups[8] = ui->cup9;
    cups[9] = ui->cup10;
    cups[10] = ui->cup11;
    cups[11] = ui->cup12;



}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::dispatcher(Display_show id, Message * msg)
{
    switch (id)
    {
    case SHOW_IDLE:
        handleDisplayShowIdle();
    break;
    case SHOW_INFO:
        this->handleDisplayShowInfo();
    break;
    case SHOW_GAME_STATUS:
        this->handleDisplayPlaying();
    break;
    case SHOW_ENDGAME:
        this->handleUpdateWin(static_cast<EndGameCfm *>(msg));
    break;
    case SHOW_SERVICE:
        ui->centralWidget->hide();
        this->setStyleSheet(SERVICE);
    break;
    case CUPS_UPDATED:
         handleUpdateCups(static_cast<DisplayRequest *>(msg));
    break;
    case SHOW_PLACE_CUPS:
        this->handleDisplayShowPlaceCups();
    break;
    default:

    break;
    }
}

void MainWindow::handleDisplayShowIdle()
{
    this->setStyleSheet(IDLE_SHEET);
    ui->infotext->setText("");
}
void MainWindow::handleDisplayShowPlaceCups()
{
    ui->infotext->setText("Place DEM CUPS!");
}
void MainWindow::handleDisplayShowInfo()
{
    ui->infotext->setText("Enter info at THE website");
}
void MainWindow::handleDisplayPlaying()
{
    ui->infotext->setText("");
    this->setStyleSheet(GAMEBOARD_SHEET);
    int i = 0;
    for(i=0;i>11;i++)
    {
        cups[i]->setStyleSheet(GREENCUP_SHEET);
    }

}
void MainWindow::handleUpdateCups(DisplayRequest* arg)
{

    if(arg->playerside_==1)
    {
        bitset<6> kopper = arg->user1->getCups();
        int i= 0;
        for(i=0;i==5;i++)
        {
            if(kopper[i] == true)
            {
                cups[i]->setStyleSheet(GREENCUP_SHEET);
            }
            else if(kopper[i] == false)
            {
                cups[i]->setStyleSheet(REDCUP_SHEET);
            }
        }
    }

    if(arg->playerside_==1)
    {
        bitset<6> kopper = arg->user2->getCups();
        int i= 0;
        for(i=0;i==5;i++)
        {
            if(kopper[i] == true)
            {
                cups[i]->setStyleSheet(GREENCUP_SHEET);
            }
            else if(kopper[i] == false)
            {
                cups[i]->setStyleSheet(REDCUP_SHEET);
            }
        }
    }

}
void MainWindow::handleUpdateWin(EndGameCfm * msg)
{
    if(msg->playerside_ == 1)
    {
        //Call update win for playerside1
    }
    else if(msg->playerside_ == 2)
    {
       //Call update win for playerside2
    }
}

void MainWindow::Cupcolor(int cup, int colorcode)
{
   if(colorcode==0)
   cups[cup]->setStyleSheet(REDCUP_SHEET);
   if(colorcode==1)
   cups[cup]->setStyleSheet(GREENCUP_SHEET);

}


