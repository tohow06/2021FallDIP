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
        tr("Open Image"), "./data/",
//        tr("Open Image"),"/Users/tohow/Documents/QtQt/B06611008_HW3/code2/data/.",
        tr("Image Files (*.png *.jpg *.jpeg *.bmp"));
//    QString fileName = QString("/Users/tohow/Documents/QtQt/CVQT02/lena_color.jpg");
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
    if (m != 0 && size != 0 ){
        this->mykernel = this->imgp.genKernel(m,size).clone();

        QList<QLabel *> labels;
        labels << ui->m11<< ui->m12<< ui->m13
               << ui->m21<< ui->m22<< ui->m23
               << ui->m31<< ui->m32<< ui->m33;

        int cenr = this->mykernel.rows/2;
        int cenc = this->mykernel.cols/2;

        for(int i=0; i<9; i++)
            labels.at(i)->setText(QString::number(this->mykernel.at<float>(cenr-1+int(i/3),cenc-1+i%3),'f',2));

    }
}


//do the convolution and show the result with imshow
void diphw::on_convButton_clicked()
{
    cv::Mat m;
    m = this->imgp.grayScaleA(this->myImg).clone();
    this->imgp.conv2DD(this->mykernel,m);

}



void diphw::on_matrixBox_currentIndexChanged(int index)
{
    upDateMatrix();
}

void diphw::on_sizeBox_currentIndexChanged(int index)
{
    upDateMatrix();
}

void diphw::on_exitButton_clicked()
{
    close();
}

