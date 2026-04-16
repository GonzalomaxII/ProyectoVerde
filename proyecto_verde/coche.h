#ifndef COCHE_H
#define COCHE_H

#include <QWidget>

namespace Ui {
class coche;
}

class coche : public QWidget
{
    Q_OBJECT

public:
    explicit coche(int usrid,QWidget *parent = nullptr);
    ~coche();

private slots:
    void on_pushButton_clicked();

private:
    Ui::coche *ui;
    int usrid;
};

#endif // COCHE_H
