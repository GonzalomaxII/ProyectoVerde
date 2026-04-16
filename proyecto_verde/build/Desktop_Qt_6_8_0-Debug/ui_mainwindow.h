/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(412, 345);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 121, 31));
        label->setBaseSize(QSize(70, 70));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        label->setFont(font);
        label->setAcceptDrops(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 40, 311, 51));
        label_2->setSizeIncrement(QSize(0, 0));
        label_2->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        label_2->setFont(font1);
        label_2->setTextFormat(Qt::TextFormat::AutoText);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 171, 20));
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 140, 71, 20));
        label_4->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 180, 101, 20));
        label_5->setFont(font2);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 220, 63, 20));
        label_6->setFont(font2);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 260, 81, 20));
        label_7->setFont(font2);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 140, 113, 26));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 180, 113, 26));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(140, 220, 113, 26));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(140, 260, 113, 26));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 210, 101, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 250, 101, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 412, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "RASTRO_VERDE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Bienvenido al sistema de registro!", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "rellene todo los datos", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Correo:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Ubicaci\303\263n:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Iniciar Sesi\303\263n", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Registrarse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
