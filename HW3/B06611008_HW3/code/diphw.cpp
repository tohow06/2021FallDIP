#include "diphw.h"
#include "ui_diphw.h"
#include "imgprocess.h"

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
//        tr("Open Image"), "./data/",
        tr("Open Image"),"/Users/tohow/Documents/QtQt/2021FallDIP/HW3/B06611008_HW3/code/data/.",
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

    if (m != 0 && m<= 6 && size != 0 ){
        this->mykernel = this->imgp.genKernel(m,size).clone();
        int cenr = this->mykernel.rows/2;
        int cenc = this->mykernel.cols/2;

        for(int i=0; i<9; i++)
            labels.at(i)->setText(QString::number(this->mykernel.at<float>(cenr-1+int(i/3),cenc-1+i%3),'f',2));

    }else if (m != 0 && m > 6 && size != 0) {
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
    if(m < 7){
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

    if (ui->matrixBox->currentIndex() == 4){
        std::cout<<"re.at<uchar>(0,0)"<<re.at<float>(0,1)<<std::endl;
        std::cout<<"re.at<uchar>(0,0)"<<re.at<float>(0,2)<<std::endl;
        std::cout<<"re.at<uchar>(0,0)"<<re.at<float>(0,3)<<std::endl;
        std::cout<<"re.at<uchar>(0,0)"<<re.at<float>(0,4)<<std::endl;
        re = this->imgp.imRescale(re,255).clone();
        std::cout<<"re.at<uchar>(0,0)"<<re.at<float>(0,1)<<std::endl;
        std::cout<<"re.at<uchar>(0,0)"<<re.at<float>(0,2)<<std::endl;
        std::cout<<"re.at<uchar>(0,0)"<<re.at<float>(0,3)<<std::endl;
        std::cout<<"re.at<uchar>(0,0)"<<re.at<float>(0,4)<<std::endl;
    }
    re.convertTo(re,CV_8U);
    cv::imshow("Result", re);
}



void diphw::on_matrixBox_currentIndexChanged(int index)
{
    if (index == 4){
        for(int i=1;i<6;i++)
            ui->sizeBox->setItemData(i, 0, Qt::UserRole - 1);
    }else{
        for(int i=1;i<6;i++)
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
    Mat m = this->imgp.zeroCross(this->myImg2, max*0).clone();
    cv::imshow("zero-crossing result", m);
}

