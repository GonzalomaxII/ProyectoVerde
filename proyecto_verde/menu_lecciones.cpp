#include "menu_lecciones.h"
#include "ui_menu_lecciones.h"
#include "leccion_1.h"

menu_lecciones::menu_lecciones(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menu_lecciones)
{
    ui->setupUi(this);
}

menu_lecciones::~menu_lecciones()
{
    delete ui;
}

void menu_lecciones::on_pushButton_clicked()
{
    QString opcion= ui->lineEdit->text();
    qDebug() << opcion;
    if(opcion=='0'){
        this->close();
    }
    else if(opcion=='1'){
        leccion_1 *skl= new leccion_1(opcion);
        skl->show();
    }
    else if(opcion=='2'){
        leccion_1 *skl= new leccion_1(opcion);
        skl->show();
    }
    else if(opcion=='3'){
        leccion_1 *skl= new leccion_1(opcion);
        skl->show();
    }
    else if(opcion=='4'){
        leccion_1 *skl= new leccion_1(opcion);
        skl->show();
    }
    else{
        QMessageBox::critical(0,"ERROR:", opcion+": no es una opción valida");
    }
}

