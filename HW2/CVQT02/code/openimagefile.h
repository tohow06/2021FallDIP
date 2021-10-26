#ifndef OPENIMAGEFILE_H
#define OPENIMAGEFILE_H

#include <QMainWindow>
#include <QFileDialog>
#include <map>
#include <opencv2/opencv.hpp>

#include <QtWidgets>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QHBoxLayout>

#include "imgprocess.h"

QT_CHARTS_USE_NAMESPACE


using namespace cv;
using std::map;
namespace Ui {
class OpenImageFile;
}

class OpenImageFile : public QMainWindow
{
    Q_OBJECT

public:
    explicit OpenImageFile(QWidget *parent = 0);
    ~OpenImageFile();



private slots:
    void on_pushButton_clicked();

    void on_action_3_triggered();

    void on_actionExit_2_triggered();

    void on_exitBtn_clicked();

    void on_grayABBtn_clicked();

    void on_thresButton_clicked();

    void on_minuButton_clicked();

    void on_spatButton_clicked();

    void on_histoButton_clicked();

    void on_graLeButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

private:
    Ui::OpenImageFile *ui;
    Mat proc64File(Mat, const char*);
    QImage imim;
    map<char,int> table64;
    Mat mymat64;
    Mat mymat64_2;
    Mat mymat64_3;
    void drawHisto(Mat, QFrame*);
    void drawAll(Mat,QLabel * ,QFrame *);
    ImgProcess imgp;

};

#endif // OPENIMAGEFILE_H
