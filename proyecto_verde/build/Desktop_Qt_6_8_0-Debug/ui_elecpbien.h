/********************************************************************************
** Form generated from reading UI file 'elecpbien.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELECPBIEN_H
#define UI_ELECPBIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_elecpbien
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *elecpbien)
    {
        if (elecpbien->objectName().isEmpty())
            elecpbien->setObjectName("elecpbien");
        elecpbien->resize(400, 300);
        lineEdit = new QLineEdit(elecpbien);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 120, 181, 25));
        label = new QLabel(elecpbien);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 60, 181, 51));
        pushButton = new QPushButton(elecpbien);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 190, 101, 25));
        pushButton->setMouseTracking(false);

        retranslateUi(elecpbien);

        QMetaObject::connectSlotsByName(elecpbien);
    } // setupUi

    void retranslateUi(QDialog *elecpbien)
    {
        elecpbien->setWindowTitle(QCoreApplication::translate("elecpbien", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("elecpbien", "Cuanta electricidad \n"
"(en kWh) consumis por \n"
"semana?", nullptr));
        pushButton->setText(QCoreApplication::translate("elecpbien", "confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class elecpbien: public Ui_elecpbien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELECPBIEN_H
