#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "stylesheet.h"
#include <chrono>
#include <stylesheet.h>
#include <QTime>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //Hides cuplabels
    ui->Cup1_1->setVisible(false);
    ui->Cup1_2->setVisible(false);
    ui->Cup1_3->setVisible(false);
    ui->Cup1_4->setVisible(false);
    ui->Cup1_5->setVisible(false);
    ui->Cup1_6->setVisible(false);

    ui->Cup2_1->setVisible(false);
    ui->Cup2_2->setVisible(false);
    ui->Cup2_3->setVisible(false);
    ui->Cup2_4->setVisible(false);
    ui->Cup2_5->setVisible(false);
    ui->Cup2_6->setVisible(false);


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::changeBackground(QWidget* widget, const QString styletext)
{
    widget->setStyleSheet(styletext);

}

void MainWindow::showcups()
{

   ui->Cup1_1->setVisible(true);
   ui->Cup1_2->setVisible(true);
   ui->Cup1_3->setVisible(true);
   ui->Cup1_4->setVisible(true);
   ui->Cup1_5->setVisible(true);
   ui->Cup1_6->setVisible(true);

   ui->Cup2_1->setVisible(true);
   ui->Cup2_2->setVisible(true);
   ui->Cup2_3->setVisible(true);
   ui->Cup2_4->setVisible(true);
   ui->Cup2_5->setVisible(true);
   ui->Cup2_6->setVisible(true);


}

void MainWindow::hidecups()
{
    ui->Cup1_1->setVisible(false);
    ui->Cup1_2->setVisible(false);
    ui->Cup1_3->setVisible(false);
    ui->Cup1_4->setVisible(false);
    ui->Cup1_5->setVisible(false);
    ui->Cup1_6->setVisible(false);

    ui->Cup2_1->setVisible(false);
    ui->Cup2_2->setVisible(false);
    ui->Cup2_3->setVisible(false);
    ui->Cup2_4->setVisible(false);
    ui->Cup2_5->setVisible(false);
    ui->Cup2_6->setVisible(false);

}

void MainWindow::redcup(QLabel* cup)
{
    cup->setStyleSheet("background-image: url(:/img/Pics/red_cup.png);");
}

void MainWindow::greencup(QLabel* cup)
{
    cup->setStyleSheet("background-image: url(:/img/Pics/green_cup.png);");

}

void MainWindow::handler(QString arg)
{
    if(arg == "idle")
        {hidecups();
        changeBackground(centralWidget(), IDLE);}
    else if(arg == "start game")
        {changeBackground(centralWidget(), GAMEBOARD);
        showcups();}
    else if(arg == "victory1")
        {hidecups();
        changeBackground(centralWidget(), VICTORY_SIDE_1);}
    else if(arg == "victory2")
        {hidecups();
        changeBackground(centralWidget(), VICTORY_SIDE_2    );}
    else if(arg == "close")
        {QApplication::quit();}
   if ( arg.at(0) == 'r' && arg.at(1) == 'e' && arg.at(2) == 'd')
   {
    if(arg == "red cup1")
    { redcup(ui->Cup1_1);}
    else if(arg == "red cup2")
    { redcup(ui->Cup1_2);}
    else if(arg == "red cup3")
    { redcup(ui->Cup1_3);}
    else if(arg == "red cup4")
    { redcup(ui->Cup1_4);}
    else if(arg == "red cup5")
    { redcup(ui->Cup1_5);}
    else if(arg == "red cup6")
    { redcup(ui->Cup1_6);}
    if(arg == "red cup7")
    { redcup(ui->Cup2_1);}
    else if(arg == "red cup8")
    { redcup(ui->Cup2_2);}
    else if(arg == "red cup9")
    { redcup(ui->Cup2_3);}
    else if(arg == "red cup10")
    { redcup(ui->Cup2_4);}
    else if(arg == "red cup11")
    { redcup(ui->Cup2_5);}
    else if(arg == "red cup12")
    { redcup(ui->Cup2_6);}
   }
   else if( arg.at(0) == 'g' && arg.at(1) == 'r' && arg.at(2) == 'e' && arg.at(3) == 'e' && arg.at(4) == 'n')
   {
       if(arg == "green cup1")
       { greencup(ui->Cup1_1);}
       else if(arg == "green cup2")
       { greencup(ui->Cup1_2);}
       else if(arg == "green cup3")
       { greencup(ui->Cup1_3);}
       else if(arg == "green cup4")
       { greencup(ui->Cup1_4);}
       else if(arg == "green cup5")
       { greencup(ui->Cup1_5);}
       else if(arg == "green cup6")
       { greencup(ui->Cup1_6);}
       if(arg == "green cup7")
       { greencup(ui->Cup2_1);}
       else if(arg == "green cup8")
       { greencup(ui->Cup2_2);}
       else if(arg == "green cup9")
       { greencup(ui->Cup2_3);}
       else if(arg == "green cup10")
       { greencup(ui->Cup2_4);}
       else if(arg == "green cup11")
       { greencup(ui->Cup2_5);}
       else if(arg == "green cup12")
       { greencup(ui->Cup2_6);}
   }



}


void MainWindow::on_lineEdit_returnPressed()
{
    QString entertext = ui->lineEdit->text();
    handler(entertext);
    ui->lineEdit->clear();
}


