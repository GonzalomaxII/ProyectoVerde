/********************************************************************************
** Form generated from reading UI file 'elec.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELEC_H
#define UI_ELEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_elec
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *elec)
    {
        if (elec->objectName().isEmpty())
            elec->setObjectName("elec");
        elec->resize(400, 300);
        pushButton = new QPushButton(elec);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 200, 101, 25));
        pushButton->setMouseTracking(false);
        lineEdit = new QLineEdit(elec);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 130, 181, 25));
        label = new QLabel(elec);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 70, 181, 51));

        retranslateUi(elec);

        QMetaObject::connectSlotsByName(elec);
    } // setupUi

    void retranslateUi(QDialog *elec)
    {
        elec->setWindowTitle(QCoreApplication::translate("elec", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("elec", "confirmar", nullptr));
        label->setText(QCoreApplication::translate("elec", "Cuanta carne vacuna \n"
"(en kg) consumis por \n"
"semana?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class elec: public Ui_elec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELEC_H
