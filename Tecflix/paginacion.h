#ifndef PAGINACION_H
#define PAGINACION_H

#include <QMainWindow>

namespace Ui {
class Paginacion;
}

class Paginacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Paginacion(QWidget *parent = nullptr);
    ~Paginacion();

private slots:
    void on_pushButton_7_clicked();

private:
    Ui::Paginacion *ui;
};

#endif // PAGINACION_H
