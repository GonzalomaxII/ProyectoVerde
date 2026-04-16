#include "elec.h"
#include "ui_elec.h"
#include "elecpbien.h"

elec::elec(double co2,double emi_com,double avon,int usrid,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::elec)
    , co2(co2)
    , emi_com(emi_com)
    , avon(avon)
    , usrid(usrid)
{
    ui->setupUi(this);
}

elec::~elec()
{
    delete ui;
}

void elec::on_pushButton_clicked()
{
    double carne=0;
    QString cop=ui->lineEdit->text();
    QSqlQuery consulta;
    consulta.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='Carne'"); //cantidad=27 en este caso
    if (!consulta.exec()) {
        qDebug() << "Error:" << consulta.lastError().text();}
    consulta.first();
    int aus=consulta.value(0).toInt();
    carne=cop.toDouble()*aus;
    co2+=carne;
    elecpbien *skl= new elecpbien(co2,emi_com,avon,carne,usrid);
    skl->show();
    close();
}
