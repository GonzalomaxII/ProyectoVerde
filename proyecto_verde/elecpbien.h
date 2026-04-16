#ifndef ELECPBIEN_H
#define ELECPBIEN_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class elecpbien;
}

class elecpbien : public QDialog
{
    Q_OBJECT

public:
    explicit elecpbien(double co2,double emi_com,double avon,double carne,int usrid,QWidget *parent = nullptr);
    ~elecpbien();

private slots:
    void on_pushButton_clicked();

private:
    Ui::elecpbien *ui;
    double co2;
    double emi_com;
    double avon;
    double carne;
    int usrid;
};

#endif // ELECPBIEN_H
