/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_calculadora
{
public:
    QLabel *label;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *calculadora)
    {
        if (calculadora->objectName().isEmpty())
            calculadora->setObjectName("calculadora");
        calculadora->resize(400, 300);
        label = new QLabel(calculadora);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 231, 16));
        lineEdit_2 = new QLineEdit(calculadora);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(40, 250, 151, 22));
        comboBox = new QComboBox(calculadora);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(40, 60, 171, 22));
        label_3 = new QLabel(calculadora);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 210, 181, 31));
        label_2 = new QLabel(calculadora);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 110, 191, 31));
        lineEdit = new QLineEdit(calculadora);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 150, 151, 22));
        pushButton = new QPushButton(calculadora);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(270, 150, 89, 25));

        retranslateUi(calculadora);

        QMetaObject::connectSlotsByName(calculadora);
    } // setupUi

    void retranslateUi(QDialog *calculadora)
    {
        calculadora->setWindowTitle(QCoreApplication::translate("calculadora", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("calculadora", "Que tipo de combustible utilizas?", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("calculadora", "Gasolina", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("calculadora", "Diesel", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("calculadora", "Electrico", nullptr));

        label_3->setText(QCoreApplication::translate("calculadora", "consumo de combustible \n"
"cada 100km", nullptr));
        label_2->setText(QCoreApplication::translate("calculadora", "Kilometros viajados \n"
"cada semana", nullptr));
        pushButton->setText(QCoreApplication::translate("calculadora", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculadora: public Ui_calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
