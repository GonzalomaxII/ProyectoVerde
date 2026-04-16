/********************************************************************************
** Form generated from reading UI file 'avon.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVON_H
#define UI_AVON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_avon
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *avon)
    {
        if (avon->objectName().isEmpty())
            avon->setObjectName("avon");
        avon->resize(400, 300);
        lineEdit = new QLineEdit(avon);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 120, 181, 25));
        pushButton = new QPushButton(avon);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 190, 101, 25));
        pushButton->setMouseTracking(false);
        label = new QLabel(avon);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 60, 181, 51));

        retranslateUi(avon);

        QMetaObject::connectSlotsByName(avon);
    } // setupUi

    void retranslateUi(QDialog *avon)
    {
        avon->setWindowTitle(QCoreApplication::translate("avon", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("avon", "confirmar", nullptr));
        label->setText(QCoreApplication::translate("avon", "Cuantas horas viajas en \n"
"avion cada a\303\261o?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class avon: public Ui_avon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVON_H
