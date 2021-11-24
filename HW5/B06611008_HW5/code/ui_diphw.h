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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
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
    QLabel *label_2;
    QPushButton *openButton;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QPushButton *pushButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *showFSButton;
    QPushButton *showPASButton;
    QPushButton *ifftButton;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QSlider *idealD0;
    QPushButton *idealButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSlider *butterD0;
    QLabel *label_8;
    QSpinBox *butternBox;
    QPushButton *butterButton;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSlider *GaussD0;
    QPushButton *GaussButton;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QSlider *homorH;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QSlider *homorL;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QSlider *homoD0;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QSpinBox *homoC;
    QPushButton *homoButton;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *motionButton;
    QPushButton *gNosieButton;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *invFilButton;
    QPushButton *wieFilButton;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QComboBox *matrixBox;
    QComboBox *sizeBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *convButton;
    QPushButton *zcButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *thresSlider;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *m31;
    QLabel *m32;
    QLabel *m21;
    QLabel *m22;
    QLabel *m33;
    QLabel *m11;
    QLabel *m13;
    QLabel *m12;
    QLabel *m23;
    QSpacerItem *horizontalSpacer;
    QLabel *timelabel;
    QLabel *infolabel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *closeImgButton;
    QPushButton *exitButton;
    QPushButton *resetButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *diphw)
    {
        if (diphw->objectName().isEmpty())
            diphw->setObjectName(QString::fromUtf8("diphw"));
        diphw->setEnabled(true);
        diphw->resize(377, 610);
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(40);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);

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

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 110, 75, 23));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        showFSButton = new QPushButton(tab_2);
        showFSButton->setObjectName(QString::fromUtf8("showFSButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Fira Code"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        showFSButton->setFont(font2);

        horizontalLayout_4->addWidget(showFSButton);

        showPASButton = new QPushButton(tab_2);
        showPASButton->setObjectName(QString::fromUtf8("showPASButton"));
        showPASButton->setFont(font2);

        horizontalLayout_4->addWidget(showPASButton);


        verticalLayout_5->addLayout(horizontalLayout_4);

        ifftButton = new QPushButton(tab_2);
        ifftButton->setObjectName(QString::fromUtf8("ifftButton"));
        ifftButton->setFont(font2);

        verticalLayout_5->addWidget(ifftButton);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Fira Code"));
        font3.setPointSize(10);
        label_7->setFont(font3);

        horizontalLayout_10->addWidget(label_7);

        idealD0 = new QSlider(tab_2);
        idealD0->setObjectName(QString::fromUtf8("idealD0"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(idealD0->sizePolicy().hasHeightForWidth());
        idealD0->setSizePolicy(sizePolicy3);
        idealD0->setMinimum(-99);
        idealD0->setValue(0);
        idealD0->setSliderPosition(0);
        idealD0->setTracking(true);
        idealD0->setOrientation(Qt::Horizontal);
        idealD0->setTickPosition(QSlider::NoTicks);

        horizontalLayout_10->addWidget(idealD0);

        idealButton = new QPushButton(tab_2);
        idealButton->setObjectName(QString::fromUtf8("idealButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(idealButton->sizePolicy().hasHeightForWidth());
        idealButton->setSizePolicy(sizePolicy4);
        idealButton->setFont(font2);

        horizontalLayout_10->addWidget(idealButton);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);

        horizontalLayout_8->addWidget(label_5);

        butterD0 = new QSlider(tab_2);
        butterD0->setObjectName(QString::fromUtf8("butterD0"));
        sizePolicy3.setHeightForWidth(butterD0->sizePolicy().hasHeightForWidth());
        butterD0->setSizePolicy(sizePolicy3);
        butterD0->setMinimum(-99);
        butterD0->setPageStep(10);
        butterD0->setTracking(true);
        butterD0->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(butterD0);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Fira Code"));
        font4.setPointSize(15);
        label_8->setFont(font4);

        horizontalLayout_8->addWidget(label_8);

        butternBox = new QSpinBox(tab_2);
        butternBox->setObjectName(QString::fromUtf8("butternBox"));

        horizontalLayout_8->addWidget(butternBox);

        butterButton = new QPushButton(tab_2);
        butterButton->setObjectName(QString::fromUtf8("butterButton"));
        butterButton->setFont(font2);

        horizontalLayout_8->addWidget(butterButton);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);

        horizontalLayout_7->addWidget(label_4);

        GaussD0 = new QSlider(tab_2);
        GaussD0->setObjectName(QString::fromUtf8("GaussD0"));
        GaussD0->setMinimum(-99);
        GaussD0->setMaximum(99);
        GaussD0->setTracking(true);
        GaussD0->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(GaussD0);

        GaussButton = new QPushButton(tab_2);
        GaussButton->setObjectName(QString::fromUtf8("GaussButton"));
        GaussButton->setFont(font2);

        horizontalLayout_7->addWidget(GaussButton);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy5);
        label_13->setFont(font3);

        horizontalLayout_12->addWidget(label_13);

        homorH = new QSlider(tab_2);
        homorH->setObjectName(QString::fromUtf8("homorH"));
        sizePolicy2.setHeightForWidth(homorH->sizePolicy().hasHeightForWidth());
        homorH->setSizePolicy(sizePolicy2);
        homorH->setMinimum(0);
        homorH->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(homorH);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy5.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy5);
        label_12->setFont(font3);

        horizontalLayout_11->addWidget(label_12);

        homorL = new QSlider(tab_2);
        homorL->setObjectName(QString::fromUtf8("homorL"));
        sizePolicy2.setHeightForWidth(homorL->sizePolicy().hasHeightForWidth());
        homorL->setSizePolicy(sizePolicy2);
        homorL->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(homorL);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy5.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy5);
        label_11->setFont(font3);

        horizontalLayout_6->addWidget(label_11);

        homoD0 = new QSlider(tab_2);
        homoD0->setObjectName(QString::fromUtf8("homoD0"));
        sizePolicy2.setHeightForWidth(homoD0->sizePolicy().hasHeightForWidth());
        homoD0->setSizePolicy(sizePolicy2);
        homoD0->setMaximum(20);
        homoD0->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(homoD0);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_13->addLayout(verticalLayout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, -1, 0);
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setFont(font4);

        horizontalLayout_9->addWidget(label_6);

        homoC = new QSpinBox(tab_2);
        homoC->setObjectName(QString::fromUtf8("homoC"));

        horizontalLayout_9->addWidget(homoC);

        homoButton = new QPushButton(tab_2);
        homoButton->setObjectName(QString::fromUtf8("homoButton"));
        sizePolicy2.setHeightForWidth(homoButton->sizePolicy().hasHeightForWidth());
        homoButton->setSizePolicy(sizePolicy2);
        homoButton->setFont(font2);

        horizontalLayout_9->addWidget(homoButton);


        verticalLayout_7->addLayout(horizontalLayout_9);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Fira Code"));
        font5.setPointSize(9);
        font5.setStrikeOut(false);
        font5.setKerning(true);
        label_9->setFont(font5);
        label_9->setTextFormat(Qt::RichText);
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setWordWrap(false);

        verticalLayout_7->addWidget(label_9);


        horizontalLayout_13->addLayout(verticalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        motionButton = new QPushButton(tab_2);
        motionButton->setObjectName(QString::fromUtf8("motionButton"));
        motionButton->setFont(font2);

        horizontalLayout_14->addWidget(motionButton);

        gNosieButton = new QPushButton(tab_2);
        gNosieButton->setObjectName(QString::fromUtf8("gNosieButton"));
        gNosieButton->setFont(font2);

        horizontalLayout_14->addWidget(gNosieButton);


        verticalLayout_5->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        invFilButton = new QPushButton(tab_2);
        invFilButton->setObjectName(QString::fromUtf8("invFilButton"));
        invFilButton->setFont(font2);

        horizontalLayout_15->addWidget(invFilButton);

        wieFilButton = new QPushButton(tab_2);
        wieFilButton->setObjectName(QString::fromUtf8("wieFilButton"));
        wieFilButton->setFont(font2);

        horizontalLayout_15->addWidget(wieFilButton);


        verticalLayout_5->addLayout(horizontalLayout_15);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        matrixBox = new QComboBox(tab);
        matrixBox->addItem(QString());
        matrixBox->addItem(QString());
        matrixBox->addItem(QString());
        matrixBox->addItem(QString());
        matrixBox->addItem(QString());
        matrixBox->addItem(QString());
        matrixBox->addItem(QString());
        matrixBox->addItem(QString());
        matrixBox->addItem(QString());
        matrixBox->setObjectName(QString::fromUtf8("matrixBox"));
        sizePolicy2.setHeightForWidth(matrixBox->sizePolicy().hasHeightForWidth());
        matrixBox->setSizePolicy(sizePolicy2);
        QFont font6;
        font6.setPointSize(12);
        matrixBox->setFont(font6);

        verticalLayout_2->addWidget(matrixBox);

        sizeBox = new QComboBox(tab);
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->addItem(QString());
        sizeBox->setObjectName(QString::fromUtf8("sizeBox"));
        sizePolicy2.setHeightForWidth(sizeBox->sizePolicy().hasHeightForWidth());
        sizeBox->setSizePolicy(sizePolicy2);
        sizeBox->setFont(font6);

        verticalLayout_2->addWidget(sizeBox);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        convButton = new QPushButton(tab);
        convButton->setObjectName(QString::fromUtf8("convButton"));
        sizePolicy1.setHeightForWidth(convButton->sizePolicy().hasHeightForWidth());
        convButton->setSizePolicy(sizePolicy1);
        convButton->setMaximumSize(QSize(200, 35));
        convButton->setFont(font6);

        verticalLayout_3->addWidget(convButton);

        zcButton = new QPushButton(tab);
        zcButton->setObjectName(QString::fromUtf8("zcButton"));
        sizePolicy1.setHeightForWidth(zcButton->sizePolicy().hasHeightForWidth());
        zcButton->setSizePolicy(sizePolicy1);
        zcButton->setMaximumSize(QSize(200, 35));
        zcButton->setFont(font6);

        verticalLayout_3->addWidget(zcButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(50, 16777215));
        QFont font7;
        font7.setPointSize(10);
        label_3->setFont(font7);

        horizontalLayout_3->addWidget(label_3);

        thresSlider = new QSlider(tab);
        thresSlider->setObjectName(QString::fromUtf8("thresSlider"));
        thresSlider->setMaximumSize(QSize(150, 16777215));
        thresSlider->setMaximum(99);
        thresSlider->setSingleStep(1);
        thresSlider->setSliderPosition(0);
        thresSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(thresSlider);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy6);
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 20));
        QFont font8;
        font8.setPointSize(12);
        font8.setBold(false);
        font8.setWeight(50);
        label->setFont(font8);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m31 = new QLabel(tab);
        m31->setObjectName(QString::fromUtf8("m31"));
        sizePolicy6.setHeightForWidth(m31->sizePolicy().hasHeightForWidth());
        m31->setSizePolicy(sizePolicy6);
        m31->setMinimumSize(QSize(40, 40));
        m31->setMaximumSize(QSize(40, 40));
        m31->setFrameShape(QFrame::Box);
        m31->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m31, 2, 0, 1, 1);

        m32 = new QLabel(tab);
        m32->setObjectName(QString::fromUtf8("m32"));
        sizePolicy6.setHeightForWidth(m32->sizePolicy().hasHeightForWidth());
        m32->setSizePolicy(sizePolicy6);
        m32->setMinimumSize(QSize(40, 40));
        m32->setMaximumSize(QSize(40, 40));
        m32->setFrameShape(QFrame::Box);
        m32->setAlignment(Qt::AlignCenter);
        m32->setWordWrap(false);

        gridLayout->addWidget(m32, 2, 1, 1, 1);

        m21 = new QLabel(tab);
        m21->setObjectName(QString::fromUtf8("m21"));
        sizePolicy6.setHeightForWidth(m21->sizePolicy().hasHeightForWidth());
        m21->setSizePolicy(sizePolicy6);
        m21->setMinimumSize(QSize(40, 40));
        m21->setMaximumSize(QSize(40, 40));
        m21->setFrameShape(QFrame::Box);
        m21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m21, 1, 0, 1, 1);

        m22 = new QLabel(tab);
        m22->setObjectName(QString::fromUtf8("m22"));
        sizePolicy6.setHeightForWidth(m22->sizePolicy().hasHeightForWidth());
        m22->setSizePolicy(sizePolicy6);
        m22->setMinimumSize(QSize(40, 40));
        m22->setMaximumSize(QSize(40, 40));
        m22->setFrameShape(QFrame::Box);
        m22->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m22, 1, 1, 1, 1);

        m33 = new QLabel(tab);
        m33->setObjectName(QString::fromUtf8("m33"));
        sizePolicy6.setHeightForWidth(m33->sizePolicy().hasHeightForWidth());
        m33->setSizePolicy(sizePolicy6);
        m33->setMinimumSize(QSize(40, 40));
        m33->setMaximumSize(QSize(40, 40));
        m33->setFrameShape(QFrame::Box);
        m33->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m33, 2, 2, 1, 1);

        m11 = new QLabel(tab);
        m11->setObjectName(QString::fromUtf8("m11"));
        sizePolicy6.setHeightForWidth(m11->sizePolicy().hasHeightForWidth());
        m11->setSizePolicy(sizePolicy6);
        m11->setMinimumSize(QSize(40, 40));
        m11->setMaximumSize(QSize(40, 40));
        m11->setFrameShape(QFrame::Box);
        m11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m11, 0, 0, 1, 1);

        m13 = new QLabel(tab);
        m13->setObjectName(QString::fromUtf8("m13"));
        sizePolicy6.setHeightForWidth(m13->sizePolicy().hasHeightForWidth());
        m13->setSizePolicy(sizePolicy6);
        m13->setMinimumSize(QSize(40, 40));
        m13->setMaximumSize(QSize(40, 40));
        m13->setFrameShape(QFrame::Box);
        m13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m13, 0, 2, 1, 1);

        m12 = new QLabel(tab);
        m12->setObjectName(QString::fromUtf8("m12"));
        sizePolicy6.setHeightForWidth(m12->sizePolicy().hasHeightForWidth());
        m12->setSizePolicy(sizePolicy6);
        m12->setMinimumSize(QSize(40, 40));
        m12->setMaximumSize(QSize(40, 40));
        m12->setFrameShape(QFrame::Box);
        m12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m12, 0, 1, 1, 1);

        m23 = new QLabel(tab);
        m23->setObjectName(QString::fromUtf8("m23"));
        sizePolicy6.setHeightForWidth(m23->sizePolicy().hasHeightForWidth());
        m23->setSizePolicy(sizePolicy6);
        m23->setMinimumSize(QSize(40, 40));
        m23->setMaximumSize(QSize(40, 40));
        m23->setFrameShape(QFrame::Box);
        m23->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m23, 1, 2, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_5);

        timelabel = new QLabel(tab);
        timelabel->setObjectName(QString::fromUtf8("timelabel"));
        timelabel->setMaximumSize(QSize(16777215, 20));
        timelabel->setFont(font6);
        timelabel->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(timelabel);

        tabWidget->addTab(tab, QString());

        verticalLayout_6->addWidget(tabWidget);

        infolabel = new QLabel(centralwidget);
        infolabel->setObjectName(QString::fromUtf8("infolabel"));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Fira Code"));
        font9.setPointSize(9);
        infolabel->setFont(font9);

        verticalLayout_6->addWidget(infolabel);

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

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setFont(font2);

        verticalLayout_6->addWidget(resetButton);

        diphw->setCentralWidget(centralwidget);
        menubar = new QMenuBar(diphw);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 377, 21));
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
        label_2->setText(QApplication::translate("diphw", "DIP HW", nullptr));
        openButton->setText(QApplication::translate("diphw", "Open Image", nullptr));
        pushButton->setText(QApplication::translate("diphw", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("diphw", "HW5", nullptr));
        showFSButton->setText(QApplication::translate("diphw", "fourier specturm", nullptr));
        showPASButton->setText(QApplication::translate("diphw", "Phase Angle", nullptr));
        ifftButton->setText(QApplication::translate("diphw", "inverse Fourier transform and comparison", nullptr));
        label_7->setText(QApplication::translate("diphw", "D0", nullptr));
        idealButton->setText(QApplication::translate("diphw", "ideal filter", nullptr));
        label_5->setText(QApplication::translate("diphw", "D0", nullptr));
        label_8->setText(QApplication::translate("diphw", "n", nullptr));
        butterButton->setText(QApplication::translate("diphw", "Butterworth filter", nullptr));
        label_4->setText(QApplication::translate("diphw", "D0", nullptr));
        GaussButton->setText(QApplication::translate("diphw", "Gaussian filter", nullptr));
        label_13->setText(QApplication::translate("diphw", "rH", nullptr));
        label_12->setText(QApplication::translate("diphw", "rL", nullptr));
        label_11->setText(QApplication::translate("diphw", "D0", nullptr));
        label_6->setText(QApplication::translate("diphw", "c", nullptr));
        homoButton->setText(QApplication::translate("diphw", "homomorphic", nullptr));
        label_9->setText(QApplication::translate("diphw", "<html><head/><body><p>0&lt;rH&lt;9</p><p>0&lt;rL&lt;1</p><p>0&lt;D0&lt;20</p></body></html>", nullptr));
        motionButton->setText(QApplication::translate("diphw", "motion blurred", nullptr));
        gNosieButton->setText(QApplication::translate("diphw", "zero-mean white Gaussian", nullptr));
        invFilButton->setText(QApplication::translate("diphw", "inverse filtering", nullptr));
        wieFilButton->setText(QApplication::translate("diphw", "Wiener filter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("diphw", "HW4", nullptr));
        matrixBox->setItemText(0, QApplication::translate("diphw", "choose kernel", nullptr));
        matrixBox->setItemText(1, QApplication::translate("diphw", "box kernel", nullptr));
        matrixBox->setItemText(2, QApplication::translate("diphw", "Gaussian sigma=1", nullptr));
        matrixBox->setItemText(3, QApplication::translate("diphw", "Gaussian sigma=2", nullptr));
        matrixBox->setItemText(4, QApplication::translate("diphw", "Laplacian of Gaussian", nullptr));
        matrixBox->setItemText(5, QApplication::translate("diphw", "Sobel", nullptr));
        matrixBox->setItemText(6, QApplication::translate("diphw", "max", nullptr));
        matrixBox->setItemText(7, QApplication::translate("diphw", "median", nullptr));
        matrixBox->setItemText(8, QApplication::translate("diphw", "min", nullptr));

        sizeBox->setItemText(0, QApplication::translate("diphw", "select size", nullptr));
        sizeBox->setItemText(1, QApplication::translate("diphw", "3x3", nullptr));
        sizeBox->setItemText(2, QApplication::translate("diphw", "5x5", nullptr));
        sizeBox->setItemText(3, QApplication::translate("diphw", "7x7", nullptr));
        sizeBox->setItemText(4, QApplication::translate("diphw", "9x9", nullptr));
        sizeBox->setItemText(5, QApplication::translate("diphw", "11x11", nullptr));
        sizeBox->setItemText(6, QApplication::translate("diphw", "21x21", nullptr));
        sizeBox->setItemText(7, QApplication::translate("diphw", "25x25", nullptr));
        sizeBox->setItemText(8, QApplication::translate("diphw", "43x43", nullptr));
        sizeBox->setItemText(9, QApplication::translate("diphw", "85x85", nullptr));

        convButton->setText(QApplication::translate("diphw", "Convolution", nullptr));
        zcButton->setText(QApplication::translate("diphw", "Zero-Corssing", nullptr));
        label_3->setText(QApplication::translate("diphw", "Threshold", nullptr));
        label->setText(QApplication::translate("diphw", "Selected kernel (only showing 3x3 around the center)", nullptr));
        m31->setText(QApplication::translate("diphw", "0", nullptr));
        m32->setText(QApplication::translate("diphw", "0", nullptr));
        m21->setText(QApplication::translate("diphw", "0", nullptr));
        m22->setText(QApplication::translate("diphw", "0", nullptr));
        m33->setText(QApplication::translate("diphw", "0", nullptr));
        m11->setText(QApplication::translate("diphw", "0", nullptr));
        m13->setText(QApplication::translate("diphw", "0", nullptr));
        m12->setText(QApplication::translate("diphw", "0", nullptr));
        m23->setText(QApplication::translate("diphw", "0", nullptr));
        timelabel->setText(QApplication::translate("diphw", "Choose a kernel and size then press convolution", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("diphw", "HW3", nullptr));
        infolabel->setText(QApplication::translate("diphw", "Open an Image first......", nullptr));
        closeImgButton->setText(QApplication::translate("diphw", "Clear", nullptr));
        exitButton->setText(QApplication::translate("diphw", "Close", nullptr));
        resetButton->setText(QApplication::translate("diphw", "reset input", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diphw: public Ui_diphw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIPHW_H
