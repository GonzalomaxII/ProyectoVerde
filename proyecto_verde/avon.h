#ifndef AVON_H
#define AVON_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class avon;
}

class avon : public QDialog
{
    Q_OBJECT

public:
    explicit avon(double co2,double emi_com,int usrid,QWidget *parent = nullptr);
    ~avon();

private slots:
    void on_pushButton_clicked();

private:
    Ui::avon *ui;
    double co2;
    double emi_com;
    int usrid;
};

#endif // AVON_H

