#ifndef LECCION_1_H
#define LECCION_1_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class leccion_1;
}

class leccion_1 : public QDialog
{
    Q_OBJECT

public:
    explicit leccion_1(QString opcion, QWidget *parent = nullptr);
    ~leccion_1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::leccion_1 *ui;
    QString opcion;
};

#endif // LECCION_1_H
