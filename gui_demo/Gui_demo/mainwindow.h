#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMainWindow>
#include <stdfix.h>
#include <QThread>
#include <qthread.h>




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void changeBackground(QWidget*, const QString);
    void showcups();
    void hidecups();
    void redcup(QLabel*);
    void greencup(QLabel*);
    void loadanimation(QWidget*);
    void handler(QString);




private slots:


    void on_lineEdit_returnPressed();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
