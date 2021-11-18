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
        tr("Open Image"),"/Users/tohow/Documents/QtQt/2021FallDIP/HW4/.",
        tr("Image Files (*.png *.jpg *.jpeg *.bmp"));
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
    int t = timer.elapsed();
    char txt[40] = "";
    snprintf(txt,40,"Execution time: %d ms",t);
    ui->timelabel->setText(txt);

    snprintf(txt,40, "centered fourier specturm  %d ms",t);
    imshow(txt,show);
}


void diphw::on_showPASButton_clicked()
{
    cv::Mat gray,show;
    gray = this->imgp.grayScaleA(this->myImg).clone();
    gray.convertTo(gray,CV_8U);
    show = this->imgp.showPAS(gray);
    imshow("Phase angle)",show);
}


void diphw::on_ifftButton_clicked()
{
    cv::Mat gray, inputImg, inversed;
    gray = this->imgp.grayScaleA(this->myImg).clone();
    inputImg = gray.clone();
    gray.convertTo(gray, CV_8U);

    cv::Mat planes[2] = { cv::Mat_<float>(inputImg.clone()), cv::Mat::zeros(inputImg.size(), CV_32F) };
    cv::Mat complexI;
    merge(planes, 2, complexI);
    dft(complexI, complexI);

    idft(complexI,complexI);
    split(complexI, planes);
    inversed = planes[0];
    inversed = this->imgp.imRescale(inversed,255).clone();
    inversed.convertTo(inversed,CV_8U);

    cv::Mat diff,outputImg;
    cv::absdiff(gray,inversed,diff);
    cv::hconcat(gray,inversed,outputImg);
    cv::hconcat(outputImg,diff,outputImg);
    imshow("Difference between dft and idft", outputImg);
}


void diphw::on_filterButton_clicked()
{
    cv::Mat H = cv::Mat(7,7,CV_32F, cv::Scalar(1));
    cout<<"H = "<<H<<endl;
    this->imgp.idealFilter(H,2,1);
    cout<<"H = "<<H<<endl;
}

