/********************************************************************************
** Form generated from reading UI file 'demostra.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOSTRA_H
#define UI_DEMOSTRA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_demostra
{
public:
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QLabel *label_6;
    QLabel *label;

    void setupUi(QDialog *demostra)
    {
        if (demostra->objectName().isEmpty())
            demostra->setObjectName("demostra");
        demostra->resize(756, 494);
        label_2 = new QLabel(demostra);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 120, 731, 20));
        label_4 = new QLabel(demostra);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(225, 140, 300, 300));
        label_5 = new QLabel(demostra);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(225, 120, 541, 20));
        pushButton = new QPushButton(demostra);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 440, 75, 24));
        label_3 = new QLabel(demostra);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 140, 711, 20));
        pushButton_2 = new QPushButton(demostra);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(575, 440, 75, 24));
        tableView = new QTableView(demostra);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(105, 30, 541, 401));
        label_6 = new QLabel(demostra);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(25, 120, 201, 20));
        label = new QLabel(demostra);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 100, 711, 20));

        retranslateUi(demostra);

        QMetaObject::connectSlotsByName(demostra);
    } // setupUi

    void retranslateUi(QDialog *demostra)
    {
        demostra->setWindowTitle(QCoreApplication::translate("demostra", "Mostrar datos", nullptr));
        label_2->setText(QCoreApplication::translate("demostra", "PLACEHOLDER", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton->setText(QCoreApplication::translate("demostra", "Anterior", nullptr));
        label_3->setText(QCoreApplication::translate("demostra", "PLACEHOLDER", nullptr));
        pushButton_2->setText(QCoreApplication::translate("demostra", "Siguiente", nullptr));
        label_6->setText(QString());
        label->setText(QCoreApplication::translate("demostra", "Con los datos que viajas en coche destacamos que", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demostra: public Ui_demostra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOSTRA_H
