#include "elecpbien.h"
#include "ui_elecpbien.h"
#include "plastico.h"

elecpbien::elecpbien(double co2,double emi_com,double avon,double carne,int usrid,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::elecpbien)
    , co2(co2)
    , emi_com(emi_com)
    , avon(avon)
    , carne(carne)
    , usrid(usrid)
{
    ui->setupUi(this);
}

elecpbien::~elecpbien()
{
    delete ui;
}

void elecpbien::on_pushButton_clicked()
{
    double elec=0;
    QString cop=ui->lineEdit->text();
    QSqlQuery consulta;
    consulta.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='Electricidad'"); //cantidad=0.428 en este caso
    if (!consulta.exec()) {
        qDebug() << "Error:" << consulta.lastError().text();}
    consulta.first();
    float aus=consulta.value(0).toFloat();
    elec=cop.toDouble()*aus;
    co2+=elec;
    plastico *skl= new plastico(co2,emi_com,avon,carne,elec,usrid);
    skl->show();
    close();
}
