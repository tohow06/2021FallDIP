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
    /*
    Mat src;
    src = this->imgp.grayScaleA(this->myImg).clone();
    src.convertTo(src,CV_8U);

    Point2f srcTri[3];
    srcTri[0] = Point2f( 0.f, 0.f );
    srcTri[1] = Point2f( src.cols - 1.f, 0.f );
    srcTri[2] = Point2f( src.cols*0.5f, src.rows - 1.f);
    Point2f dstTri[3];
    dstTri[0] = Point2f( src.cols*0.2f, 0.f );
    dstTri[1] = Point2f( src.cols*0.8f, 0.f );
    dstTri[2] = Point2f( src.cols*0.5f, src.rows - 1.f );

    Mat warp_mat = getAffineTransform( srcTri, dstTri );
    Mat warp_dst = Mat::zeros( src.rows, src.cols, src.type() );
    warpAffine( src, warp_dst, warp_mat, warp_dst.size() );

    imshow( "Source image", src );
    imshow( "Warp", warp_dst );
    */
    Mat src;
    src = this->imgp.grayScaleA(this->myImg).clone();
    src.convertTo(src,CV_8U);

    Point2f srcTri[4];
    srcTri[0] = Point2f( 0.f, 0.f );
    srcTri[1] = Point2f( src.cols - 1.f, 0.f );
    srcTri[2] = Point2f( src.cols*0.5f, src.rows - 1.f);
    srcTri[3] = Point2f( src.cols*0.5f, src.rows - 1.f);
    Point2f dstTri[4];
    dstTri[0] = Point2f( src.cols*0.2f, 0.f );
    dstTri[1] = Point2f( src.cols*0.8f, 0.f );
    dstTri[2] = Point2f( src.cols*0.5f, src.rows - 1.f );
    srcTri[3] = Point2f( src.cols*0.5f, src.rows - 1.f);

    Mat warp_mat;
    cv::findHomography(srcTri,dstTri);
    Mat warp_dst = Mat::zeros( src.rows, src.cols, src.type() );
    warpAffine( src, warp_dst, warp_mat, warp_dst.size() );

    imshow( "Source image", src );
    imshow( "Warp", warp_dst );
}

