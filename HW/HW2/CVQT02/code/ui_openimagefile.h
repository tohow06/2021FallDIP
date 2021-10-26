/********************************************************************************
** Form generated from reading UI file 'openimagefile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENIMAGEFILE_H
#define UI_OPENIMAGEFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenImageFile
{
public:
    QAction *action_3;
    QAction *actionExit_2;
    QWidget *centralWidget;
    QLabel *label_6;
    QLabel *img1text;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *imgLabel3;
    QLineEdit *lineEdit;
    QPushButton *spatButton;
    QPushButton *minuButton;
    QPushButton *thresButton;
    QFrame *frame;
    QLabel *label;
    QLabel *img2text;
    QPushButton *grayABBtn;
    QLabel *imgLabel2;
    QFrame *frame2;
    QPushButton *histoButton;
    QPushButton *exitBtn;
    QPushButton *graLeButton;
    QLineEdit *lineEdit_ratio;
    QLineEdit *lineEdit_level;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *horizontalSlider_2;
    QMenuBar *menuBar;
    QMenu *menuOpen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenImageFile)
    {
        if (OpenImageFile->objectName().isEmpty())
            OpenImageFile->setObjectName(QString::fromUtf8("OpenImageFile"));
        OpenImageFile->resize(1130, 780);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        OpenImageFile->setFont(font);
        action_3 = new QAction(OpenImageFile);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        actionExit_2 = new QAction(OpenImageFile);
        actionExit_2->setObjectName(QString::fromUtf8("actionExit_2"));
        centralWidget = new QWidget(OpenImageFile);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 10, 321, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(75);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setKerning(true);
        label_6->setFont(font1);
        img1text = new QLabel(centralWidget);
        img1text->setObjectName(QString::fromUtf8("img1text"));
        img1text->setGeometry(QRect(32, 95, 46, 24));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setWeight(50);
        img1text->setFont(font2);
        img1text->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 400, 141, 32));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(591, 91, 86, 24));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        imgLabel3 = new QLabel(centralWidget);
        imgLabel3->setObjectName(QString::fromUtf8("imgLabel3"));
        imgLabel3->setGeometry(QRect(590, 130, 200, 200));
        imgLabel3->setMinimumSize(QSize(200, 200));
        imgLabel3->setFrameShape(QFrame::Box);
        imgLabel3->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(750, 560, 125, 30));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(100, 30));
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spatButton = new QPushButton(centralWidget);
        spatButton->setObjectName(QString::fromUtf8("spatButton"));
        spatButton->setGeometry(QRect(590, 600, 191, 32));
        minuButton = new QPushButton(centralWidget);
        minuButton->setObjectName(QString::fromUtf8("minuButton"));
        minuButton->setGeometry(QRect(590, 480, 221, 32));
        thresButton = new QPushButton(centralWidget);
        thresButton->setObjectName(QString::fromUtf8("thresButton"));
        thresButton->setGeometry(QRect(590, 560, 150, 32));
        thresButton->setMinimumSize(QSize(150, 0));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(248, 138, 300, 200));
        frame->setMinimumSize(QSize(300, 200));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(32, 138, 200, 200));
        label->setMinimumSize(QSize(200, 200));
        label->setFont(font2);
        label->setFrameShape(QFrame::Box);
        label->setAlignment(Qt::AlignCenter);
        img2text = new QLabel(centralWidget);
        img2text->setObjectName(QString::fromUtf8("img2text"));
        img2text->setGeometry(QRect(32, 405, 49, 24));
        img2text->setFont(font2);
        img2text->setAlignment(Qt::AlignCenter);
        grayABBtn = new QPushButton(centralWidget);
        grayABBtn->setObjectName(QString::fromUtf8("grayABBtn"));
        grayABBtn->setGeometry(QRect(590, 440, 211, 31));
        imgLabel2 = new QLabel(centralWidget);
        imgLabel2->setObjectName(QString::fromUtf8("imgLabel2"));
        imgLabel2->setGeometry(QRect(30, 460, 200, 200));
        imgLabel2->setMinimumSize(QSize(200, 200));
        imgLabel2->setFont(font2);
        imgLabel2->setFrameShape(QFrame::Box);
        imgLabel2->setAlignment(Qt::AlignCenter);
        frame2 = new QFrame(centralWidget);
        frame2->setObjectName(QString::fromUtf8("frame2"));
        frame2->setGeometry(QRect(250, 440, 300, 200));
        frame2->setMinimumSize(QSize(300, 200));
        frame2->setFrameShape(QFrame::Box);
        histoButton = new QPushButton(centralWidget);
        histoButton->setObjectName(QString::fromUtf8("histoButton"));
        histoButton->setGeometry(QRect(590, 520, 191, 32));
        exitBtn = new QPushButton(centralWidget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(1040, 640, 65, 32));
        graLeButton = new QPushButton(centralWidget);
        graLeButton->setObjectName(QString::fromUtf8("graLeButton"));
        graLeButton->setGeometry(QRect(590, 640, 165, 32));
        lineEdit_ratio = new QLineEdit(centralWidget);
        lineEdit_ratio->setObjectName(QString::fromUtf8("lineEdit_ratio"));
        lineEdit_ratio->setGeometry(QRect(790, 600, 121, 31));
        lineEdit_level = new QLineEdit(centralWidget);
        lineEdit_level->setObjectName(QString::fromUtf8("lineEdit_level"));
        lineEdit_level->setGeometry(QRect(760, 640, 131, 31));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(930, 420, 160, 22));
        horizontalSlider->setMinimum(-100);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(890, 390, 101, 21));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setWeight(50);
        label_2->setFont(font3);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(890, 450, 91, 21));
        label_3->setFont(font3);
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(930, 480, 160, 22));
        horizontalSlider_2->setMaximum(5);
        horizontalSlider_2->setSingleStep(1);
        horizontalSlider_2->setPageStep(5);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        OpenImageFile->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpenImageFile);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1130, 24));
        menuOpen = new QMenu(menuBar);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        OpenImageFile->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpenImageFile);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        OpenImageFile->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OpenImageFile);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        OpenImageFile->setStatusBar(statusBar);

        menuBar->addAction(menuOpen->menuAction());
        menuOpen->addAction(action_3);
        menuOpen->addSeparator();
        menuOpen->addAction(actionExit_2);

        retranslateUi(OpenImageFile);

        QMetaObject::connectSlotsByName(OpenImageFile);
    } // setupUi

    void retranslateUi(QMainWindow *OpenImageFile)
    {
        OpenImageFile->setWindowTitle(QApplication::translate("OpenImageFile", "Open Image File", nullptr));
        action_3->setText(QApplication::translate("OpenImageFile", "Open", nullptr));
        actionExit_2->setText(QApplication::translate("OpenImageFile", "Exit", nullptr));
        label_6->setText(QApplication::translate("OpenImageFile", "HW02", nullptr));
        img1text->setText(QApplication::translate("OpenImageFile", "img 1", nullptr));
        pushButton->setText(QApplication::translate("OpenImageFile", "Open Image File", nullptr));
        label_4->setText(QApplication::translate("OpenImageFile", "result img", nullptr));
        imgLabel3->setText(QApplication::translate("OpenImageFile", "img3", nullptr));
        spatButton->setText(QApplication::translate("OpenImageFile", "spatial ratio(ex:0.1,  2)", nullptr));
        minuButton->setText(QApplication::translate("OpenImageFile", "subtract for compare", nullptr));
        thresButton->setText(QApplication::translate("OpenImageFile", "threshold", nullptr));
        label->setText(QApplication::translate("OpenImageFile", "img", nullptr));
        img2text->setText(QApplication::translate("OpenImageFile", "img 2", nullptr));
        grayABBtn->setText(QApplication::translate("OpenImageFile", "convert  grayscale A, B", nullptr));
        imgLabel2->setText(QApplication::translate("OpenImageFile", "img2", nullptr));
        histoButton->setText(QApplication::translate("OpenImageFile", "histogram", nullptr));
        exitBtn->setText(QApplication::translate("OpenImageFile", "exit", nullptr));
        graLeButton->setText(QApplication::translate("OpenImageFile", "grayscale level", nullptr));
        label_2->setText(QApplication::translate("OpenImageFile", "Brightness", nullptr));
        label_3->setText(QApplication::translate("OpenImageFile", "Contrast", nullptr));
        menuOpen->setTitle(QApplication::translate("OpenImageFile", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenImageFile: public Ui_OpenImageFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENIMAGEFILE_H
