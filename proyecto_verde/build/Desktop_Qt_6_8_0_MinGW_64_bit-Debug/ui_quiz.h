/********************************************************************************
** Form generated from reading UI file 'quiz.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZ_H
#define UI_QUIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Quiz
{
public:
    QLabel *label;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Quiz)
    {
        if (Quiz->objectName().isEmpty())
            Quiz->setObjectName("Quiz");
        Quiz->resize(576, 419);
        label = new QLabel(Quiz);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 30, 281, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_3 = new QLabel(Quiz);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 130, 381, 41));
        textBrowser = new QTextBrowser(Quiz);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 120, 121, 51));
        pushButton = new QPushButton(Quiz);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 360, 111, 51));
        label_2 = new QLabel(Quiz);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 101, 20));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_4 = new QLabel(Quiz);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 80, 41, 20));
        label_4->setFont(font1);
        radioButton = new QRadioButton(Quiz);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 210, 110, 31));
        radioButton_2 = new QRadioButton(Quiz);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(20, 260, 110, 31));
        radioButton_3 = new QRadioButton(Quiz);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(20, 310, 110, 31));
        label_5 = new QLabel(Quiz);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 210, 331, 31));
        label_6 = new QLabel(Quiz);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(150, 260, 331, 31));
        label_7 = new QLabel(Quiz);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(150, 310, 331, 31));

        retranslateUi(Quiz);

        QMetaObject::connectSlotsByName(Quiz);
    } // setupUi

    void retranslateUi(QDialog *Quiz)
    {
        Quiz->setWindowTitle(QCoreApplication::translate("Quiz", "Quiz", nullptr));
        label->setText(QCoreApplication::translate("Quiz", "TEST DE CONOCIMIENTO", nullptr));
        label_3->setText(QCoreApplication::translate("Quiz", "apreta en el boton para comenzar", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Quiz", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Descripcion de la pregunta</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Quiz", "COMENZAR", nullptr));
        label_2->setText(QCoreApplication::translate("Quiz", "pregunta n\302\260:", nullptr));
        label_4->setText(QCoreApplication::translate("Quiz", "?", nullptr));
        radioButton->setText(QCoreApplication::translate("Quiz", "Respuesta A:", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Quiz", "Respuesta B:", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Quiz", "Respuesta C:", nullptr));
        label_5->setText(QCoreApplication::translate("Quiz", "Esperando comienzo...", nullptr));
        label_6->setText(QCoreApplication::translate("Quiz", "Esperando comienzo...", nullptr));
        label_7->setText(QCoreApplication::translate("Quiz", "Esperando comienzo...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quiz: public Ui_Quiz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZ_H
