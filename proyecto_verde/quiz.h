#ifndef QUIZ_H
#define QUIZ_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class Quiz;
}

class Quiz : public QDialog
{
    Q_OBJECT

public:
    explicit Quiz(int preguntaID, int puntaje, QWidget *parent = nullptr);
    ~Quiz();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Quiz *ui;
    int preguntaID;
    int puntaje;
    QList<int> preguntasIncorrectas;
};

#endif // QUIZ_H
