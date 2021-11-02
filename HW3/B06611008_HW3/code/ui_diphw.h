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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_diphw
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPushButton *openButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QComboBox *matrixBox;
    QComboBox *sizeBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *convButton;
    QPushButton *zcButton;
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
    QHBoxLayout *horizontalLayout_2;
    QPushButton *closeImgButton;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *diphw)
    {
        if (diphw->objectName().isEmpty())
            diphw->setObjectName(QString::fromUtf8("diphw"));
        diphw->resize(359, 520);
        centralwidget = new QWidget(diphw);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(40);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        openButton = new QPushButton(centralwidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openButton->sizePolicy().hasHeightForWidth());
        openButton->setSizePolicy(sizePolicy);
        openButton->setMinimumSize(QSize(0, 0));
        openButton->setMaximumSize(QSize(16777215, 60));

        verticalLayout->addWidget(openButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        matrixBox = new QComboBox(centralwidget);
        matrixBox->addItem(QString());
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

        verticalLayout_2->addWidget(matrixBox);

        sizeBox = new QComboBox(centralwidget);
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

        verticalLayout_2->addWidget(sizeBox);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        convButton = new QPushButton(centralwidget);
        convButton->setObjectName(QString::fromUtf8("convButton"));
        sizePolicy.setHeightForWidth(convButton->sizePolicy().hasHeightForWidth());
        convButton->setSizePolicy(sizePolicy);
        convButton->setMaximumSize(QSize(16777215, 35));

        verticalLayout_3->addWidget(convButton);

        zcButton = new QPushButton(centralwidget);
        zcButton->setObjectName(QString::fromUtf8("zcButton"));
        sizePolicy.setHeightForWidth(zcButton->sizePolicy().hasHeightForWidth());
        zcButton->setSizePolicy(sizePolicy);
        zcButton->setMaximumSize(QSize(16777215, 35));

        verticalLayout_3->addWidget(zcButton);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m31 = new QLabel(centralwidget);
        m31->setObjectName(QString::fromUtf8("m31"));
        sizePolicy1.setHeightForWidth(m31->sizePolicy().hasHeightForWidth());
        m31->setSizePolicy(sizePolicy1);
        m31->setMinimumSize(QSize(40, 40));
        m31->setMaximumSize(QSize(40, 40));
        m31->setFrameShape(QFrame::Box);
        m31->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m31, 2, 0, 1, 1);

        m32 = new QLabel(centralwidget);
        m32->setObjectName(QString::fromUtf8("m32"));
        sizePolicy1.setHeightForWidth(m32->sizePolicy().hasHeightForWidth());
        m32->setSizePolicy(sizePolicy1);
        m32->setMinimumSize(QSize(40, 40));
        m32->setMaximumSize(QSize(40, 40));
        m32->setFrameShape(QFrame::Box);
        m32->setAlignment(Qt::AlignCenter);
        m32->setWordWrap(false);

        gridLayout->addWidget(m32, 2, 1, 1, 1);

        m21 = new QLabel(centralwidget);
        m21->setObjectName(QString::fromUtf8("m21"));
        sizePolicy1.setHeightForWidth(m21->sizePolicy().hasHeightForWidth());
        m21->setSizePolicy(sizePolicy1);
        m21->setMinimumSize(QSize(40, 40));
        m21->setMaximumSize(QSize(40, 40));
        m21->setFrameShape(QFrame::Box);
        m21->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m21, 1, 0, 1, 1);

        m22 = new QLabel(centralwidget);
        m22->setObjectName(QString::fromUtf8("m22"));
        sizePolicy1.setHeightForWidth(m22->sizePolicy().hasHeightForWidth());
        m22->setSizePolicy(sizePolicy1);
        m22->setMinimumSize(QSize(40, 40));
        m22->setMaximumSize(QSize(40, 40));
        m22->setFrameShape(QFrame::Box);
        m22->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m22, 1, 1, 1, 1);

        m33 = new QLabel(centralwidget);
        m33->setObjectName(QString::fromUtf8("m33"));
        sizePolicy1.setHeightForWidth(m33->sizePolicy().hasHeightForWidth());
        m33->setSizePolicy(sizePolicy1);
        m33->setMinimumSize(QSize(40, 40));
        m33->setMaximumSize(QSize(40, 40));
        m33->setFrameShape(QFrame::Box);
        m33->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m33, 2, 2, 1, 1);

        m11 = new QLabel(centralwidget);
        m11->setObjectName(QString::fromUtf8("m11"));
        sizePolicy1.setHeightForWidth(m11->sizePolicy().hasHeightForWidth());
        m11->setSizePolicy(sizePolicy1);
        m11->setMinimumSize(QSize(40, 40));
        m11->setMaximumSize(QSize(40, 40));
        m11->setFrameShape(QFrame::Box);
        m11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m11, 0, 0, 1, 1);

        m13 = new QLabel(centralwidget);
        m13->setObjectName(QString::fromUtf8("m13"));
        sizePolicy1.setHeightForWidth(m13->sizePolicy().hasHeightForWidth());
        m13->setSizePolicy(sizePolicy1);
        m13->setMinimumSize(QSize(40, 40));
        m13->setMaximumSize(QSize(40, 40));
        m13->setFrameShape(QFrame::Box);
        m13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m13, 0, 2, 1, 1);

        m12 = new QLabel(centralwidget);
        m12->setObjectName(QString::fromUtf8("m12"));
        sizePolicy1.setHeightForWidth(m12->sizePolicy().hasHeightForWidth());
        m12->setSizePolicy(sizePolicy1);
        m12->setMinimumSize(QSize(40, 40));
        m12->setMaximumSize(QSize(40, 40));
        m12->setFrameShape(QFrame::Box);
        m12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m12, 0, 1, 1, 1);

        m23 = new QLabel(centralwidget);
        m23->setObjectName(QString::fromUtf8("m23"));
        sizePolicy1.setHeightForWidth(m23->sizePolicy().hasHeightForWidth());
        m23->setSizePolicy(sizePolicy1);
        m23->setMinimumSize(QSize(40, 40));
        m23->setMaximumSize(QSize(40, 40));
        m23->setFrameShape(QFrame::Box);
        m23->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(m23, 1, 2, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        timelabel = new QLabel(centralwidget);
        timelabel->setObjectName(QString::fromUtf8("timelabel"));
        timelabel->setMaximumSize(QSize(16777215, 20));
        timelabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(timelabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        closeImgButton = new QPushButton(centralwidget);
        closeImgButton->setObjectName(QString::fromUtf8("closeImgButton"));
        sizePolicy.setHeightForWidth(closeImgButton->sizePolicy().hasHeightForWidth());
        closeImgButton->setSizePolicy(sizePolicy);
        closeImgButton->setMaximumSize(QSize(16777215, 45));

        horizontalLayout_2->addWidget(closeImgButton);

        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);
        exitButton->setMaximumSize(QSize(16777215, 45));

        horizontalLayout_2->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout_2);

        diphw->setCentralWidget(centralwidget);
        menubar = new QMenuBar(diphw);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 359, 24));
        diphw->setMenuBar(menubar);
        statusbar = new QStatusBar(diphw);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        diphw->setStatusBar(statusbar);

        retranslateUi(diphw);

        QMetaObject::connectSlotsByName(diphw);
    } // setupUi

    void retranslateUi(QMainWindow *diphw)
    {
        diphw->setWindowTitle(QApplication::translate("diphw", "diphw", nullptr));
        label_2->setText(QApplication::translate("diphw", "HW03", nullptr));
        openButton->setText(QApplication::translate("diphw", "Open Image", nullptr));
        matrixBox->setItemText(0, QApplication::translate("diphw", "choose kernel", nullptr));
        matrixBox->setItemText(1, QApplication::translate("diphw", "box kernel", nullptr));
        matrixBox->setItemText(2, QApplication::translate("diphw", "Gaussian sigma=1", nullptr));
        matrixBox->setItemText(3, QApplication::translate("diphw", "Gaussian sigma=2", nullptr));
        matrixBox->setItemText(4, QApplication::translate("diphw", "Laplacian of Gaussian", nullptr));
        matrixBox->setItemText(5, QApplication::translate("diphw", "Marr-Hildreth", nullptr));
        matrixBox->setItemText(6, QApplication::translate("diphw", "Sobel", nullptr));
        matrixBox->setItemText(7, QApplication::translate("diphw", "max", nullptr));
        matrixBox->setItemText(8, QApplication::translate("diphw", "median", nullptr));
        matrixBox->setItemText(9, QApplication::translate("diphw", "min", nullptr));

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

        convButton->setText(QApplication::translate("diphw", "convolution", nullptr));
        zcButton->setText(QApplication::translate("diphw", "Zero-Corssing", nullptr));
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
        closeImgButton->setText(QApplication::translate("diphw", "Clear", nullptr));
        exitButton->setText(QApplication::translate("diphw", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diphw: public Ui_diphw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIPHW_H
