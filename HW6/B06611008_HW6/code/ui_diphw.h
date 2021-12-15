/********************************************************************************
** Form generated from reading UI file 'diphw.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIPHW_H
#define UI_DIPHW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_diphw
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *titile;
    QPushButton *openButton;
    QLabel *infolabel;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *trapButton;
    QSlider *highSlider;
    QSlider *widthSlider;
    QPushButton *wavyButton;
    QSlider *freqSlider;
    QPushButton *circularButton;
    QWidget *tab_2;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *closeImgButton;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *diphw)
    {
        if (diphw->objectName().isEmpty())
            diphw->setObjectName(QString::fromUtf8("diphw"));
        diphw->setEnabled(true);
        diphw->resize(482, 577);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(diphw->sizePolicy().hasHeightForWidth());
        diphw->setSizePolicy(sizePolicy);
        diphw->setAnimated(true);
        centralwidget = new QWidget(diphw);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        titile = new QLabel(centralwidget);
        titile->setObjectName(QString::fromUtf8("titile"));
        QFont font;
        font.setPointSize(40);
        font.setBold(false);
        font.setWeight(50);
        titile->setFont(font);
        titile->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(titile);

        openButton = new QPushButton(centralwidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(openButton->sizePolicy().hasHeightForWidth());
        openButton->setSizePolicy(sizePolicy1);
        openButton->setMinimumSize(QSize(0, 0));
        openButton->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Fira Code"));
        font1.setPointSize(12);
        openButton->setFont(font1);

        verticalLayout_6->addWidget(openButton);

        infolabel = new QLabel(centralwidget);
        infolabel->setObjectName(QString::fromUtf8("infolabel"));
        infolabel->setFont(font1);

        verticalLayout_6->addWidget(infolabel);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        trapButton = new QPushButton(tab);
        trapButton->setObjectName(QString::fromUtf8("trapButton"));
        trapButton->setGeometry(QRect(240, 20, 171, 61));
        highSlider = new QSlider(tab);
        highSlider->setObjectName(QString::fromUtf8("highSlider"));
        highSlider->setGeometry(QRect(50, 70, 160, 22));
        highSlider->setMaximum(50);
        highSlider->setOrientation(Qt::Horizontal);
        widthSlider = new QSlider(tab);
        widthSlider->setObjectName(QString::fromUtf8("widthSlider"));
        widthSlider->setGeometry(QRect(50, 30, 160, 22));
        widthSlider->setMaximum(50);
        widthSlider->setOrientation(Qt::Horizontal);
        wavyButton = new QPushButton(tab);
        wavyButton->setObjectName(QString::fromUtf8("wavyButton"));
        wavyButton->setGeometry(QRect(240, 110, 131, 41));
        freqSlider = new QSlider(tab);
        freqSlider->setObjectName(QString::fromUtf8("freqSlider"));
        freqSlider->setGeometry(QRect(50, 120, 160, 22));
        freqSlider->setMaximum(150);
        freqSlider->setOrientation(Qt::Horizontal);
        circularButton = new QPushButton(tab);
        circularButton->setObjectName(QString::fromUtf8("circularButton"));
        circularButton->setGeometry(QRect(240, 160, 113, 32));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout_6->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        closeImgButton = new QPushButton(centralwidget);
        closeImgButton->setObjectName(QString::fromUtf8("closeImgButton"));
        sizePolicy1.setHeightForWidth(closeImgButton->sizePolicy().hasHeightForWidth());
        closeImgButton->setSizePolicy(sizePolicy1);
        closeImgButton->setMaximumSize(QSize(16777215, 45));
        closeImgButton->setFont(font1);

        horizontalLayout_2->addWidget(closeImgButton);

        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy1.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy1);
        exitButton->setMaximumSize(QSize(16777215, 45));
        exitButton->setFont(font1);

        horizontalLayout_2->addWidget(exitButton);


        verticalLayout_6->addLayout(horizontalLayout_2);

        diphw->setCentralWidget(centralwidget);
        menubar = new QMenuBar(diphw);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 482, 24));
        diphw->setMenuBar(menubar);
        statusbar = new QStatusBar(diphw);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        diphw->setStatusBar(statusbar);

        retranslateUi(diphw);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(diphw);
    } // setupUi

    void retranslateUi(QMainWindow *diphw)
    {
        diphw->setWindowTitle(QApplication::translate("diphw", "diphw", nullptr));
        titile->setText(QApplication::translate("diphw", "DIP HW", nullptr));
        openButton->setText(QApplication::translate("diphw", "Open Image", nullptr));
        infolabel->setText(QApplication::translate("diphw", "Open an Image first......", nullptr));
        trapButton->setText(QApplication::translate("diphw", "trapezoidal", nullptr));
        wavyButton->setText(QApplication::translate("diphw", "wavy", nullptr));
        circularButton->setText(QApplication::translate("diphw", "cicular", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("diphw", "Part 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("diphw", "Part 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("diphw", "Part 3", nullptr));
        closeImgButton->setText(QApplication::translate("diphw", "Clear", nullptr));
        exitButton->setText(QApplication::translate("diphw", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diphw: public Ui_diphw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIPHW_H
