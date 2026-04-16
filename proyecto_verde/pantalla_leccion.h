#ifndef PANTALLA_LECCION_H
#define PANTALLA_LECCION_H

#include <QDialog>

namespace Ui {
class pantalla_leccion;
}

class pantalla_leccion : public QDialog
{
    Q_OBJECT

public:
    explicit pantalla_leccion(QWidget *parent = nullptr);
    ~pantalla_leccion();

private:
    Ui::pantalla_leccion *ui;
};

#endif // PANTALLA_LECCION_H
