#ifndef PAGINACION_H
#define PAGINACION_H

#include <QMainWindow>
#include <filedownloader.h>
#include "streaming.h"

extern int pagina_1;
extern int pagina_2;
extern int pagina_3;
extern int pagina_4;
extern int pagina_5;

namespace Ui {
class Paginacion;

}

class Paginacion : public QMainWindow
{
    FileDownloader * m_pImgCtrl;
    Q_OBJECT

public:
    explicit Paginacion(QWidget *parent = nullptr);
    ~Paginacion();

private slots:
    void on_pushButton_7_clicked();

    void loadImage();


    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Paginacion *ui;
    Streaming *streaming;
};



#endif // PAGINACION_H
