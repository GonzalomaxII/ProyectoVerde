#include "menu_opc.h"
#include "ui_menu_opc.h"
#include "quiz.h"
#include "menu_lecciones.h"
#include "coche.h"

menu_opc::menu_opc(QString valor_line3, QWidget *parent) //declarar tambine variables de otras ventanas
    : QDialog(parent)
    , ui(new Ui::menu_opc)
    , valor_line3(valor_line3) //permite que pueda usarlo en toda la pagina
{
    ui->setupUi(this);
    qDebug() << "desde la otra ventana" << valor_line3;
}

menu_opc::~menu_opc()
{
    delete ui;
}

void menu_opc::on_pushButton_1_clicked()//huella de carbono
{
    int usrid=0;
    QSqlQuery consulta;
    consulta.prepare("SELECT UsuarioID FROM usuarios WHERE Correo= :Correo");
    consulta.bindValue(":Correo", valor_line3);
    if (!consulta.exec()) {
        qDebug() << "Error:" << consulta.lastError().text();}
    consulta.first();
    usrid=consulta.value(0).toInt();
    coche *skl= new coche(usrid);
    skl->show();
    close();
}

void menu_opc::on_pushButton_2_clicked()//lecciones de aprendizaje
{
    menu_lecciones *skl2= new menu_lecciones()   ;
    skl2->show();
}

void menu_opc::on_pushButton_3_clicked()//test de conocimiento
{
    int preguntaID=0;
    int puntaje=0;
    Quiz *skl= new Quiz(preguntaID, puntaje);
    skl->show();
}

