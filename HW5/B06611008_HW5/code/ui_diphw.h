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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *cmyButton;
    QPushButton *hsiButton;
    QPushButton *xyzButton;
    QPushButton *labButton;
    QPushButton *yuvButton;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pseudoButton;
    QComboBox *mapBox;
    QVBoxLayout *verticalLayout;
    QLabel *cividis;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
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
        diphw->resize(443, 437);
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
        QFont font2;
        font2.setFamily(QString::fromUtf8("Fira Code"));
        font2.setPointSize(9);
        infolabel->setFont(font2);

        verticalLayout_6->addWidget(infolabel);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmyButton = new QPushButton(tab_3);
        cmyButton->setObjectName(QString::fromUtf8("cmyButton"));
        sizePolicy1.setHeightForWidth(cmyButton->sizePolicy().hasHeightForWidth());
        cmyButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(cmyButton);

        hsiButton = new QPushButton(tab_3);
        hsiButton->setObjectName(QString::fromUtf8("hsiButton"));
        sizePolicy1.setHeightForWidth(hsiButton->sizePolicy().hasHeightForWidth());
        hsiButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(hsiButton);

        xyzButton = new QPushButton(tab_3);
        xyzButton->setObjectName(QString::fromUtf8("xyzButton"));
        sizePolicy1.setHeightForWidth(xyzButton->sizePolicy().hasHeightForWidth());
        xyzButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(xyzButton);

        labButton = new QPushButton(tab_3);
        labButton->setObjectName(QString::fromUtf8("labButton"));
        sizePolicy1.setHeightForWidth(labButton->sizePolicy().hasHeightForWidth());
        labButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(labButton);

        yuvButton = new QPushButton(tab_3);
        yuvButton->setObjectName(QString::fromUtf8("yuvButton"));
        sizePolicy1.setHeightForWidth(yuvButton->sizePolicy().hasHeightForWidth());
        yuvButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(yuvButton);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pseudoButton = new QPushButton(tab_3);
        pseudoButton->setObjectName(QString::fromUtf8("pseudoButton"));
        sizePolicy1.setHeightForWidth(pseudoButton->sizePolicy().hasHeightForWidth());
        pseudoButton->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(pseudoButton);

        mapBox = new QComboBox(tab_3);
        mapBox->addItem(QString());
        mapBox->addItem(QString());
        mapBox->addItem(QString());
        mapBox->addItem(QString());
        mapBox->addItem(QString());
        mapBox->setObjectName(QString::fromUtf8("mapBox"));
        sizePolicy.setHeightForWidth(mapBox->sizePolicy().hasHeightForWidth());
        mapBox->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(mapBox);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cividis = new QLabel(tab_3);
        cividis->setObjectName(QString::fromUtf8("cividis"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Fira Code"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        cividis->setFont(font3);
        cividis->setStyleSheet(QString::fromUtf8("image: url(:/new/map/colorscale_cividis.jpg);\n"
"color: rgb(255, 255, 255);"));
        cividis->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(cividis);

        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/map/colorscale_cool.jpg);\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/map/colorscale_jet.jpg);\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/new/map/colorscale_winter.jpg);\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

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
        menubar->setGeometry(QRect(0, 0, 443, 21));
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
        cmyButton->setText(QApplication::translate("diphw", "CMY", nullptr));
        hsiButton->setText(QApplication::translate("diphw", "HSI", nullptr));
        xyzButton->setText(QApplication::translate("diphw", "XYZ", nullptr));
        labButton->setText(QApplication::translate("diphw", "L*a*b*", nullptr));
        yuvButton->setText(QApplication::translate("diphw", "YUV", nullptr));
        pseudoButton->setText(QApplication::translate("diphw", "pseudo-color", nullptr));
        mapBox->setItemText(0, QApplication::translate("diphw", "choose map", nullptr));
        mapBox->setItemText(1, QApplication::translate("diphw", "cividis", nullptr));
        mapBox->setItemText(2, QApplication::translate("diphw", "cool", nullptr));
        mapBox->setItemText(3, QApplication::translate("diphw", "jet", nullptr));
        mapBox->setItemText(4, QApplication::translate("diphw", "winter", nullptr));

        cividis->setText(QApplication::translate("diphw", "cividis", nullptr));
        label_2->setText(QApplication::translate("diphw", "cool", nullptr));
        label_3->setText(QApplication::translate("diphw", "jet", nullptr));
        label_4->setText(QApplication::translate("diphw", "winter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("diphw", "HW5", nullptr));
        closeImgButton->setText(QApplication::translate("diphw", "Clear", nullptr));
        exitButton->setText(QApplication::translate("diphw", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diphw: public Ui_diphw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIPHW_H
