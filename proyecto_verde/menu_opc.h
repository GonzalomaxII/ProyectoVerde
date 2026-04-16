#ifndef MENU_OPC_H
#define MENU_OPC_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class menu_opc;
}

class menu_opc : public QDialog
{
    Q_OBJECT

public:
    explicit menu_opc(QString valor_line3, QWidget *parent = nullptr);//declarar variable enviada por mainwindow
    ~menu_opc();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::menu_opc *ui;
    QString valor_line3;//declarar variable enviada por mainwindow
};

#endif // MENU_OPC_H
