#ifndef DIPHW_H
#define DIPHW_H

#include <opencv2/opencv.hpp>
#include "imgprocess.h"

#include <QMainWindow>
#include <QFileDialog>
#include <QElapsedTimer>
#include <QDebug>
#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class diphw; }
QT_END_NAMESPACE

class diphw : public QMainWindow
{
    Q_OBJECT

public:
    diphw(QWidget *parent = nullptr);
    ~diphw();

private slots:
    void on_openButton_clicked();

    void on_exitButton_clicked();

    void on_matrixBox_currentIndexChanged(int index);

    void on_sizeBox_currentIndexChanged(int index);

    void on_convButton_clicked();

    void on_closeImgButton_clicked();

    void on_zcButton_clicked();

private:
    Ui::diphw *ui;
    cv::Mat myImg;
    cv::Mat myImg2;
    cv::Mat myImg3;
    cv::Mat mykernel;
    ImgProcess imgp;
    void upDateMatrix();

};
#endif // DIPHW_H
