#include "quiz.h"
#include "ui_quiz.h"

Quiz::Quiz(int preguntaID, int puntaje, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Quiz)
    , preguntaID(preguntaID)
    , puntaje(puntaje)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("12341234");
    db.setDatabaseName("proyecto_verde");
    if (!db.open()) {
        qDebug() << "Error al conectar: " << db.lastError().text();
    }
    QList<int> preguntasIncorrectas;
}

Quiz::~Quiz()
{
    delete ui;
}

void Quiz::on_pushButton_clicked() //label_3, label_5, label_6, label_7 labels sql y label_4 es n° de i
{
    if(preguntaID==0){
        preguntaID+=1;
        QSqlQuery consulta;
        consulta.prepare("SELECT descripcion, respuesta1, respuesta2, respuesta3 FROM quiz WHERE PreguntaID = :id");
        consulta.bindValue(":id", preguntaID);  // Variable preguntaID para controlar cuál pregunta mostrar
        if (consulta.exec() && consulta.next()) {
            QString desc = consulta.value("descripcion").toString();
            QString resp1 = consulta.value("respuesta1").toString();
            QString resp2 = consulta.value("respuesta2").toString();
            QString resp3 = consulta.value("respuesta3").toString();
            //establecer valores en los labels
            ui->label_3->setText(desc);
            ui->label_4->setText(QString::number(preguntaID));
            ui->label_5->setText(resp1);
            ui->label_6->setText(resp2);
            ui->label_7->setText(resp3);
            //ajustar tamaño
            ui->label_3->setWordWrap(true);
            ui->label_4->setWordWrap(true);
            ui->label_5->setWordWrap(true);
            ui->label_6->setWordWrap(true);
            ui->label_7->setWordWrap(true);
        }
        else{
            qDebug() << "Error en la consulta:" << consulta.lastError().text();
        }
    }
    else{
        bool opcionA=ui->radioButton->isChecked();
        bool opcionB=ui->radioButton_2->isChecked();
        bool opcionC=ui->radioButton_3->isChecked();
        if(opcionA || opcionB || opcionC)
        {
            bool respuestaCorrecta = false;
            switch(preguntaID){
            case 1: respuestaCorrecta=opcionA; break;
            case 2: respuestaCorrecta=opcionC; break;
            case 3: respuestaCorrecta=opcionB; break;
            case 4: respuestaCorrecta=opcionA; break;
            case 5: respuestaCorrecta=opcionB; break;
            case 6: respuestaCorrecta=opcionC; break;
            case 7: respuestaCorrecta=opcionA; break;
            case 8: respuestaCorrecta=opcionA; break;
            case 9: respuestaCorrecta=opcionB; break;
            case 10: respuestaCorrecta=opcionA; break;
            default: break;
            }
            if(respuestaCorrecta){
                puntaje+=1;
            }else{
                preguntasIncorrectas.append(preguntaID);
            }
            preguntaID+=1;
            if(preguntaID<=10){
                QSqlQuery consulta;
                consulta.prepare("SELECT descripcion, respuesta1, respuesta2, respuesta3 FROM quiz WHERE PreguntaID = :id");
                consulta.bindValue(":id", preguntaID);  // Variable preguntaID para controlar cuál pregunta mostrar
                if (consulta.exec() && consulta.next()) {
                    QString desc = consulta.value("descripcion").toString();
                    QString resp1 = consulta.value("respuesta1").toString();
                    QString resp2 = consulta.value("respuesta2").toString();
                    QString resp3 = consulta.value("respuesta3").toString();
                    //establecer valores en los labels
                    ui->label_3->setText(desc);
                    ui->label_4->setText(QString::number(preguntaID));
                    ui->label_5->setText(resp1);
                    ui->label_6->setText(resp2);
                    ui->label_7->setText(resp3);
                    //ajustar tamaño
                    ui->label_3->setWordWrap(true);
                    ui->label_4->setWordWrap(true);
                    ui->label_5->setWordWrap(true);
                    ui->label_6->setWordWrap(true);
                    ui->label_7->setWordWrap(true);
                }
                else{
                    qDebug() << "Error en la consulta:" << consulta.lastError().text();
                }
            }
            else{
                QString mensaje=QString("Tu puntaje final es: %1").arg(puntaje);
                QMessageBox::information(this, "Puntaje Final", mensaje);
                QMessageBox msgBox;
                msgBox.setWindowTitle("Opciones");
                msgBox.setText("¿Qué desea hacer?");
                msgBox.setInformativeText("Elija una opción:");
                // Agregar los botones personalizados
                QPushButton *cerrarButton = msgBox.addButton("Cerrar ventana", QMessageBox::YesRole);
                QPushButton *respButton = msgBox.addButton("Mostrar opciones incorrectas", QMessageBox::NoRole);
                // Ejecutar el mensaje y verificar la respuesta
                msgBox.exec();
                if(msgBox.clickedButton()==cerrarButton){
                    this->close();
                } else if (msgBox.clickedButton()==respButton){
                    QList<QString> preguntasCorrectas={"respuesta1", "respuesta3", "respuesta2", "respuesta1", "respuesta2",
                    "respuesta3", "respuesta1", "respuesta1", "respuesta2", "respuesta1"};
                    QString listaIncorrectas;
                    for (int i=0; i<preguntasIncorrectas.size(); i++) {
                        QSqlQuery consulta2;
                        //Construir la consulta con el nombre de la columna
                        QString query=QString("SELECT %1 FROM quiz WHERE PreguntaID = :PreguntaID")
                                            .arg(preguntasCorrectas[preguntasIncorrectas[i]-1]);//encontrar respuesta de la pregunta
                        //Luego preparla combinando el valor de preguntasIncorrectas
                        consulta2.prepare(query);
                        consulta2.bindValue(":PreguntaID", preguntasIncorrectas[i]);
                        if(!consulta2.exec()){
                            qDebug() << "Error en la consulta:" << consulta2.lastError().text();
                            return;
                        }
                        QString texto;
                        consulta2.first();
                        texto=consulta2.value(0).toString();
                        listaIncorrectas+=QString("Pregunta %1 respuesta correcta: %2\n")
                                                .arg(preguntasIncorrectas[i])
                                                .arg(texto);
                    }
                    if (!preguntasIncorrectas.isEmpty()){
                        QString mensajeIncorrectas = QString("Las siguientes preguntas fueron respondidas incorrectamente:\n%1").arg(listaIncorrectas);
                        QMessageBox::information(this, "Preguntas Incorrectas", mensajeIncorrectas);
                    }
                    this->close();
                }
            }
        }
        else{
            QMessageBox::critical(0,"ERROR:", "Selecciona una opción");
        }
    }
}

