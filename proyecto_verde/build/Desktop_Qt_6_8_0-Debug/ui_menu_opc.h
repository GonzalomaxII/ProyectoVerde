/********************************************************************************
** Form generated from reading UI file 'menu_opc.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_OPC_H
#define UI_MENU_OPC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu_opc
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;

    void setupUi(QDialog *menu_opc)
    {
        if (menu_opc->objectName().isEmpty())
            menu_opc->setObjectName("menu_opc");
        menu_opc->resize(556, 283);
        label = new QLabel(menu_opc);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 0, 351, 81));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        label->setFont(font);
        label_2 = new QLabel(menu_opc);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 101, 31));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(menu_opc);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 150, 63, 20));
        label_4 = new QLabel(menu_opc);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 120, 251, 21));
        QFont font2;
        font2.setPointSize(10);
        label_4->setFont(font2);
        label_5 = new QLabel(menu_opc);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 180, 311, 21));
        label_5->setFont(font2);
        pushButton_2 = new QPushButton(menu_opc);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(360, 180, 181, 29));
        pushButton_3 = new QPushButton(menu_opc);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(360, 230, 181, 29));
        pushButton_1 = new QPushButton(menu_opc);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(300, 120, 93, 29));

        retranslateUi(menu_opc);

        QMetaObject::connectSlotsByName(menu_opc);
    } // setupUi

    void retranslateUi(QDialog *menu_opc)
    {
        menu_opc->setWindowTitle(QCoreApplication::translate("menu_opc", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("menu_opc", "Bienvenido al menu de Rastro Verde", nullptr));
        label_2->setText(QCoreApplication::translate("menu_opc", "Secciones:", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("menu_opc", "-Huella de Carbono Personal:", nullptr));
        label_5->setText(QCoreApplication::translate("menu_opc", "-Aprendizaje sobre el Medio Ambiente:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("menu_opc", "lecciones de aprendizaje", nullptr));
        pushButton_3->setText(QCoreApplication::translate("menu_opc", "Test de Conocimiento", nullptr));
        pushButton_1->setText(QCoreApplication::translate("menu_opc", "Calcular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu_opc: public Ui_menu_opc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_OPC_H
