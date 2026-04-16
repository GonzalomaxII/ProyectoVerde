#include "pantalla_leccion.h"
#include "ui_pantalla_leccion.h"

pantalla_leccion::pantalla_leccion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pantalla_leccion)
{
    ui->setupUi(this);
}

pantalla_leccion::~pantalla_leccion()
{
    delete ui;
}
