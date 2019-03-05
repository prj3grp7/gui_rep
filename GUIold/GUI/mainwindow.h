#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include <QLabel>
#include <ui_mainwindow.h>
#include <MsgProtocol.h>
#include <UserInfo.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void hidecups();
    void showcups();
    void Background(Display msg);
    void Cupcolor(int cup, int colorcode);
    void updatecups();

private:
    Ui::MainWindow *ui;
    QLabel* cups[12] = {ui->cup1,ui->cup2,ui->cup3,ui->cup4,ui->cup5,ui->cup6,ui->cup7,ui->cup8,ui->cup9,ui->cup10,ui->cup11,ui->cup12};
//    QVBoxLayout* row[7] = {ui->row1,ui->row2,ui->row3,ui->row4,ui->row5,ui->row6,ui->row7};
};
#endif // MAINWINDOW_H
