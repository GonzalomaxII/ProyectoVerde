/********************************************************************************
** Form generated from reading UI file 'plastico.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLASTICO_H
#define UI_PLASTICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_plastico
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *plastico)
    {
        if (plastico->objectName().isEmpty())
            plastico->setObjectName("plastico");
        plastico->resize(400, 300);
        pushButton = new QPushButton(plastico);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 160, 89, 25));
        label = new QLabel(plastico);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 60, 171, 51));
        comboBox = new QComboBox(plastico);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(110, 120, 171, 22));

        retranslateUi(plastico);

        QMetaObject::connectSlotsByName(plastico);
    } // setupUi

    void retranslateUi(QDialog *plastico)
    {
        plastico->setWindowTitle(QCoreApplication::translate("plastico", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("plastico", "Confirmar", nullptr));
        label->setText(QCoreApplication::translate("plastico", "Que describe mejor tu\n"
"consumo de pl\303\241stico: ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("plastico", "Consumo alto", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("plastico", "Consumo medio", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("plastico", "Minimo consumo", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("plastico", "Cero consumo", nullptr));

    } // retranslateUi

};

namespace Ui {
    class plastico: public Ui_plastico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLASTICO_H
