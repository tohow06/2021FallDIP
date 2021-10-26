#include "openimagefile.h"
#include "ui_openimagefile.h"
#include "imgprocess.h"

using std::map;


std::vector<int> matControl_1(cv::Mat);
std::vector<int> matControl_2(cv::Mat);

//initial look up table and cv::Mats
OpenImageFile::OpenImageFile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OpenImageFile)
{
    ui->setupUi(this);
    this->table64= {{'0',0},{'1',1},{'2',2},{'3',3},{'4',4},{'5',5},{'6',6},{'7',7},{'8',8},{'9',9},
                            {'A',10},{'B',11},{'C',12},{'D',13},{'E',14},{'F',15},{'G',16},{'H',17},{'I',18},{'J',19},{'K',20},
                            {'L',21},{'M',22},{'N',23},{'O',24},{'P',25},{'Q',26},{'R',27},{'S',28},{'T',29},{'U',30},{'V',31}};

    this->mymat64 = Mat::zeros(64,64,CV_8U);
    this->mymat64_2 = Mat::zeros(64,64,CV_8U);
    this->mymat64_3 = Mat::zeros(64,64,CV_8U);
}

OpenImageFile::~OpenImageFile()
{
    delete ui;
}

//button to read and show first img and histogram
void OpenImageFile::on_pushButton_clicked()
{
    cv::Mat image;


    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Image"), ".",
        tr("Image Files (*.png *.jpg *.jpeg *.bmp"));
//    QString fileName = QString("/Users/tohow/Documents/QtQt/CVQT02/lena_color.jpg");
    if(fileName != NULL)
    {
        std::cout<<fileName.toStdString()<<std::endl;
        image = cv::imread(fileName.toStdString().data());
        this->mymat64 = this->imgp.cvtColorBGRRGB(image).clone();


        QImage img = QImage((const unsigned char*) (this->mymat64.data),
                            this->mymat64.cols, this->mymat64.rows, QImage::Format_RGB888);

        ui->label->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
        // Display on label
        ui->label->setPixmap(QPixmap::fromImage(img).scaled(200,200,Qt::KeepAspectRatio));
        // Resize the label to fit the image
        ui->label->resize(ui->label->pixmap()->size());

    }

}

//@UNFINISH menu
void OpenImageFile::on_action_3_triggered()
{
    OpenImageFile::on_pushButton_clicked();
}

//up menu close
void OpenImageFile::on_actionExit_2_triggered()
{
    close();
}

//button to read and show second img and histogram
void OpenImageFile::on_grayABBtn_clicked()
{
    this->mymat64_2 = this->imgp.grayScaleA(this->mymat64);
    this->mymat64_3 = this->imgp.grayScaleB(this->mymat64);

    QImage img_2 = QImage((const unsigned char*) (this->mymat64_2.data),
                        this->mymat64_2.cols, this->mymat64_2.rows, QImage::Format_Grayscale8);
    QImage img_3 = QImage((const unsigned char*) (this->mymat64_3.data),
                        this->mymat64_3.cols, this->mymat64_3.rows, QImage::Format_Grayscale8);

    ui->label->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
    // Display on label
    ui->label->setPixmap(QPixmap::fromImage(img_2).scaled(200,200,Qt::KeepAspectRatio));
    // Resize the label to fit the image
    ui->label->resize(ui->label->pixmap()->size());

    ui->imgLabel2->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
    // Display on label
    ui->imgLabel2->setPixmap(QPixmap::fromImage(img_3).scaled(200,200,Qt::KeepAspectRatio));
    // Resize the label to fit the image
    ui->imgLabel2->resize(ui->imgLabel2->pixmap()->size());

}

void OpenImageFile::on_exitBtn_clicked()
{
    close();
}

