#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu_opc.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<QSqlDatabase::drivers();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("12341234");
    db.setDatabaseName("proyecto_verde");
    if (!db.open()) {
        qDebug() << "Error al conectar: " << db.lastError().text();
    } else{
        ui->label->setStyleSheet("color: green;");
        ui->label_2->setStyleSheet("color: green;");
        ui->label_3->setStyleSheet("color: green;");
        ui->label_4->setStyleSheet("color: green;");
        ui->label_5->setStyleSheet("color: green;");
        ui->label_6->setStyleSheet("color: green;");
        ui->label_7->setStyleSheet("color: green;");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool verificar_gmail(const QString &email){//asegura que gmail sea válido
    int estadovalidacion=0;//verificador
    for(int i=0; i<email.length(); i++){
        if(estadovalidacion == 2){
            if (email[i] == '.'){
                estadovalidacion=1;//se encontro un punto
            }
        }
        if(email[i] == '@'){
            if(i > 0 && i < email.length()-1) {
                if(email[i+1] != '.' && email[email.length()-1] != '.'){
                    estadovalidacion=2;//se encontro un @ válido
                }
                else{
                    QMessageBox::critical(0, "ERROR:", "Dirección de correo electrónico no válida (punto adyacente al '@' o al final).");
                    return false;
                }
            }
            else{
                QMessageBox::critical(0, "ERROR:", "Dirección de correo electrónico no válida (falta un carácter antes o después del '@').");
                return false;
            }
        }
    }
    if(estadovalidacion == 2){
        QMessageBox::critical(0, "ERROR:", "La dirección de correo electrónico le falta un ('.').");
        return false;
    }
    if(estadovalidacion == 1){ //correo validado
        return true;
    }
    QMessageBox::critical(0, "ERROR:", "La dirección de correo electrónico le falta un ('.' y '@').");
    return false;
}

void MainWindow::on_pushButton_clicked() //iniciar sesión
{
    //extrae valores ingresado por usuario
    QString valor_line;
    valor_line=ui->lineEdit->text();
    QString valor_line2;
    valor_line2=ui->lineEdit_2->text();
    QString valor_line3;
    valor_line3=ui->lineEdit_3->text();
    QString valor_line4;
    valor_line4=ui->lineEdit_4->text();
    qDebug() << valor_line << valor_line2 << valor_line3 << valor_line4;
    if(valor_line!="" && valor_line2!="" && valor_line3!="" && valor_line4!=""){
        if(verificar_gmail(valor_line3)){
            QSqlQuery consulta;
            consulta.prepare("SELECT correo FROM usuarios WHERE correo= :correo ");//consulta sobre si el correo ya esta registrado
            consulta.bindValue(":correo", valor_line3);
            if(!consulta.exec()){
                qDebug() << "Error en la consulta:" << consulta.lastError().text();
                return;
            }
            if(consulta.next()){
                QSqlQuery consulta2;
                consulta2.prepare("SELECT contrasena FROM usuarios WHERE correo= :correo ");
                consulta2.bindValue(":correo", valor_line3);
                QString contrasena;
                if(!consulta2.exec()){
                    qDebug() << "Error en la consulta:" << consulta2.lastError().text();
                    return;
                }
                consulta2.first();
                contrasena=consulta2.value(0).toString();
                qDebug() << contrasena;
                if(valor_line2==contrasena){
                    menu_opc *skl= new menu_opc(valor_line3);
                    skl->show();
                }
                else{
                    QMessageBox::critical(0,"ERROR:","Contraseña incorrecta");
                }
            }
            else{
                QMessageBox::critical(0,"ERROR:","Correo no registrado, registrese para continuar");
            }
        }
    }
    else{
        QMessageBox::critical(0,"ERROR:","Faltan ingresar datos");
    }
}

void MainWindow::on_pushButton_2_clicked() //registrarse
{
    //extrae valores ingresado por usuario
    QString valor_line;
    valor_line=ui->lineEdit->text();
    QString valor_line2;
    valor_line2=ui->lineEdit_2->text();
    QString valor_line3;
    valor_line3=ui->lineEdit_3->text();
    QString valor_line4;
    valor_line4=ui->lineEdit_4->text();
    qDebug() << valor_line << valor_line2 << valor_line3 << valor_line4;
    if(valor_line!="" && valor_line2!="" && valor_line3!="" && valor_line4!=""){
        if(verificar_gmail(valor_line3)){
            QSqlQuery consulta;
            consulta.prepare("SELECT correo FROM usuarios WHERE correo= :correo ");//consulta sobre si el correo ya esta registrado
            consulta.bindValue(":correo", valor_line3);
            if(!consulta.exec()){
                qDebug() << "Error en la consulta:" << consulta.lastError().text();
                return;
            }
            if(consulta.next()){
                QMessageBox::critical(0,"ERROR:","Correo ya registrado");
            }
            else{
                QSqlQuery consulta;
                consulta.prepare("INSERT INTO usuarios(nombre, ubicacion, contrasena, correo)VALUES"
                                 "(:nombre, :ubicacion, :contrasena, :correo)");//consulta sobre si el correo ya esta registrado
                consulta.bindValue(":nombre", valor_line);
                 consulta.bindValue(":ubicacion", valor_line4);
                consulta.bindValue(":contrasena", valor_line2);
                consulta.bindValue(":correo", valor_line3);
                if(!consulta.exec()){
                    qDebug() << "Error en la consulta:" << consulta.lastError().text();
                    return;
                }
                menu_opc *skl= new menu_opc(valor_line3);
                skl->show();
            }
        }
    }
    else{
        QMessageBox::critical(0,"ERROR:","Faltan ingresar datos");
    }
}
