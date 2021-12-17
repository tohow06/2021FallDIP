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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
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
    QVBoxLayout *verticalLayout_3;
    QPushButton *img1Button;
    QPushButton *img2Button;
    QPushButton *img3Button;
    QPushButton *dwtButton;
    QPushButton *fusionButton;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *houghButton;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *threshold_lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *minLineLength_lineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *maxLineGap_lineEdit;
    QPushButton *selButton;
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
        diphw->resize(329, 539);
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
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        img1Button = new QPushButton(tab_2);
        img1Button->setObjectName(QString::fromUtf8("img1Button"));
        sizePolicy1.setHeightForWidth(img1Button->sizePolicy().hasHeightForWidth());
        img1Button->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(img1Button);

        img2Button = new QPushButton(tab_2);
        img2Button->setObjectName(QString::fromUtf8("img2Button"));
        sizePolicy1.setHeightForWidth(img2Button->sizePolicy().hasHeightForWidth());
        img2Button->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(img2Button);

        img3Button = new QPushButton(tab_2);
        img3Button->setObjectName(QString::fromUtf8("img3Button"));
        sizePolicy1.setHeightForWidth(img3Button->sizePolicy().hasHeightForWidth());
        img3Button->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(img3Button);

        dwtButton = new QPushButton(tab_2);
        dwtButton->setObjectName(QString::fromUtf8("dwtButton"));
        sizePolicy1.setHeightForWidth(dwtButton->sizePolicy().hasHeightForWidth());
        dwtButton->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(dwtButton);

        fusionButton = new QPushButton(tab_2);
        fusionButton->setObjectName(QString::fromUtf8("fusionButton"));
        sizePolicy1.setHeightForWidth(fusionButton->sizePolicy().hasHeightForWidth());
        fusionButton->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(fusionButton);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        houghButton = new QPushButton(tab_3);
        houghButton->setObjectName(QString::fromUtf8("houghButton"));
        sizePolicy1.setHeightForWidth(houghButton->sizePolicy().hasHeightForWidth());
        houghButton->setSizePolicy(sizePolicy1);

        verticalLayout_4->addWidget(houghButton);

        tableWidget = new QTableWidget(tab_3);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(tableWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        threshold_lineEdit = new QLineEdit(tab_3);
        threshold_lineEdit->setObjectName(QString::fromUtf8("threshold_lineEdit"));

        horizontalLayout_6->addWidget(threshold_lineEdit);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        minLineLength_lineEdit = new QLineEdit(tab_3);
        minLineLength_lineEdit->setObjectName(QString::fromUtf8("minLineLength_lineEdit"));

        horizontalLayout_7->addWidget(minLineLength_lineEdit);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        maxLineGap_lineEdit = new QLineEdit(tab_3);
        maxLineGap_lineEdit->setObjectName(QString::fromUtf8("maxLineGap_lineEdit"));

        horizontalLayout_8->addWidget(maxLineGap_lineEdit);


        verticalLayout_4->addLayout(horizontalLayout_8);

        selButton = new QPushButton(tab_3);
        selButton->setObjectName(QString::fromUtf8("selButton"));

        verticalLayout_4->addWidget(selButton);

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
        menubar->setGeometry(QRect(0, 0, 329, 24));
        diphw->setMenuBar(menubar);
        statusbar = new QStatusBar(diphw);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        diphw->setStatusBar(statusbar);

        retranslateUi(diphw);

        tabWidget->setCurrentIndex(2);


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
        img1Button->setText(QApplication::translate("diphw", "img1", nullptr));
        img2Button->setText(QApplication::translate("diphw", "img2", nullptr));
        img3Button->setText(QApplication::translate("diphw", "img3", nullptr));
        dwtButton->setText(QApplication::translate("diphw", "DWT", nullptr));
        fusionButton->setText(QApplication::translate("diphw", "Fusion", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("diphw", "Part 2", nullptr));
        houghButton->setText(QApplication::translate("diphw", "Hough Transform", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("diphw", "\345\221\250\351\225\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("diphw", "\351\235\242\347\251\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("diphw", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("diphw", "2", nullptr));
        label_4->setText(QApplication::translate("diphw", "threshold", nullptr));
        threshold_lineEdit->setInputMask(QString());
        threshold_lineEdit->setText(QApplication::translate("diphw", "50", nullptr));
        label_5->setText(QApplication::translate("diphw", "min line length", nullptr));
        minLineLength_lineEdit->setText(QApplication::translate("diphw", "50", nullptr));
        label_6->setText(QApplication::translate("diphw", "maxLineGap", nullptr));
        maxLineGap_lineEdit->setText(QApplication::translate("diphw", "10", nullptr));
        selButton->setText(QApplication::translate("diphw", "check rectangles", nullptr));
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
