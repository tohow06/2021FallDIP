#include "diphw.h"
#include "ui_diphw.h"
#include "imgprocess.h"

using namespace std;
using namespace cv;
diphw::diphw(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::diphw)
{
    ui->setupUi(this);
}

diphw::~diphw()
{
    delete ui;
}


void diphw::on_openButton_clicked()
{

    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open Image"), ".",
                                                    //        tr("Open Image"),"/Users/tohow/Documents/QtQt/2021FallDIP/HW4/C1HW04-2021/.",
                                                    tr("Image Files (*.png *.jpg *.jpeg *.bmp *.tif"));
    if(fileName != NULL)
    {
        //        std::cout<<fileName.section("/",-1,-1).toStdString()<<std::endl;
        //        std::cout<<fileName.toStdString()<<std::endl;
        std::string fN=fileName.toStdString().data();
        this->myImg = cv::imread(fN);
        cv::namedWindow("origin",cv::WINDOW_AUTOSIZE);
        cv::imshow("origin",this->myImg);
    }
}

void diphw::on_closeImgButton_clicked()
{
    cv::destroyAllWindows();
}

void diphw::on_exitButton_clicked()
{
    close();
}

//----------------------------


void diphw::on_trapButton_clicked()
{

    Mat src;
    src = this->imgp.grayScaleA(this->myImg).clone();
    src.convertTo(src,CV_8U);

    Mat Hom;
    Mat warp_dst = Mat::zeros( src.rows, src.cols, src.type() );

    vector<Point2f> srcTri;
    srcTri.push_back(Point2f( 0, 0 ));
    srcTri.push_back(Point2f( src.cols , 0 ));
    srcTri.push_back(Point2f( src.cols, src.rows));
    srcTri.push_back(Point2f( 0, src.rows));
    vector<Point2f> dstTri;
    dstTri.push_back(Point2f( warp_dst.cols*this->tw, warp_dst.rows*this->th));
    dstTri.push_back(Point2f( warp_dst.cols*(1-this->tw), warp_dst.rows*this->th));
    dstTri.push_back(Point2f( warp_dst.cols, warp_dst.rows));
    dstTri.push_back(Point2f( 0, warp_dst.rows));

    Hom = findHomography(srcTri,dstTri);
    warpPerspective(src,warp_dst,Hom,warp_dst.size());

    imshow( "Warp", warp_dst );

}


void diphw::on_highSlider_valueChanged(int value)
{

    this->th = value/100.0;
    on_trapButton_clicked();
}


void diphw::on_widthSlider_valueChanged(int value)
{
    this->tw = value/100.0;
    on_trapButton_clicked();
}


void diphw::on_wavyButton_clicked()
{
    Mat src;
    src = this->imgp.grayScaleA(this->myImg).clone();
    src.convertTo(src,CV_8U);

    int ro = src.rows;
    int co = src.cols;

    Mat warp_dst = Mat::zeros( ro, co, src.type() );
    for(int i=0;i<ro;i++){
        for(int j=0;j<co;j++){
            int offset_x = int(20.0 * sin(2 * 3.14 * i / this->freq));
            int offset_y = int(20.0 * cos(2 * 3.14 * j / this->freq));
            warp_dst.at<uchar>(i,j) = src.at<uchar>( (i+offset_y) % ro, (j+offset_x)%co);
        }
    }

    imshow( "Warp", warp_dst );
}

void diphw::on_freqSlider_valueChanged(int value)
{
    this->freq = value;
    on_wavyButton_clicked();
}




void diphw::on_circularButton_clicked()
{
    Mat src;
    src = this->imgp.grayScaleA(this->myImg).clone();
    src.convertTo(src,CV_8U);

    int ro = src.rows;
    int co = src.cols;

    int r = co/2;

    Mat warp_dst = Mat::zeros( ro, co, src.type() );

    for(int i=0;i<ro;i++){
            int sin = abs(ro/2-i);
            int tan = sqrt(r*2*2-sin*2*2);
            Rect lineROI = Rect(0,0,co,1);
            Mat oneline = src(lineROI);
            Mat pressed;
            cv::resize(oneline,pressed,Size(tan,1));

            int Xpos = co/2-tan/2;
            Mat roi = warp_dst(Rect(100,i,tan,1));
            pressed.copyTo(roi);

    }

    imshow( "Warp", warp_dst );
}

