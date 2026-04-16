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
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 85, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 127, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 106, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 42, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 57, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(255, 255, 255, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        QBrush brush9(QColor(0, 42, 0, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        QBrush brush10(QColor(0, 60, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush10);
        calculadora->setPalette(palette);
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
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        pushButton->setPalette(palette1);
        pushButton->setAutoFillBackground(false);

        retranslateUi(calculadora);

        QMetaObject::connectSlotsByName(calculadora);
    } // setupUi

    void retranslateUi(QDialog *calculadora)
    {
        calculadora->setWindowTitle(QCoreApplication::translate("calculadora", "Calcular co2 por auto", nullptr));
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
