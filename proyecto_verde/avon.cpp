#include "avon.h"
#include "ui_avon.h"
#include "elec.h"

avon::avon(double co2,double emi_com,int usrid,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::avon)
    , co2(co2)
    , emi_com(emi_com)
    , usrid(usrid)
{
    ui->setupUi(this);

}

avon::~avon()
{
    delete ui;
}

void avon::on_pushButton_clicked()
{
    double avon=0;
    QString cop=ui->lineEdit->text();
    QSqlQuery consulta;
    consulta.prepare("SELECT cantidad FROM emi_consumo WHERE Tipo='Avion'"); //cantidad=440 en este caso
    if(!consulta.exec()) {
        qDebug() << "Error:" << consulta.lastError().text();}
    consulta.first();
    int aus=consulta.value(0).toInt();
    avon=cop.toDouble()*aus/52;
    co2+=avon;
    elec *skl= new elec(co2,emi_com,avon,usrid);
    skl->show();
    close();
}
