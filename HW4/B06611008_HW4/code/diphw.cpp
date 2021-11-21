#include "diphw.h"
#include "ui_diphw.h"
#include "imgprocess.h"

using namespace std;

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
//        tr("Open Image"), ".",
        tr("Open Image"),"/Users/tohow/Documents/QtQt/2021FallDIP/HW4/C1HW04-2021/.",
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

//upDate select kernel and show in label Matrix
void diphw::upDateMatrix()
{
    cv::Mat imim;
    int m = ui->matrixBox->currentIndex();
    int size = ui->sizeBox->currentIndex();

    QList<QLabel *> labels;
    labels << ui->m11<< ui->m12<< ui->m13
           << ui->m21<< ui->m22<< ui->m23
           << ui->m31<< ui->m32<< ui->m33;

    if (m != 0 && m<= 5 && size != 0 ){
        this->mykernel = this->imgp.genKernel(m,size).clone();
        int cenr = this->mykernel.rows/2;
        int cenc = this->mykernel.cols/2;

        for(int i=0; i<9; i++)
            labels.at(i)->setText(QString::number(this->mykernel.at<float>(cenr-1+int(i/3),cenc-1+i%3),'f',2));

    }else if (m != 0 && m > 5 && size != 0) {
        this->mykernel = this->imgp.genKernel(m,size).clone();
        for(int i=0; i<9; i++)
            labels.at(i)->setText("x");
    }
}


//do the convolution and show the result with imshow
void diphw::on_convButton_clicked()
{
    cv::Mat gray;
    cv::Mat re;
    QElapsedTimer timer;
    timer.start();
    ui->timelabel->setText("Calculating...");
    gray = this->imgp.grayScaleA(this->myImg).clone();
    int m = ui->matrixBox->currentIndex();
    if(m < 6){
        if (m == 4){
            gray = this->imgp.imRescale(gray, 1).clone();
        }
        re = this->imgp.conv2DD(this->mykernel, gray);
        this->myImg2 = re.clone();
    }else{
        re = this->imgp.ordfilt(this->mykernel, gray);
        this->myImg2 = re.clone();
    }
    int t = timer.elapsed();
    char txt[40] = "";
    snprintf(txt,40,"Execution time: %d ms",t);
    ui->timelabel->setText(txt);

    if (m == 4){
        re = this->imgp.imRescale(re,255).clone();
    }
    re.convertTo(re,CV_8U);
    cv::imshow("Result", re);
}



void diphw::on_matrixBox_currentIndexChanged(int index)
{
    if (index == 4){
        for(int i=1;i<10;i++)
            ui->sizeBox->setItemData(i, 33, Qt::UserRole - 1);
        for(int i=1;i<6;i++)
            ui->sizeBox->setItemData(i, 0, Qt::UserRole - 1);
    }else if (index == 5){
        for(int i=1;i<10;i++)
            ui->sizeBox->setItemData(i, 33, Qt::UserRole - 1);
        for(int i=2;i<10;i++)
            ui->sizeBox->setItemData(i, 0, Qt::UserRole - 1);
    }else{
        for(int i=1;i<10;i++)
            ui->sizeBox->setItemData(i, 33, Qt::UserRole - 1);
    }
    upDateMatrix();
}

void diphw::on_sizeBox_currentIndexChanged(int index)
{
    upDateMatrix();
}

void diphw::on_closeImgButton_clicked()
{
    cv::destroyAllWindows();
}

void diphw::on_exitButton_clicked()
{
    close();
}

void diphw::on_zcButton_clicked()
{
    double max, min;
    cv::minMaxLoc(this->myImg2,&min,&max);
    cv::Mat m = this->imgp.zeroCross(this->myImg2, max*zcThres/100).clone();
    cv::imshow("zero-crossing result", m);
}

void diphw::on_thresSlider_valueChanged(int value)
{
    this->zcThres = value;
}


