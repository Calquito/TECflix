/********************************************************************************
** Form generated from reading UI file 'infinite_scroll.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFINITE_SCROLL_H
#define UI_INFINITE_SCROLL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Infinite_scroll
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuInfinite_scroll;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Infinite_scroll)
    {
        if (Infinite_scroll->objectName().isEmpty())
            Infinite_scroll->setObjectName(QString::fromUtf8("Infinite_scroll"));
        Infinite_scroll->resize(800, 600);
        centralwidget = new QWidget(Infinite_scroll);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(160, 70, 461, 321));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 459, 319));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 60, 191, 121));
        scrollArea->setWidget(scrollAreaWidgetContents);
        Infinite_scroll->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Infinite_scroll);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuInfinite_scroll = new QMenu(menubar);
        menuInfinite_scroll->setObjectName(QString::fromUtf8("menuInfinite_scroll"));
        Infinite_scroll->setMenuBar(menubar);
        statusbar = new QStatusBar(Infinite_scroll);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Infinite_scroll->setStatusBar(statusbar);

        menubar->addAction(menuInfinite_scroll->menuAction());

        retranslateUi(Infinite_scroll);

        QMetaObject::connectSlotsByName(Infinite_scroll);
    } // setupUi

    void retranslateUi(QMainWindow *Infinite_scroll)
    {
        Infinite_scroll->setWindowTitle(QCoreApplication::translate("Infinite_scroll", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Infinite_scroll", "PushButton", nullptr));
        menuInfinite_scroll->setTitle(QCoreApplication::translate("Infinite_scroll", "Infinite_scroll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Infinite_scroll: public Ui_Infinite_scroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFINITE_SCROLL_H
