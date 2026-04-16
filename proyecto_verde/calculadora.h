#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class calculadora;
}

class calculadora : public QDialog
{
    Q_OBJECT

public:
    explicit calculadora(int cant,int usrid,QWidget *parent = nullptr);
    ~calculadora();

private slots:
    void on_pushButton_clicked();

private:
    Ui::calculadora *ui;
    int cant;
    int usrid;
    double co2=0;
    double emi_com;
};

#endif // CALCULADORA_H