void diphw::on_showFSButton_clicked()
{
    cv::Mat gray,show;
    QElapsedTimer timer;

    gray = this->imgp.grayScaleA(this->myImg).clone();
    gray.convertTo(gray,CV_8U);

    timer.start();
    show = this->imgp.showCenFS(gray);
    this->myImg2 = show.clone();
    int t = timer.elapsed();
    char txt[40] = "";
    snprintf(txt,40,"Execution time: %d ms",t);
    ui->infolabel->setText(txt);

    snprintf(txt,40, "centered fourier specturm  %d ms",t);
    imshow(txt,show);
}


void diphw::on_showPASButton_clicked()
{
    cv::Mat gray,show;
    gray = this->imgp.grayScaleA(this->myImg).clone();
    gray.convertTo(gray,CV_8U);
    show = this->imgp.showPAS(gray);

    imshow("Phase angle",show);
}


void diphw::on_ifftButton_clicked()
{


    cv::Mat gray, inputImg, inversed;
    gray = this->imgp.grayScaleA(this->myImg).clone();
    gray.convertTo(gray, CV_8U);

    inputImg = gray.clone();

    cv::Mat planes[2] = { cv::Mat_<float>(inputImg.clone()), cv::Mat::zeros(inputImg.size(), CV_32F) };
    cv::Mat complexI;
    merge(planes, 2, complexI);
    dft(complexI, complexI);
//    this->imgp.fftshift(complexI,complexI);
    idft(complexI,complexI);
    split(complexI, planes);
    inversed = planes[0];
    inversed = this->imgp.imRescale(inversed,255).clone();
    inversed.convertTo(inversed,CV_8U);

    cv::Mat diff,outputImg;
    cv::absdiff(gray,inversed,diff);
    cv::hconcat(gray,inversed,outputImg);
    cv::hconcat(outputImg,diff,outputImg);
    cv::namedWindow("Difference between dft and idft",cv::WINDOW_NORMAL | cv::WINDOW_KEEPRATIO);
    cv::imshow("Difference between dft and idft", outputImg);
}


void diphw::on_resetButton_clicked()
{
    resetUiInput();
}


void diphw::on_idealButton_clicked()
{
    cv::Mat gray, imgout;
    gray = this->imgp.grayScaleA(this->myImg).clone();
    gray.convertTo(gray, CV_8U);
    cv::Mat H = cv::Mat(gray.size(),CV_32F, cv::Scalar(1));

    double D0;
    D0 = ui->idealD0->value();
    int s = 0;
    if (D0 < 0){
        s = 1;
        D0 = -D0;
    }
    this->imgp.idealFilter(H,D0,s);
    this->imgp.fftshift(H,H);
    this->imgp.filter2DFreq(gray, imgout, H);
    imgout = this->imgp.imRescale(imgout,255);
    imgout.convertTo(imgout,CV_8U);

    char winTitle[40] = "";
    snprintf(winTitle,40,"ideal filter result with D0 = %.1f",D0);

    cv::imshow(winTitle,imgout);

}


void diphw::on_butterButton_clicked()
{
    cv::Mat gray, imgout;
    gray = this->imgp.grayScaleA(this->myImg).clone();
    gray.convertTo(gray, CV_8U);

    double D0;
    D0 = ui->butterD0->value();
    int n;
    n = ui->butternBox->value();
    int s = 0;
    if (D0 < 0){
        s = 1;
        D0 = -D0;
    }

    cv::Mat H = cv::Mat(gray.size(),CV_32F, cv::Scalar(1));
    this->imgp.butterFilter(H,D0,n,s);
    this->imgp.fftshift(H,H);
    this->imgp.filter2DFreq(gray, imgout, H);
    imgout = this->imgp.imRescale(imgout,255);
    imgout.convertTo(imgout,CV_8U);

    char winTitle[50] = "";
    snprintf(winTitle,sizeof(winTitle),"Butterworth filter result with D0 = %.f n = %d",D0, n);
    cv::imshow(winTitle,imgout);
}