//read line, look up the table and reformat 0~V to 0~32
//and store in Mat
Mat OpenImageFile::proc64File(Mat srcM,const char *ll){
    Mat m = srcM.clone();
    int linelen = strlen(ll);
    if (linelen > 64 )
        linelen--;

    static int j=0;

    for (int i=0;i<linelen;i++ ) {
        m.ptr<uchar>(j)[i]=table64[ll[i]];
    }
    j++;

    if(j == 64)
        j=0;

    return m;
}

//call ImgProcess calCalHist to get hist
//show hist with QbarSet QChart QChartView
void OpenImageFile::drawHisto(Mat m, QFrame* f){

    double minR, maxR;
    minMaxLoc(m, &minR,&maxR);
//    std::cout<<m<<std::endl;
    Mat hist;
//    ImgProcess imgp;
    hist = this->imgp.calCalHist(m).clone();
    double minVal, maxVal;
    cv::minMaxLoc(hist, &minVal, &maxVal);

    std::vector<int> hiv = matControl_1(hist);
    std::vector<int>::iterator it_i;

    QBarSet *set0 = new QBarSet("Jane");

    for (it_i=hiv.begin();it_i!=hiv.end();++it_i) {
        *set0<<*it_i;
    }
    qDebug("set0 sum = %f",set0->sum());

    QPen qp;
    qp.setWidth(5);
    set0->setPen(qp);
    QBarSeries *series = new QBarSeries();
    series->append(set0);

    QChart *chart = new QChart();
    chart->removeAllSeries();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->setBackgroundRoundness(0);

//    chart->createDefaultAxes();
    QValueAxis *axisX = new QValueAxis();
    axisX->setRange(0,256);
    axisX->setLabelFormat("%d");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,maxVal);
    axisY->setLabelFormat("%d");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(false);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QHBoxLayout *layout2 = new QHBoxLayout;
    layout2->addWidget(chartView);
    layout2->setContentsMargins(0,0,0,0);
    f->setContentsMargins(0,0,0,0);
    delete f->layout();
    f->setLayout(layout2);

}

//to store Mat<CV_8U> in vector
std::vector<int> matControl_1( cv::Mat inMat )
{
    std::vector<int> dst;
    Mat srcMat = inMat.clone();
    int nChannels = srcMat.channels();
    int nRows = srcMat.rows;
    int nCols = srcMat.cols * nChannels;

    for( int j = 0; j < nRows; j++ ){
        for( int i = 0; i < nCols; i++ ){
            dst.push_back(int(srcMat.at<uchar>(i,j)));
        }
    }
    return dst;
}

//to store Mat<CV_32f> in vector
std::vector<int> matControl_2( cv::Mat inMat )
{
    std::vector<int> dst;
    Mat srcMat = inMat.clone();
    int nChannels = srcMat.channels();
    int nRows = srcMat.rows;
    int nCols = srcMat.cols * nChannels;

    for( int j = 0; j < nRows; j++ ){
        for( int i = 0; i < nCols; i++ ){
            dst.push_back(int(srcMat.at<float>(i,j)));
        }
    }
    return dst;
}

//add img1 with input text and show it
void OpenImageFile::on_thresButton_clicked()
{
    Mat m;
    m = this->imgp.binByTH(this->mymat64_2,ui->lineEdit->text().toInt()).clone();


    QImage img_re = QImage((const unsigned char*) (m.data),
                        m.cols, m.rows, QImage::Format_Grayscale8);

    ui->imgLabel3->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
    // Display on label
    ui->imgLabel3->setPixmap(QPixmap::fromImage(img_re).scaled(200,200,Qt::KeepAspectRatio));
    // Resize the label to fit the image
    ui->imgLabel3->resize(ui->imgLabel3->pixmap()->size());
}


//minus img1 with input text and show it
void OpenImageFile::on_minuButton_clicked()
{
    Mat m;
    m = this->imgp.subtractGray(this->mymat64_2,this->mymat64_3);

    QImage img_re = QImage((const unsigned char*) (m.data),
                        m.cols, m.rows, QImage::Format_Grayscale8);

    ui->imgLabel3->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
    // Display on label
    ui->imgLabel3->setPixmap(QPixmap::fromImage(img_re).scaled(200,200,Qt::KeepAspectRatio));
    // Resize the label to fit the image
    ui->imgLabel3->resize(ui->imgLabel3->pixmap()->size());

}

