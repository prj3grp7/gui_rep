/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Cup1_1;
    QLabel *Cup1_2;
    QLabel *Cup1_3;
    QLabel *Cup1_4;
    QLabel *Cup1_5;
    QLabel *Cup1_6;
    QLabel *Cup2_1;
    QLabel *Cup2_2;
    QLabel *Cup2_3;
    QLabel *Cup2_4;
    QLabel *Cup2_5;
    QLabel *Cup2_6;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(533, 300);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/idle.png);"));
        Cup1_1 = new QLabel(centralWidget);
        Cup1_1->setObjectName(QString::fromUtf8("Cup1_1"));
        Cup1_1->setGeometry(QRect(0, 44, 71, 71));
        Cup1_1->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup1_2 = new QLabel(centralWidget);
        Cup1_2->setObjectName(QString::fromUtf8("Cup1_2"));
        Cup1_2->setGeometry(QRect(0, 115, 71, 71));
        Cup1_2->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup1_3 = new QLabel(centralWidget);
        Cup1_3->setObjectName(QString::fromUtf8("Cup1_3"));
        Cup1_3->setGeometry(QRect(0, 186, 71, 71));
        Cup1_3->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup1_4 = new QLabel(centralWidget);
        Cup1_4->setObjectName(QString::fromUtf8("Cup1_4"));
        Cup1_4->setGeometry(QRect(71, 79, 71, 71));
        Cup1_4->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup1_5 = new QLabel(centralWidget);
        Cup1_5->setObjectName(QString::fromUtf8("Cup1_5"));
        Cup1_5->setGeometry(QRect(71, 150, 71, 71));
        Cup1_5->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup1_6 = new QLabel(centralWidget);
        Cup1_6->setObjectName(QString::fromUtf8("Cup1_6"));
        Cup1_6->setGeometry(QRect(150, 115, 71, 71));
        Cup1_6->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup2_1 = new QLabel(centralWidget);
        Cup2_1->setObjectName(QString::fromUtf8("Cup2_1"));
        Cup2_1->setGeometry(QRect(462, 44, 71, 71));
        Cup2_1->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup2_2 = new QLabel(centralWidget);
        Cup2_2->setObjectName(QString::fromUtf8("Cup2_2"));
        Cup2_2->setGeometry(QRect(462, 115, 71, 71));
        Cup2_2->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup2_3 = new QLabel(centralWidget);
        Cup2_3->setObjectName(QString::fromUtf8("Cup2_3"));
        Cup2_3->setGeometry(QRect(462, 186, 71, 71));
        Cup2_3->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup2_4 = new QLabel(centralWidget);
        Cup2_4->setObjectName(QString::fromUtf8("Cup2_4"));
        Cup2_4->setGeometry(QRect(391, 79, 71, 71));
        Cup2_4->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup2_5 = new QLabel(centralWidget);
        Cup2_5->setObjectName(QString::fromUtf8("Cup2_5"));
        Cup2_5->setGeometry(QRect(391, 150, 71, 71));
        Cup2_5->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        Cup2_6 = new QLabel(centralWidget);
        Cup2_6->setObjectName(QString::fromUtf8("Cup2_6"));
        Cup2_6->setGeometry(QRect(320, 115, 71, 71));
        Cup2_6->setStyleSheet(QString::fromUtf8("background-image: url(:/img/Pics/green_cup.png);"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(206, 10, 120, 25));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        Cup1_1->setText(QString());
        Cup1_2->setText(QString());
        Cup1_3->setText(QString());
        Cup1_4->setText(QString());
        Cup1_5->setText(QString());
        Cup1_6->setText(QString());
        Cup2_1->setText(QString());
        Cup2_2->setText(QString());
        Cup2_3->setText(QString());
        Cup2_4->setText(QString());
        Cup2_5->setText(QString());
        Cup2_6->setText(QString());
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
