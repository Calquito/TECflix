#ifndef PAGINACION_H
#define PAGINACION_H

#include <QMainWindow>
#include <filedownloader.h>
#include "streaming.h"
#include "abridor.h"

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
    void loadImage10();
    void loadImage11();
    void loadImage13();
    void loadImage9();
    void loadImage14();
    void loadImage12();
    void loadImage15();
    void loadImage16();

    void downloadFinished(QNetworkReply *reply);
    void downloadFinished10(QNetworkReply *reply);
    void downloadFinished11(QNetworkReply *reply);
    void downloadFinished13(QNetworkReply *reply);
    void downloadFinished9(QNetworkReply *reply);
    void downloadFinished14(QNetworkReply *reply);
    void downloadFinished12(QNetworkReply *reply);
    void downloadFinished15(QNetworkReply *reply);
    void downloadFinished16(QNetworkReply *reply);

    void load_all();

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

#endif // PAGINACION_H


