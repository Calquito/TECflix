/*#include "paginacion.h"
#include "ui_paginacion.h"

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <filedownloader.h>
#include <QVideoWidget>
#include <QGraphicsVideoItem>
#include <QMediaPlayer>
#include <QDebug>
#include <QtWebView/QtWebView>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qtwebengineglobal.h>
#include <QApplication>
#include <QWebEngineView>*/



/*Paginacion::Paginacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Paginacion)
{
    ui->setupUi(this);
}

Paginacion::~Paginacion()
{
    delete ui;
}



void Paginacion::on_pushButton_7_clicked()
{
    QUrl imageUrl("http://qt.digia.com/Documents/1/QtLogo.png");
    m_pImgCtrl = new FileDownloader(imageUrl, this);

    connect(m_pImgCtrl, SIGNAL (downloaded()), this, SLOT (loadImage()));

    ui->pushButton->setStyleSheet("border-image:url(https://m.media-amazon.com/images/M/MV5BMTU2NTYxODcwMF5BMl5BanBnXkFtZTcwNDk1NDY0Nw@@._V1_UX182_CR0,0,182,268_AL_.jpg");

    ui->pushButton_2->setText("https://m.media-amazon.com/images/M/MV5BMjZiYTUzMzktZWI5Yy00Mzk4LWFlMDgtYjRmNWU0Mzc0MzNiXkEyXkFqcGdeQXVyMjUzOTY1NTc@._V1_UX182_CR0,0,182,268_AL_.jpg");
}


void Paginacion::loadImage()
{
     QPixmap buttonImage;
     QIcon ButtonIcon(buttonImage);
     ui->pushButton->setIcon(ButtonIcon);
     ui->pushButton->setIconSize(buttonImage.rect().size());
}

QUrl commandLineUrlArgument()
{
    const QStringList args = QCoreApplication::arguments();
    for (const QString &arg : args.mid(1)) {
        if (!arg.startsWith(QLatin1Char('-')))
            return QUrl::fromUserInput(arg);
    }
    return QUrl(QStringLiteral("https://www.qt.io"));
}

int Paginacion::on_pushButton_clicked()
{
    //errror de disable cuando enable
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);//Attribute Qt::AA_EnableHighDpiScaling must be set before QCoreApplication is created.
    //more code and then create the QApplication
    QApplication mainApplication(int argc,char* argv);


    QCoreApplication::setOrganizationName("QtExamples");
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);//
    QApplication app(int argc,char* argv);

    QWebEngineView view;
    view.setUrl(commandLineUrlArgument());
    view.resize(1024, 750);
    view.show();
    return 0;

    //return app.exec();    error aqui

    //deprecated
   /* QtWebView *view = new QtWebView();
     view->load(QUrl("qrc://images//sample page.html/"));
     view->show();*/

  //funciona pero no se puede obtener la url del video
   /* QMediaPlayer *player = new QMediaPlayer;
    QVideoWidget *video_widget=new QVideoWidget;

    player->setVideoOutput(video_widget);
    player->setMedia(QUrl("https://www.imdb.com/videoplayer/vi705668633?playlistId=tt0770828&ref_=tt_ov_vi"));

    video_widget->setGeometry(100,100,300,400);
    video_widget->show();

    player->play();*/
//https://www.qtcentre.org/threads/16379-Multiline-QPushButton  CAIDA


/*  compila pero cuando se corre se pega
    QWebEnginePage page;
    connect(&page, SIGNAL(urlChanged(const QUrl&)), SLOT(on_pushButton_clicked()));
    QUrl v= QUrl("https://m.media-amazon.com/images/M/MV5BMjZiYTUzMzktZWI5Yy00Mzk4LWFlMDgtYjRmNWU0Mzc0MzNiXkEyXkFqcGdeQXVyMjUzOTY1NTc@._V1_UX182_CR0,0,182,268_AL_.jpg");
    page.load(v);

}*/
