#ifndef MENU_LECCIONES_H
#define MENU_LECCIONES_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class menu_lecciones;
}

class menu_lecciones : public QDialog
{
    Q_OBJECT

public:
    explicit menu_lecciones(QWidget *parent = nullptr);
    ~menu_lecciones();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menu_lecciones *ui;
};

#endif // MENU_LECCIONES_H
