#ifndef DEMOSTRA_H
#define DEMOSTRA_H

#include <QDialog>
#include <QMovie>
#include <QPixmap>
#include <QThread>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class demostra;
}

class demostra : public QDialog
{
    Q_OBJECT

public:
    explicit demostra(double co2,double emi_com,double avon,double carne,double elec,double plasticog,QWidget *parent = nullptr);
    ~demostra();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::demostra *ui;
    double co2;
    double emi_com;
    double avon;
    double carne;
    double elec;
    double plasticog;
    int pos=0;
};

#endif // DEMOSTRA_H
