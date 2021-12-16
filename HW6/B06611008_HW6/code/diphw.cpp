#include "diphw.h"
#include "ui_diphw.h"
#include "imgprocess.h"
#include "dwt2.h"

using namespace std;
using namespace cv;

diphw::diphw(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::diphw)
{
    ui->setupUi(this);
    hThres = 50;
    hminLL = 50;
    hmaxLG = 10;
}

diphw::~diphw()
{
    delete ui;
}


bool mycompareVec4i(Vec4i a, Vec4i b) {

    return a[0] > b[0]; // 降序排列
}

bool mycompareVec2i(Vec2i a, Vec2i b) {

    return a[0] > b[0]; // 降序排列
}

void diphw::on_openButton_clicked()
{

    QString fileName = QFileDialog::getOpenFileName(this,
                                                    //                                                    tr("Open Image"), ".",
                                                    tr("Open Image"),"/Users/tohow/Documents/QtQt/2021FallDIP/HW6/C1HW06-2021/.",
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
            int newy = abs((i+offset_y) % ro);
            int newx = abs((j+offset_x) % co);

            warp_dst.at<uchar>(i,j) = src.at<uchar>(newy, newx);
        }
    }
    namedWindow("Warp", cv::WINDOW_AUTOSIZE);
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

    for(int i=0;i<co;i++){
        int sin = abs(ro/2-i);
        int tan = sqrt(r*r-sin*sin);
        if(tan == 0)
            continue;
        Rect lineROI = Rect(0,i,co,1);
        Mat oneline = src(lineROI).clone();
        Mat pressed;
        cv::resize(oneline,pressed,Size(tan*2,1));

        int Xpos = co/2-tan;
        Mat roi = warp_dst(Rect(Xpos,i,tan*2,1));
        pressed.copyTo(roi);

    }

    namedWindow("Warp", cv::WINDOW_AUTOSIZE);
    imshow( "Warp", warp_dst );

}


void diphw::on_houghButton_clicked()
{
    Mat src, dst, cdst, cdstP;
    src = this->imgp.grayScaleA(this->myImg).clone();
    src.convertTo(src,CV_8U);

    // Edge detection
    Canny(src, dst, 50, 200, 3);
    // Copy edges to the images that will display the results in BGR
    cvtColor(dst, cdst, COLOR_GRAY2BGR);
    cdstP = cdst.clone();
    // Standard Hough Line Transform
    vector<Vec2f> lines; // will hold the results of the detection
    HoughLines(dst, lines, 1, CV_PI/180, 150, 0, 0 ); // runs the actual detection
    // Draw the lines
    for( size_t i = 0; i < lines.size(); i++ )
    {
        float rho = lines[i][0], theta = lines[i][1];
        Point pt1, pt2;
        double a = cos(theta), b = sin(theta);
        double x0 = a*rho, y0 = b*rho;
        pt1.x = cvRound(x0 + 1000*(-b));
        pt1.y = cvRound(y0 + 1000*(a));
        pt2.x = cvRound(x0 - 1000*(-b));
        pt2.y = cvRound(y0 - 1000*(a));
        line( cdst, pt1, pt2, Scalar(0,0,255), 3, LINE_AA);
    }
    // Probabilistic Line Transform
    vector<Vec4i> linesP; // will hold the results of the detection
    HoughLinesP(dst, linesP, 1, CV_PI/180, hThres, hminLL, hmaxLG); // runs the actual detection


    ui->infolabel->setText(QString("get %1 lines").arg(linesP.size()));

    sort(linesP.begin(),linesP.end(), mycompareVec4i);

    vector<Vec2i> corners;
    // Draw the lines
    for( size_t i = 0; i < linesP.size(); i++ )
    {

        Vec4i l = linesP[i];
        line( cdstP, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0,0,255), 3, LINE_AA);
//        putText(cdstP, QString("%1").arg(i).toStdString(), Point(l[0], l[1]), FONT_HERSHEY_PLAIN, 3, Scalar(0,255,255), 4);
//        cout<<"line  = "<<l[0]<<", "<<l[1]<<", "<<l[2]<<", "<<l[3]<<endl;

    }
    int err_thres = 20;
    for( size_t i = 0; i < linesP.size(); i++ )
    {
        Vec4i l = linesP[i];
        for( size_t j = i+1; j < linesP.size(); j++ )
        {
            Vec4i m = linesP[j];
            int err = abs(l[0]-m[0])+abs(l[1]-m[1]);
            int err2 = abs(l[2]-m[2])+abs(l[3]-m[3]);
            if(err<err_thres){
                corners.push_back(Vec2i(l[0],l[1]));
                linesP[j]=Vec4i(l[0],l[1],m[2],m[3]);
            }

            if(err2<err_thres){
                corners.push_back(Vec2i(l[2],l[3]));
                linesP[j]=Vec4i(m[0],m[1],l[2],l[3]);
            }

        }
    }

    sort( corners.begin(), corners.end(), mycompareVec2i);
    corners.erase( unique( corners.begin(), corners.end() ), corners.end() );

    vector<Vec2i> fcorners;
    for( size_t i = 0; i < corners.size(); i++ )
    {
        Vec2i l = corners[i];
        static int flag = 0;
        for( size_t j = i+1; j < corners.size(); j++ )
        {
            Vec2i m = corners[j];
            int err = abs(l[0]-m[0])+abs(l[1]-m[1]);
            if(err<err_thres){
                  flag = 1;
                  break;
            }
        }
        if (flag == 0){
            fcorners.push_back(l);
        }else{
            flag = 0;
        }
    }


    cout<<"after filter fcorners"<<endl;
    for(size_t i = 0; i < fcorners.size(); i++){
        Vec2i l = fcorners[i];
        cout<<"corners  = "<<l[0]<<", "<<l[1]<<endl;
        circle(cdstP, Point(l[0],l[1]), 4, Scalar(255,255,0), 3);
    }


    // Show results
    //    imshow("canny", dst);
    //    imshow("Detected Lines (in red) - Standard Hough Line Transform", cdst);

    imshow("Detected Lines (in red) - Probabilistic Line Transform", cdstP);


}



