#ifndef ELEC_H
#define ELEC_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class elec;
}

class elec : public QDialog
{
    Q_OBJECT

public:
    explicit elec(double co2,double emi_com,double avon,int usrid,QWidget *parent = nullptr);
    ~elec();

private slots:
    void on_pushButton_clicked();

private:
    Ui::elec *ui;
    double co2;
    double emi_com;
    double avon;
    int usrid;
};

#endif // ELEC_H
