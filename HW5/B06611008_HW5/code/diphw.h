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

    void on_closeImgButton_clicked();

    void on_cmyButton_clicked();

    void on_hsiButton_clicked();

    void on_xyzButton_clicked();

    void on_labButton_clicked();

    void on_yuvButton_clicked();

    void on_pseudoButton_clicked();

private:
    Ui::diphw *ui;
    cv::Mat myImg;
    cv::Mat myImg2;
    cv::Mat myImg3;
    cv::Mat mykernel;
    ImgProcess imgp;
    float zcThres;
    void upDateMatrix();
    void resetUiInput();

};
#endif // DIPHW_H