void diphw::on_GaussButton_clicked()
{
    cv::Mat gray, imgout;
    gray = this->imgp.grayScaleA(this->myImg).clone();
    gray.convertTo(gray, CV_8U);

    double D0;
    D0 = ui->GaussD0->value()/10;
    int s = 0;
    if (D0 < 0){
        s = 1;
        D0 = -D0;
    }

    cv::Mat H = cv::Mat(gray.size(),CV_32F, cv::Scalar(1));
    this->imgp.gaussFilter(H,D0,s);
    this->imgp.fftshift(H,H);
    this->imgp.filter2DFreq(gray, imgout, H);
    imgout = this->imgp.imRescale(imgout,255);
    imgout.convertTo(imgout,CV_8U);

    char winTitle[50] = "";
    snprintf(winTitle,sizeof(winTitle),"Gaussion filter result with D0 = %.1f",D0);
    cv::imshow(winTitle,imgout);
}

void diphw::resetUiInput(){
    ui->idealD0->setValue(0);
    ui->butterD0->setValue(0);
    ui->butternBox->setValue(0);
    ui->GaussD0->setValue(0);
}

void diphw::on_homoButton_clicked()
{
    cv::Mat gray, imgout;
    gray = this->imgp.grayScaleA(this->myImg).clone();
    gray.convertTo(gray, CV_8U);

    double D0, rH, rL, c;
    D0 = ui->homoD0->value();
    rH = (double)ui->homorH->value()/10;
    rL = (double)ui->homorL->value()/100;
    c = ui->homoC->value();

    cv::Mat H = cv::Mat(gray.size(),CV_32F, cv::Scalar(1));
    this->imgp.homoFilter(H,D0,rH,rL,c);
    this->imgp.fftshift(H,H);
    this->imgp.homoFilter2DFreq(gray, imgout, H);
    imgout = this->imgp.imRescale(imgout,255);
    imgout.convertTo(imgout,CV_8U);

    char winTitle[80] = "";
    snprintf(winTitle,sizeof(winTitle),"homomorphic filter result with D0=%.f rH=%.1f rL=%.2f c=%.f",D0,rH,rL,c);
    cv::imshow(winTitle,imgout);

}

void diphw::on_motionButton_clicked()
{
    cv::Mat gray, imgout;
    gray = this->imgp.grayScaleA(this->myImg).clone();
    gray.convertTo(gray, CV_8U);

    cv::Mat H = cv::Mat(gray.size(),CV_32FC2, cv::Scalar(1,1));
    this->imgp.motionFilter(H,0.1,0.1,1);
    this->mykernel = H.clone();

    this->imgp.fftshift(H,H);
    this->imgp.filter2DFreq(gray, imgout, H);
    imgout = this->imgp.imRescale(imgout,255);
    imgout.convertTo(imgout,CV_8U);
    this->myImg3 = imgout.clone();

    char winTitle[80] = "";
    snprintf(winTitle,sizeof(winTitle),"motion blurred result");
    cv::imshow(winTitle,imgout);
}


void diphw::on_invFilButton_clicked()
{
    cv::Mat H, imgout;
    H = this->mykernel.clone();
    H = this->imgp.invComplex(H);

    this->imgp.filter2DFreq(this->myImg3, imgout, H);
    imgout = this->imgp.imRescale(imgout,255);
    imgout.convertTo(imgout,CV_8U);
    this->myImg3 = imgout.clone();

    char winTitle[80] = "";
    snprintf(winTitle,sizeof(winTitle),"inverse filter result");
    cv::imshow(winTitle,imgout);

}


void diphw::on_wieFilButton_clicked()
{
    cv::Mat H, imgout;
    H = this->mykernel.clone();

    this->imgp.WienerFilter2DFreq(this->myImg3, imgout, H, 0);
    imgout = this->imgp.imRescale(imgout,255);
    imgout.convertTo(imgout,CV_8U);
    this->myImg3 = imgout.clone();

    char winTitle[80] = "";
    snprintf(winTitle,sizeof(winTitle),"inverse filter result");
    cv::imshow(winTitle,imgout);
}

