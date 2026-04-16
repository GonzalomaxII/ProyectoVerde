/********************************************************************************
** Form generated from reading UI file 'leccion_1.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECCION_1_H
#define UI_LECCION_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_leccion_1
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *leccion_1)
    {
        if (leccion_1->objectName().isEmpty())
            leccion_1->setObjectName("leccion_1");
        leccion_1->resize(828, 588);
        textBrowser = new QTextBrowser(leccion_1);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 0, 501, 591));
        pushButton = new QPushButton(leccion_1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(630, 520, 201, 71));
        label = new QLabel(leccion_1);
        label->setObjectName("label");
        label->setGeometry(QRect(520, 20, 291, 481));

        retranslateUi(leccion_1);

        QMetaObject::connectSlotsByName(leccion_1);
    } // setupUi

    void retranslateUi(QDialog *leccion_1)
    {
        leccion_1->setWindowTitle(QCoreApplication::translate("leccion_1", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("leccion_1", "Salir de la Ventana", nullptr));
        label->setText(QCoreApplication::translate("leccion_1", "IMAGEN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class leccion_1: public Ui_leccion_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECCION_1_H
