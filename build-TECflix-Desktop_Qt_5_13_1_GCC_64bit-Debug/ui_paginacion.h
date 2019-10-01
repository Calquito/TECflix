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
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Paginacion)
    {
        if (Paginacion->objectName().isEmpty())
            Paginacion->setObjectName(QString::fromUtf8("Paginacion"));
        Paginacion->resize(810, 633);
        Paginacion->setCursor(QCursor(Qt::ArrowCursor));
        centralwidget = new QWidget(Paginacion);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 20, 131, 131));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(190, 470, 61, 61));
        QFont font;
        font.setPointSize(11);
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 470, 61, 61));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(370, 470, 61, 61));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(460, 470, 61, 61));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(100, 470, 61, 61));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(620, 470, 61, 61));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(540, 470, 61, 61));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(330, 170, 131, 131));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(330, 20, 131, 131));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(520, 20, 131, 131));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(140, 320, 131, 131));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(140, 170, 131, 131));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(520, 170, 131, 131));
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(330, 320, 131, 131));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(520, 320, 131, 131));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 540, 67, 17));
        QFont font1;
        font1.setPointSize(25);
        label->setFont(font1);
        Paginacion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Paginacion);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 810, 22));
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
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Paginacion", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Paginacion", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Paginacion", "3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Paginacion", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Paginacion", "<<", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Paginacion", ">>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Paginacion", "5", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Paginacion", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Paginacion", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Paginacion", "PushButton", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Paginacion", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Paginacion", "PushButton", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Paginacion", "PushButton", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Paginacion", "PushButton", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Paginacion", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("Paginacion", "^", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Paginacion: public Ui_Paginacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINACION_H
