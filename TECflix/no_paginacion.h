#ifndef NO_PAGINACION_H
#define NO_PAGINACION_H

#include <QMainWindow>
#include "streaming.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "abridor.h"
#include <QWebEngineHistory>
#include <QWebEngineHistoryItem>
#include <QWebEnginePage>
#include <QWebEngineView>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include "memory_manager.h"
#include <string>

extern string all_dataset[5042];
extern int pagina_1;
extern int pagina_2;
extern int pagina_3;
extern int pagina_4;
extern int pagina_5;

namespace Ui {
class No_paginacion;
}

class No_paginacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit No_paginacion(QWidget *parent = nullptr);
    ~No_paginacion();
     void load_all();

private slots:
    void cargar_webview(int linea);

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

    void on_pushButton_7_clicked();

private:
    Ui::No_paginacion *ui;
    Streaming *streaming;
};

#endif // NO_PAGINACION_H