//multiply img1 with input text and show it
void OpenImageFile::on_spatButton_clicked()
{
    Mat m;
    m = this->imgp.modSpatial(this->mymat64_2,ui->lineEdit_ratio->text().toInt());

    QImage img_re = QImage((const unsigned char*) (m.data),
                        m.cols, m.rows, QImage::Format_Grayscale8);

    ui->imgLabel3->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
    // Display on label
    ui->imgLabel3->setPixmap(QPixmap::fromImage(img_re).scaled(200,200,Qt::KeepAspectRatio));
    // Resize the label to fit the image
    ui->imgLabel3->resize(ui->imgLabel3->pixmap()->size());
}

//get mean of img1 and img2 and show it
void OpenImageFile::on_histoButton_clicked()
{
   this->drawHisto(this->mymat64_2, ui->frame);
   this->drawHisto(this->mymat64_3, ui->frame2);
}

//perform f(x,y)-f(x-1,y) on img1 and show it
void OpenImageFile::on_graLeButton_clicked()
{
    Mat m;
    m = this->imgp.modGrayLevel(this->mymat64_2,ui->lineEdit_level->text().toInt());

    QImage img_re = QImage((const unsigned char*) (m.data),
                        m.cols, m.rows, QImage::Format_Grayscale8);

    ui->imgLabel3->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
    // Display on label
    ui->imgLabel3->setPixmap(QPixmap::fromImage(img_re).scaled(200,200,Qt::KeepAspectRatio));
    // Resize the label to fit the image
    ui->imgLabel3->resize(ui->imgLabel3->pixmap()->size());
}


//draw Mat on QLabel
//show in 8 bit grayscale
//draw histogram on QFrame
void OpenImageFile::drawAll(Mat m, QLabel *imgL ,QFrame *hisFr){
    this->drawHisto(m, hisFr);
    Mat norm = m.clone();
//    normalize(norm,norm,0,255,NORM_MINMAX);
    QImage img = QImage(norm.data,
                        norm.cols, norm.rows, QImage::Format_Grayscale8);
    imgL->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
    // Display on label
    imgL->setPixmap(QPixmap::fromImage(img).scaled(200,200,Qt::KeepAspectRatio));
    // Resize the label to fit the image
    imgL->resize(imgL->pixmap()->size());
}

void OpenImageFile::on_horizontalSlider_valueChanged(int value)
{
    Mat m;
    m = this->imgp.modBright(this->mymat64_2,value);

    QImage img_re = QImage((const unsigned char*) (m.data),
                        m.cols, m.rows, QImage::Format_Grayscale8);

    ui->imgLabel3->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
    // Display on label
    ui->imgLabel3->setPixmap(QPixmap::fromImage(img_re).scaled(200,200,Qt::KeepAspectRatio));
    // Resize the label to fit the image
    ui->imgLabel3->resize(ui->imgLabel3->pixmap()->size());
}


void OpenImageFile::on_horizontalSlider_2_valueChanged(int value)
{
    Mat m;
    m = this->imgp.modContrast(this->mymat64_2,value);

    QImage img_re = QImage((const unsigned char*) (m.data),
                        m.cols, m.rows, QImage::Format_Grayscale8);

    ui->imgLabel3->setStyleSheet("QLabel { background-color: rgb(215, 215, 215); border-color: rgb(8, 8, 8); }");
    // Display on label
    ui->imgLabel3->setPixmap(QPixmap::fromImage(img_re).scaled(200,200,Qt::KeepAspectRatio));
    // Resize the label to fit the image
    ui->imgLabel3->resize(ui->imgLabel3->pixmap()->size());
}

