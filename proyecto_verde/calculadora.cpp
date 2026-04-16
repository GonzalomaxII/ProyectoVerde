#include "calculadora.h"
#include "ui_calculadora.h"
#include "avon.h"

calculadora::calculadora(int cant,int usrid,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::calculadora)
    , cant(cant)
    , usrid(usrid)
{
    ui->setupUi(this);
}

calculadora::~calculadora()
{
    delete ui;
}

void calculadora::on_pushButton_clicked()
{
    if(cant>1)
    {
        QString opc, kilometros, consumo;
        double opc2=0;
        opc=ui->comboBox->currentText();
        QString op1="Gasolina";
        QString op2="Diesel";
        QString op3="Electrico";
        if (opc==op1){
            QSqlQuery consulta;
            consulta.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='Gasolina'"); //cantidad=2.35 en este caso
            if (!consulta.exec()) {
                qDebug() << "Error:" << consulta.lastError().text();}
            consulta.first();
            opc2=consulta.value(0).toFloat();
        }
        else if(opc==op2){
            QSqlQuery consulta2;
            consulta2.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='Diesel'"); //cantidad=2.67 en este caso
            if (!consulta2.exec()) {
                qDebug() << "Error:" << consulta2.lastError().text();}
            consulta2.first();
            opc2=consulta2.value(0).toFloat();
        }
        else if(opc==op3){
            QSqlQuery consulta3;
            consulta3.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='Electrico'"); //cantidad=0.4 en este caso
            if (!consulta3.exec()) {
                qDebug() << "Error:" << consulta3.lastError().text();}
            consulta3.first();
            opc2=consulta3.value(0).toFloat();
        }
        kilometros=ui->lineEdit->text();
        consumo=ui->lineEdit_2->text();
        emi_com=(kilometros.toDouble()/100)*consumo.toDouble()*opc2;
        co2+=emi_com;
    }
    else{
        QString opc, kilometros, consumo;
        double opc2=0;
        opc=ui->comboBox->currentText();
        QString op1="Gasolina";
        QString op2="Diesel";
        QString op3="Electrico";
        if (opc==op1){
            QSqlQuery consulta;
            consulta.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='Gasolina'"); //cantidad=2.35 en este caso
            if (!consulta.exec()) {
                qDebug() << "Error:" << consulta.lastError().text();}
            consulta.first();
            opc2=consulta.value(0).toFloat();
        }
        else if(opc==op2){
            QSqlQuery consulta2;
            consulta2.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='Diesel'"); //cantidad=2.67 en este caso
            if (!consulta2.exec()) {
                qDebug() << "Error:" << consulta2.lastError().text();}
            consulta2.first();
            opc2=consulta2.value(0).toFloat();
        }
        else if(opc==op3){
            QSqlQuery consulta3;
            consulta3.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='Electrico'"); //cantidad=0.4 en este caso
            if (!consulta3.exec()) {
                qDebug() << "Error:" << consulta3.lastError().text();}
            consulta3.first();
            opc2=consulta3.value(0).toFloat();
        }
        kilometros=ui->lineEdit->text();
        consumo=ui->lineEdit_2->text();
        emi_com=(kilometros.toDouble()/100)*consumo.toDouble()*opc2;
        co2+=emi_com;
        avon *skl= new avon(co2,emi_com,usrid);
        skl->show();
        close();
    }
    cant--;
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    QMessageBox::information(0,"Agregado:", "Coche agregado");
}
