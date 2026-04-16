#ifndef PLASTICO_H
#define PLASTICO_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class plastico;
}

class plastico : public QDialog
{
    Q_OBJECT

public:
    explicit plastico(double co2,double emi_com,double avon,double carne,double elec,int usrid,QWidget *parent = nullptr);
    ~plastico();

private slots:
    void on_pushButton_clicked();

private:
    Ui::plastico *ui;
    double co2;
    double emi_com;
    double avon;
    double carne;
    double elec;
    int usrid;
};

#endif // PLASTICO_H
