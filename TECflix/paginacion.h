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

    void load_webview(int linea);

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

    void set_paginador();

    void actualizar_memoria();

private:
    Ui::Paginacion *ui;
    Streaming *streaming;
};

#endif PAGINACION_H


