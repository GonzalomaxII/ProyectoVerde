/********************************************************************************
** Form generated from reading UI file 'menu_lecciones.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_LECCIONES_H
#define UI_MENU_LECCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu_lecciones
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *menu_lecciones)
    {
        if (menu_lecciones->objectName().isEmpty())
            menu_lecciones->setObjectName("menu_lecciones");
        menu_lecciones->resize(498, 339);
        label = new QLabel(menu_lecciones);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 241, 81));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        label->setFont(font);
        label_2 = new QLabel(menu_lecciones);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 201, 41));
        label_3 = new QLabel(menu_lecciones);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 150, 321, 181));
        lineEdit = new QLineEdit(menu_lecciones);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(370, 250, 113, 26));
        label_4 = new QLabel(menu_lecciones);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(370, 220, 121, 20));
        pushButton = new QPushButton(menu_lecciones);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 290, 111, 29));

        retranslateUi(menu_lecciones);

        QMetaObject::connectSlotsByName(menu_lecciones);
    } // setupUi

    void retranslateUi(QDialog *menu_lecciones)
    {
        menu_lecciones->setWindowTitle(QCoreApplication::translate("menu_lecciones", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("menu_lecciones", "<html><head/><body><p align=\"center\">Bienvenido al menu </p><p align=\"center\">lecciones de aprendizaje</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("menu_lecciones", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; font-style:italic;\">Apartados Disponibles:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("menu_lecciones", "<html><head/><body><p><span style=\" font-weight:700;\">1)Introducci\303\263n:</span> Gases de Efecto Invernadero .</p><p><span style=\" font-weight:700;\">2)Causas</span> y Consecuencias del Cambio Clim\303\241tico.</p><p><span style=\" font-weight:700;\">3)Soluciones</span> al Cambio Clim\303\241tico.</p><p><span style=\" font-weight:700;\">4)</span>\302\277<span style=\" font-weight:700;\">Que es</span> la Huella de Carbono? y </p><p>\302\277Como podemos Reducirla?.</p><p><span style=\" font-weight:700;\">0)Salir</span></p><p><br/></p><p><br/></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("menu_lecciones", "ingrese su opci\303\263n", nullptr));
        pushButton->setText(QCoreApplication::translate("menu_lecciones", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu_lecciones: public Ui_menu_lecciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_LECCIONES_H
