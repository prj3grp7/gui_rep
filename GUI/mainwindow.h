#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include <QLabel>
#include <ui_mainwindow.h>
#include <MsgProtocol.h>
#include <UserInfo.h>
#include <Display.h>
#include "Display.h"
#include <bitset>
#include <EndGameCfm.h>
#include <DisplayRequest.h>


class Display_functor;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void dispatcher(Display_show id, Message*);
    void Cupcolor(int cup, int colorcode);
    QLabel* cups[12];

private:
    void handleDisplayShowIdle();
    void handleDisplayShowPlaceCups();
    void handleDisplayShowInfo();
    void handleDisplayPlaying();
    void handleUpdateCups(DisplayRequest*);
    void handleUpdateWin(EndGameCfm* );
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
