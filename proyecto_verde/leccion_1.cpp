#include "leccion_1.h"
#include "ui_leccion_1.h"
#include <QPixmap>

leccion_1::leccion_1(QString opcion, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::leccion_1)
    , opcion(opcion)
{
    ui->setupUi(this);
    QSqlQuery consulta;
    consulta.prepare("SELECT informacion FROM lecciones WHERE LeccionID= :LeccionID ");
    consulta.bindValue(":LeccionID", opcion);
    QString texto;
    if(!consulta.exec()){
        qDebug() << "Error en la consulta:" << consulta.lastError().text();
        return;
    }
    consulta.first();
    texto=consulta.value(0).toString();
    ui->textBrowser->setText(texto);
    if(opcion=="1"){
        QPixmap imagen("efecto_invernadero.jpg");
        QSize size(500, 350);
        QPixmap scaledPixmap=imagen.scaled(size, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->label->setPixmap(scaledPixmap);
    }
    else{
        if(opcion=="2"){
        QPixmap imagen("cambio_climatico.jpeg");
        ui->label->setPixmap(imagen);
        }
        else{
            if(opcion=="3"){
                QPixmap imagen("soluci_climatico.jpeg");
                ui->label->setPixmap(imagen);
            }
            else{
                QPixmap imagen("huella_carbono.jpeg");
                ui->label->setPixmap(imagen);
            }
        }
    }
}

leccion_1::~leccion_1()
{
    delete ui;
}

void leccion_1::on_pushButton_clicked()
{
    this->close();
}

