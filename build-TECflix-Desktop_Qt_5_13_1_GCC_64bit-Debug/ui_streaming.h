/********************************************************************************
** Form generated from reading UI file 'streaming.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMING_H
#define UI_STREAMING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Streaming
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Streaming)
    {
        if (Streaming->objectName().isEmpty())
            Streaming->setObjectName(QString::fromUtf8("Streaming"));
        Streaming->resize(800, 600);
        menubar = new QMenuBar(Streaming);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Streaming->setMenuBar(menubar);
        centralwidget = new QWidget(Streaming);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Streaming->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Streaming);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Streaming->setStatusBar(statusbar);

        retranslateUi(Streaming);

        QMetaObject::connectSlotsByName(Streaming);
    } // setupUi

    void retranslateUi(QMainWindow *Streaming)
    {
        Streaming->setWindowTitle(QCoreApplication::translate("Streaming", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Streaming: public Ui_Streaming {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMING_H
