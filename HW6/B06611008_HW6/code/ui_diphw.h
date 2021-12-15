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
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *widthSlider;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSlider *highSlider;
    QPushButton *trapButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSlider *freqSlider;
    QPushButton *wavyButton;
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
        diphw->resize(368, 517);
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
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        widthSlider = new QSlider(tab);
        widthSlider->setObjectName(QString::fromUtf8("widthSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widthSlider->sizePolicy().hasHeightForWidth());
        widthSlider->setSizePolicy(sizePolicy2);
        widthSlider->setMaximum(50);
        widthSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(widthSlider);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        highSlider = new QSlider(tab);
        highSlider->setObjectName(QString::fromUtf8("highSlider"));
        sizePolicy2.setHeightForWidth(highSlider->sizePolicy().hasHeightForWidth());
        highSlider->setSizePolicy(sizePolicy2);
        highSlider->setMaximum(50);
        highSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(highSlider);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        trapButton = new QPushButton(tab);
        trapButton->setObjectName(QString::fromUtf8("trapButton"));
        sizePolicy1.setHeightForWidth(trapButton->sizePolicy().hasHeightForWidth());
        trapButton->setSizePolicy(sizePolicy1);
        trapButton->setFont(font2);

        horizontalLayout_4->addWidget(trapButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_3);

        freqSlider = new QSlider(tab);
        freqSlider->setObjectName(QString::fromUtf8("freqSlider"));
        sizePolicy2.setHeightForWidth(freqSlider->sizePolicy().hasHeightForWidth());
        freqSlider->setSizePolicy(sizePolicy2);
        freqSlider->setMinimum(1);
        freqSlider->setMaximum(150);
        freqSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(freqSlider);

        wavyButton = new QPushButton(tab);
        wavyButton->setObjectName(QString::fromUtf8("wavyButton"));
        sizePolicy1.setHeightForWidth(wavyButton->sizePolicy().hasHeightForWidth());
        wavyButton->setSizePolicy(sizePolicy1);
        wavyButton->setFont(font2);

        horizontalLayout_5->addWidget(wavyButton);


        verticalLayout_2->addLayout(horizontalLayout_5);

        circularButton = new QPushButton(tab);
        circularButton->setObjectName(QString::fromUtf8("circularButton"));
        sizePolicy1.setHeightForWidth(circularButton->sizePolicy().hasHeightForWidth());
        circularButton->setSizePolicy(sizePolicy1);
        circularButton->setFont(font2);

        verticalLayout_2->addWidget(circularButton);

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
        menubar->setGeometry(QRect(0, 0, 368, 21));
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
        label->setText(QApplication::translate("diphw", "\344\270\212\345\272\225\351\225\267\345\272\246", nullptr));
        label_2->setText(QApplication::translate("diphw", "\351\253\230\345\272\246", nullptr));
        trapButton->setText(QApplication::translate("diphw", "trapezoidal", nullptr));
        label_3->setText(QApplication::translate("diphw", "\351\240\273\347\216\207", nullptr));
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
