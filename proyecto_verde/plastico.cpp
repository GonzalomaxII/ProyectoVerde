#include "plastico.h"
#include "ui_plastico.h"
#include "demostra.h"

plastico::plastico(double co2,double emi_com,double avon,double carne,double elec,int usrid,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::plastico)
    , co2(co2)
    , emi_com(emi_com)
    , avon(avon)
    , carne(carne)
    , elec(elec)
    , usrid(usrid)
{
    ui->setupUi(this);
}

plastico::~plastico()
{
    delete ui;
}

void plastico::on_pushButton_clicked()
{
    QString opc;
    double plasticog=0;
    opc=ui->comboBox->currentText();
    QString op1="Consumo alto";
    QString op2="Consumo medio";
    QString op3="Consumo minimo";
    QString op4="Consumo nulo";
    if (opc==op1){
        QSqlQuery consulta;
        consulta.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='AltoPlastico'"); //cantidad=300 en este caso
        if (!consulta.exec()) {
            qDebug() << "Error:" << consulta.lastError().text();}
        consulta.first();
        plasticog=consulta.value(0).toInt()/52;
        co2+=plasticog;
    }
    else if(opc==op2){
        QSqlQuery consulta;
        consulta.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='MedioPlastico'"); //cantidad=175 en este caso
        if (!consulta.exec()) {
            qDebug() << "Error:" << consulta.lastError().text();}
        consulta.first();
        plasticog=consulta.value(0).toInt()/52;
        co2+=plasticog;
    }
    else if(opc==op3){
        QSqlQuery consulta;
        consulta.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='BajoPlastico'"); //cantidad=87.5 en este caso
        if (!consulta.exec()) {
            qDebug() << "Error:" << consulta.lastError().text();}
        consulta.first();
        plasticog=consulta.value(0).toFloat()/52;
        co2+=plasticog;
    }
    else if(opc==op4){
        plasticog=0;
    }
    QSqlQuery consulta;
    consulta.prepare("INSERT INTO resul_huella (UsuarioID, emi_com, avion_com, carne_com, electri_com, plastic_com, CO2) "
                     "VALUES (?, ?, ?, ?, ?, ?, ?) "
                     "ON DUPLICATE KEY UPDATE emi_com=?, avion_com=?, carne_com=?, electri_com=?, plastic_com=?, CO2=?");
    consulta.bindValue(0, usrid);
    consulta.bindValue(1, emi_com);
    consulta.bindValue(2, avon);
    consulta.bindValue(3, carne);
    consulta.bindValue(4, elec);
    consulta.bindValue(5, plasticog);
    consulta.bindValue(6, co2);
    consulta.bindValue(7, emi_com);
    consulta.bindValue(8, avon);
    consulta.bindValue(9, carne);
    consulta.bindValue(10, elec);
    consulta.bindValue(11, plasticog);
    consulta.bindValue(12, co2);
    if (!consulta.exec()) {
        qDebug() << "Error:" << consulta.lastError().text();}
    demostra *skl= new demostra(co2,emi_com,avon,carne,elec,plasticog);
    skl->show();
    close();
}
