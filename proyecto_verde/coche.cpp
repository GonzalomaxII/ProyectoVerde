#include "coche.h"
#include "ui_coche.h"
#include "calculadora.h"
#include "avon.h"

coche::coche(int usrid,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::coche)
    , usrid(usrid)
{
    ui->setupUi(this);
}

coche::~coche()
{
    delete ui;
}
void coche::on_pushButton_clicked()
{
    int cant=ui->lineEdit->text().toInt();
    if (cant==0){
        avon *skl= new avon(0,0,usrid);
        skl->show();
        close();
    }
    else{
        calculadora *skl= new calculadora(cant,usrid);
        skl->show();
        close();
    }
}
