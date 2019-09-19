/********************************************************************************
** Form generated from reading UI file 'paginacion.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGINACION_H
#define UI_PAGINACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paginacion
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Paginacion)
    {
        if (Paginacion->objectName().isEmpty())
            Paginacion->setObjectName(QString::fromUtf8("Paginacion"));
        Paginacion->resize(800, 600);
        centralwidget = new QWidget(Paginacion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 60, 131, 101));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(290, 480, 41, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 480, 41, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 480, 41, 41));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(470, 480, 41, 41));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(230, 480, 41, 41));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(590, 480, 41, 41));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(530, 480, 41, 41));
        Paginacion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Paginacion);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Paginacion->setMenuBar(menubar);
        statusbar = new QStatusBar(Paginacion);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Paginacion->setStatusBar(statusbar);

        retranslateUi(Paginacion);

        QMetaObject::connectSlotsByName(Paginacion);
    } // setupUi

    void retranslateUi(QMainWindow *Paginacion)
    {
        Paginacion->setWindowTitle(QCoreApplication::translate("Paginacion", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Paginacion", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Paginacion", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Paginacion", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Paginacion", "3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Paginacion", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Paginacion", "<<", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Paginacion", ">>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Paginacion", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Paginacion: public Ui_Paginacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINACION_H