void diphw::on_threshold_lineEdit_textChanged(const QString &arg1)
{
    this->hThres = arg1.toDouble();
    on_houghButton_clicked();
}


void diphw::on_minLineLength_lineEdit_textChanged(const QString &arg1)
{
    this->hminLL = arg1.toDouble();
    on_houghButton_clicked();
}


void diphw::on_maxLineGap_lineEdit_textChanged(const QString &arg1)
{
    this->hmaxLG = arg1.toDouble();
    on_houghButton_clicked();
}



void diphw::on_dwtButton_clicked()
{
    const int NIter=1;
    Mat src[3], src_gray[3], dst_show[3];

    Fu_count = 0;
    if(this->myImg3.empty()){
        Fu_count = 2;
    }else{
        Fu_count = 3;
    }

    for(int i = 0; i<Fu_count; i++){
    cvtColor(this->myImg1, src_gray[i], CV_BGR2GRAY);
    src_gray[i].convertTo(src[i], CV_32FC1);
    imgDWT[i] = Mat(src[i].size(), src[i].type());

    //DWT
    dwt2::cvHaarWavelet(src[i], imgDWT[i], NIter);

    //show DWT result
    namedWindow(QString("cvHaarWavelet result %1").arg(i).toStdString(), cv::WINDOW_AUTOSIZE);
    imgDWT[i] = ImgProcess::imRescale(imgDWT[i], 255);
    imgDWT[i].convertTo(dst_show[i], CV_8U);
    imshow(QString("cvHaarWavelet result %1").arg(i).toStdString(), dst_show[i]);
}
}


void diphw::on_img1Button_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        //                                                    tr("Open Image"), ".",
        tr("Open Image"),"/Users/tohow/Documents/QtQt/2021FallDIP/HW6/C1HW06-2021/.",
        tr("Image Files (*.png *.jpg *.jpeg *.bmp *.tif"));
    if(fileName != NULL)
    {
        //        std::cout<<fileName.section("/",-1,-1).toStdString()<<std::endl;
        //        std::cout<<fileName.toStdString()<<std::endl;
        std::string fN=fileName.toStdString().data();
        this->myImg1 = cv::imread(fN);
        cv::namedWindow("img1",cv::WINDOW_AUTOSIZE);
        cv::imshow("img1", this->myImg1);
    }
}

void diphw::on_img2Button_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        //                                                    tr("Open Image"), ".",
        tr("Open Image"),"/Users/tohow/Documents/QtQt/2021FallDIP/HW6/C1HW06-2021/.",
        tr("Image Files (*.png *.jpg *.jpeg *.bmp *.tif"));
    if(fileName != NULL)
    {
        //        std::cout<<fileName.section("/",-1,-1).toStdString()<<std::endl;
        //        std::cout<<fileName.toStdString()<<std::endl;
        std::string fN=fileName.toStdString().data();
        this->myImg2 = cv::imread(fN);
        cv::namedWindow("img2",cv::WINDOW_AUTOSIZE);
        cv::imshow("img2", this->myImg2);
    }
}

void diphw::on_img3Button_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        //                                                    tr("Open Image"), ".",
        tr("Open Image"),"/Users/tohow/Documents/QtQt/2021FallDIP/HW6/C1HW06-2021/.",
        tr("Image Files (*.png *.jpg *.jpeg *.bmp *.tif"));
    if(fileName != NULL)
    {
        //        std::cout<<fileName.section("/",-1,-1).toStdString()<<std::endl;
        //        std::cout<<fileName.toStdString()<<std::endl;
        std::string fN=fileName.toStdString().data();
        this->myImg3 = cv::imread(fN);
        cv::namedWindow("img3",cv::WINDOW_AUTOSIZE);
        cv::imshow("img3", this->myImg3);
    }
}

void diphw::on_fusionButton_clicked()
{
    Mat LL[3], HL[3], LH[3], HH[3];

    int i=0;

    int row = imgDWT[i].rows;
    this->imgDWT[i];



}

