#ifndef SCROLL_INFINITO_H
#define SCROLL_INFINITO_H

#include <QMainWindow>
#include <QWebEngineHistory>
#include <QWebEngineHistoryItem>
#include <QWebEnginePage>
#include <QWebEngineView>
#include <QtWebEngineWidgets/QtWebEngineWidgets>

extern int scroll_cont;
extern int scroll_page;

namespace Ui {
class Scroll_infinito;
}

class Scroll_infinito : public QMainWindow
{
    Q_OBJECT

public:
    explicit Scroll_infinito(QWidget *parent = nullptr);
    ~Scroll_infinito();
    void load_all();

private slots:
    void on_pushButton_pressed();

    void downloadFinished2(QNetworkReply *reply);
    void downloadFinished3(QNetworkReply *reply);
    void downloadFinished4(QNetworkReply *reply);
    void downloadFinished5(QNetworkReply *reply);
    void downloadFinished6(QNetworkReply *reply);
    void downloadFinished7(QNetworkReply *reply);
    void downloadFinished8(QNetworkReply *reply);
    void downloadFinished9(QNetworkReply *reply);
    void downloadFinished10(QNetworkReply *reply);



    void loadImage2();
    void loadImage3();
    void loadImage4();
    void loadImage5();
    void loadImage6();
    void loadImage7();
    void loadImage8();
    void loadImage9();
    void loadImage10();


    void on_pushButton_11_pressed();



private:
    Ui::Scroll_infinito *ui;
};

#endif // SCROLL_INFINITO_H
