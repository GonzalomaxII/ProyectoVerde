#include "demostra.h"
#include "ui_demostra.h"

demostra::demostra(double co2,double emi_com,double avon,double carne,double elec,double plasticog,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::demostra)
    , co2(co2)
    , emi_com(emi_com)
    , avon(avon)
    , carne(carne)
    , elec(elec)
    , plasticog(plasticog)
{
    ui->setupUi(this);
    QString pepe="Tus emisiones semanales (kg de co2): ";
    pepe.append(QString::number(emi_com,'f',3));
    pepe.append("Provocan que un año alcanzes este impacto: ");
    pepe.append(QString::number(emi_com*52,'f',3));
    ui->label_2->setText(pepe);
    ui->tableView->setHidden(true);
    if (emi_com*52<100){
        pepe="Emites menos que el usuario promedio ";
        pepe.append(QString::number(emi_com*52,'f',3));
        pepe.append(", 100");
        ui->label_3->setText(pepe);
    }
    else{
        pepe="Emites mas que el usuario promedio ";
        pepe.append(QString::number(emi_com*52,'f',3));
        pepe.append(", 100");
        ui->label_3->setText(pepe);
    }
}

demostra::~demostra()
{
    delete ui;
}
//"tus emisiones semanal:" emi_com "provocan que un año alcanzes este impacto:" emi_com_anual
void demostra::on_pushButton_clicked() //Boton ANT
{
    ui->label->setText("");
    ui->label_2->setText("");
    ui->label_3->setText("");
    ui->label_5->setText("");
    ui->label_6->setText("");
    ui->label_4->clear();
    ui->tableView->setHidden(true);
    if (pos!=0){
        pos-=1;
    }
    if (pos==0){
        ui->label->setText("Con los datos que viajas en coche destacamos que");
        QString pepe="Tus emisiones semanales (kg de co2): ";
        pepe.append(QString::number(emi_com,'f',3));
        pepe.append("Provocan que un año alcanzes este impacto: ");
        pepe.append(QString::number(emi_com*52,'f',3));
        ui->label_2->setText(pepe);
        if (emi_com*52<100){
            pepe="Emites menos que el usuario promedio ";
            pepe.append(QString::number(emi_com*52,'f',3));
            pepe.append(", 100");
            ui->label_3->setText(pepe);
        }
        else{
            pepe="Emites mas que el usuario promedio ";
            pepe.append(QString::number(emi_com*52,'f',3));
            pepe.append(", 100");
            ui->label_3->setText(pepe);
        }
    }
    else if (pos==1){
        ui->label->setText("Las horas que viajas anualmente en avion tienen este efecto");
        ui->label_5->setText(QString::number(avon,'f',3));
        ui->label_6->setText("Los kg de co2 generado serian:");
        if (avon==0){
            QPixmap pix("bosbien.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else if(avon<=50){
            QPixmap pix("bosmid.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else{
            QPixmap pix("bosmal.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
    }
    else if (pos==2){
        ui->label->setText("Estos son los efectos del consumo de carne semanal");
        ui->label_5->setText(QString::number(carne,'f',3));
        ui->label_6->setText("Los kg de co2 generado serian:");
        if (carne<=30){
            QPixmap pix("floreciendo.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else if(carne<=60){
            QPixmap pix("muriendo.jpeg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else{
            QPixmap pix("seco.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
    }
    else if (pos==3){
        ui->label->setText("Estos son los efectos del consumo de electricidad semanal");
        ui->label_5->setText(QString::number(elec,'f',3));
        ui->label_6->setText("Los kg de co2 generado serian:");
        if (elec<=0){
            QPixmap pix("fullprad.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else if(elec<=25){
            QPixmap pix("midprad.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else if(elec<=55){
            QPixmap pix("pradera_windows.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else{
            QPixmap pix("desierto.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
    }
    else if (pos==4){
        ui->label->setText("Estos son los efectos del consumo de plastico semanal");
        ui->label_5->setText(QString::number(plasticog,'f',3));
        ui->label_6->setText("Los kg de co2 generado serian:");
        if (plasticog==0){
            QMovie *pix= new QMovie("tierranormal.gif");
            ui->label_4->setMovie(pix);
            pix->start();
        }
        else if(plasticog<=87.5/52){
            QPixmap pix("tieracierto.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else if(plasticog<=175/52){
            QMovie *pix= new QMovie("tierradrenando.gif");
            ui->label_4->setMovie(pix);
            pix->start();
        }
        else{
            QMovie *pix= new QMovie("findelatierra.gif");
            ui->label_4->setMovie(pix);
            pix->start();
        }
    }
}

void demostra::on_pushButton_2_clicked() //Boton SIG
{
    ui->label->setText("");
    ui->label_2->setText("");
    ui->label_3->setText("");
    ui->label_5->setText("");
    ui->label_6->setText("");
    ui->label_4->clear();
    if (pos!=5){
        pos+=1;
    }
    if (pos==1){
        ui->label->setText("Las horas que viajas anualmente en avion tienen este efecto");
        ui->label_5->setText(QString::number(avon,'f',3));
        ui->label_6->setText("Los kg de co2 generado serian:");
        if (avon==0){
            QPixmap pix("bosbien.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else if(avon<=50){
            QPixmap pix("bosmid.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else{
            QPixmap pix("bosmal.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
    }
    else if (pos==2){
        ui->label->setText("Estos son los efectos del consumo de carne semanal");
        ui->label_5->setText(QString::number(carne,'f',3));
        ui->label_6->setText("Los kg de co2 generado serian:");
        if (carne<=30){
            QPixmap pix("floreciendo.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else if(carne<=60){
            QPixmap pix("muriendo.jpeg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else{
            QPixmap pix("seco.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
    }
    else if (pos==3){
        ui->label->setText("Estos son los efectos del consumo de electricidad semanal");
        ui->label_5->setText(QString::number(elec,'f',3));
        ui->label_6->setText("Los kg de co2 generado serian:");
        if (elec<=0){
            QPixmap pix("fullprad.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else if(elec<=25){
            QPixmap pix("midprad.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else if(elec<=55){
            QPixmap pix("pradera_windows.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else{
            QPixmap pix("desierto.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
    }
    else if (pos==4){
        ui->label->setText("Estos son los efectos del consumo de plastico semanal");
        ui->label_5->setText(QString::number(plasticog,'f',3));
        ui->label_6->setText("Los kg de co2 generado serian:");
        if (plasticog==0){
            QMovie *pix= new QMovie("tierranormal.gif");
            ui->label_4->setMovie(pix);
            pix->start();
        }
        else if(plasticog<=87.5/52){
            QPixmap pix("tieracierto.jpg");
            ui->label_4->setPixmap(pix.scaled(300,300));
        }
        else if(plasticog<=175/52){
            QMovie *pix= new QMovie("tierradrenando.gif");
            ui->label_4->setMovie(pix);
            pix->start();
        }
        else{
            QMovie *pix= new QMovie("findelatierra.gif");
            ui->label_4->setMovie(pix);
            pix->start();
        }
    }
    else if (pos==5){
        ui->tableView->setHidden(false);
        // Conexión a la base de datos:
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setPort(3306);
        db.setUserName("root");
        db.setPassword("12341234");
        db.setDatabaseName("proyecto_verde");
        if (!db.open()) {
            qDebug() << "Error al conectar: " << db.lastError().text();
        } else {
            // Realizar consulta SQL:
            QSqlQuery consulta("SELECT * FROM resul_huella ORDER BY CO2 DESC");
            if (!consulta.exec()) {
                qDebug() << "Error en la consulta: " << consulta.lastError().text();
            } else {
                // Mostrar los resultados en la tabla:
                QSqlQueryModel *modelo = new QSqlQueryModel;
                modelo->setQuery(consulta);
                ui->tableView->setModel(modelo);
            }
        }
    }
}
