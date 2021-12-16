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

//-------------------------------------

    void on_trapButton_clicked();

    void on_highSlider_valueChanged(int value);

    void on_widthSlider_valueChanged(int value);

    void on_wavyButton_clicked();

    void on_freqSlider_valueChanged(int value);

    void on_circularButton_clicked();

    void on_houghButton_clicked();

    void on_threshold_lineEdit_textChanged(const QString &arg1);

    void on_minLineLength_lineEdit_textChanged(const QString &arg1);

    void on_maxLineGap_lineEdit_textChanged(const QString &arg1);

    void on_dwtButton_clicked();

    void on_img1Button_clicked();
    void on_img2Button_clicked();
    void on_img3Button_clicked();

    void on_fusionButton_clicked();

private:
    Ui::diphw *ui;
    cv::Mat myImg;
    cv::Mat myImg1;
    cv::Mat myImg2;
    cv::Mat myImg3;
    cv::Mat imgDWT[3];
    int Fu_count;
    cv::Mat mykernel;
    double tw,th,freq,hThres,hminLL, hmaxLG; // parameters
    ImgProcess imgp;
    float zcThres;
    void upDateMatrix();
    void resetUiInput();

};
#endif // DIPHW_H
