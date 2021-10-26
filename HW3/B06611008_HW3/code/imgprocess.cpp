#include "imgprocess.h"
#include <iostream>


using namespace cv;

//calculate histogram in integer from 0 to 255
Mat ImgProcess::calCalHist(Mat srcM){
    Mat m;

    int nChannels = srcM.channels();
    int nRows = srcM.rows;
    int nCols = srcM.cols * nChannels;

    m = Mat::zeros(256,1,CV_8U);

    std::cout<<"nrows = "<<nRows<<std::endl;
    std::cout<<"ncols = "<<nCols<<std::endl;
    for( int j = 0; j < nRows; j++ ){
        for( int i = 0; i < nCols; i++ ){
            m.at<uchar>(srcM.at<uchar>(i,j),0)++;
        }
    }
    return m;
}

Mat ImgProcess::cvtColorBGRRGB(Mat srcM){

    Mat m;

    int nRows = srcM.rows;
    int nCols = srcM.cols;

    m = Mat::zeros(nRows,nCols,CV_8UC3);
    for( int j = 0; j < nRows; j++ ){
        for( int i = 0; i < nCols; i++ ){

            uchar vec3b0 = srcM.at<Vec3b>(i,j)[0];
            uchar vec3b1 = srcM.at<Vec3b>(i,j)[1];
            uchar vec3b2 = srcM.at<Vec3b>(i,j)[2];

            m.at<Vec3b>(i,j)[0]=vec3b2;
            m.at<Vec3b>(i,j)[1]=vec3b1;
            m.at<Vec3b>(i,j)[2]=vec3b0;
        }
    }

    return m;
}


Mat ImgProcess::grayScaleA(Mat srcM){

//    if(srcM.type()%8 ==0 || srcM.type()%8 ==1){
//        return srcM;
//    }

    int nRows = srcM.rows;
    int nCols = srcM.cols;

    Mat m = Mat::zeros(nRows,nCols,CV_8U);

    for( int j = 0; j < nCols; j++ ){
        for( int i = 0; i < nRows; i++ ){
            double mean;
            uchar vec3b0 = srcM.at<Vec3b>(i,j)[0];
            uchar vec3b1 = srcM.at<Vec3b>(i,j)[1];
            uchar vec3b2 = srcM.at<Vec3b>(i,j)[2];
            mean = (double)vec3b0+(double)vec3b1+(double)vec3b2;
            m.at<uchar>(i,j) = (uchar)(mean/3);
        }
    }

    return m;
}

Mat ImgProcess::grayScaleB(Mat srcM){

    Mat m;

    int nRows = srcM.rows;
    int nCols = srcM.cols;

    m = Mat::zeros(nRows,nCols,CV_8U);
    for( int j = 0; j < nRows; j++ ){
        for( int i = 0; i < nCols; i++ ){
            double mean;
            uchar vec3b0 = srcM.at<Vec3b>(i,j)[0];
            uchar vec3b1 = srcM.at<Vec3b>(i,j)[1];
            uchar vec3b2 = srcM.at<Vec3b>(i,j)[2];
            mean = (double)vec3b0*0.299+(double)vec3b1*0.587+(double)vec3b2*0.114;
            m.at<uchar>(i,j) = (uchar)mean;
        }
    }

    return m;
}

Mat ImgProcess::subtractGray(Mat srcM, Mat srcM2){

    Mat m;

    int nRows = srcM.rows;
    int nCols = srcM.cols;

    m = Mat::zeros(nRows,nCols,CV_8U);

    for( int j = 0; j < nCols; j++ ){
        for( int i = 0; i < nRows; i++ ){
            uchar M1 = srcM.at<uchar>(i,j);
            uchar M2 = srcM2.at<uchar>(i,j);
            int minus = M1-M2;
            if (minus < 0 ){
                minus = 0;
            }
            m.at<uchar>(i,j) = (uchar)minus;
        }
    }
    return m;
}

Mat ImgProcess::binByTH(Mat srcM, int th){
    Mat m;

    int nRows = srcM.rows;
    int nCols = srcM.cols;

    m = Mat::zeros(nRows,nCols,CV_8U);

    for( int j = 0; j < nRows; j++ ){
        for( int i = 0; i < nCols; i++ ){
            uchar uc0 = srcM.at<uchar>(i,j);
            int bin;
            if (uc0 >= th){
                bin = 255;
            }else{
                bin = 0;
            }
            m.at<uchar>(i,j) = (uchar)bin;
        }
    }
    return m;
}

//using nearest neightbor interpolation
//https://blog.csdn.net/fengbingchun/article/details/17335477
Mat ImgProcess::modSpatial(Mat srcM, int rat){
    Mat m;

    int nRows = srcM.rows;
    int nCols = srcM.cols;
    int mRows = rat*nRows;
    int mCols = rat*nCols;

    m = Mat::zeros(mRows,mCols,CV_8U);

    for (int i = 0; i< mCols; ++i){
        int sx = cvFloor(i * rat);
        sx = std::min(sx, nCols-1);

        for (int j = 0; j < mRows; ++j){
            int sy = cvFloor(j * rat);
            sy = std::min(sy, nRows-1);
            m.at<uchar>(j,i)=srcM.at<uchar>(sy,sx);
        }
    }
    return m;
}


//https://stackoverflow.com/questions/40161626/opencv-grayscale-color-reduction
Mat ImgProcess::modGrayLevel(Mat srcM, int le){
    Mat m;

    int nRows = srcM.rows;
    int nCols = srcM.cols;

    int divisor = 256 / le;
    int maxQvalue = 255 / divisor;

    m = Mat::zeros(nRows,nCols,CV_8U);

    for (int i = 0; i< nCols; ++i){
        for (int j = 0; j < nRows; ++j){
            uchar uc0 = srcM.at<uchar>(j,i);
            int newValue = ((int)uc0)/divisor*255/maxQvalue;
            m.at<uchar>(j,i) = (uchar)newValue;
        }

    }
    return m;
}

Mat ImgProcess::modBright(Mat srcM, int b){
    Mat m;

    int nRows = srcM.rows;
    int nCols = srcM.cols;

    m = Mat::zeros(nRows,nCols,CV_8U);

    for (int i = 0; i< nCols; ++i){
        for (int j = 0; j < nRows; ++j){
            uchar uc0 = srcM.at<uchar>(j,i);
            int newValue = uc0 + b;
            if (newValue >= 255){
                newValue = 255;
            }else if (newValue <= 0){
                newValue = 0;
            }
            m.at<uchar>(j,i) = (uchar)newValue;
        }
    }
    return m;
}


Mat ImgProcess::modContrast(Mat srcM, int a){
    Mat m;

    int nRows = srcM.rows;
    int nCols = srcM.cols;

    m = Mat::zeros(nRows,nCols,CV_8U);

    for (int i = 0; i< nCols; ++i){
        for (int j = 0; j < nRows; ++j){
            uchar uc0 = srcM.at<uchar>(j,i);
            int newValue = a*uc0;
            if (newValue >= 255){
                newValue = 255;
            }else if (newValue <= 0){
                newValue = 0;
            }
            m.at<uchar>(j,i) = (uchar)newValue;
        }
    }
    return m;
}


Mat ImgProcess::histEQ(Mat srcM){
    Mat m;
    Mat his;
    Mat newTable;
    int nRows = srcM.rows;
    int nCols = srcM.cols;
    his = this->calCalHist(srcM).clone();
//    std::cout<<"srcM = "<<srcM<<std::endl;
//    std::cout<<"his = "<<his<<std::endl;
    m = Mat::zeros(nRows,nCols,CV_8U);
    newTable = Mat::zeros(256,1,CV_8U);
    double newValue = 0;
//    std::cout<<"ncols = "<<nCols<<std::endl;
    for (int i = 0; i< 256; ++i){
        uchar hisi = his.at<uchar>(i,0);
        double hisid = (double)hisi;
//        std::cout<<"hisi = "<<hisid<<"    ";
        newValue += hisid*255/nRows/nCols;
//        std::cout<<"newValue = "<<newValue<<std::endl;
        newTable.at<uchar>(i,0) = (uchar) newValue;

    }
//    std::cout<<"newTable = "<<newTable<<std::endl;
    return m;
}


//gen Kernel with different size
//type = 1 -> box
//     = 2 -> Gaussian sigma=1
//     = 3 -> Gaussian sigma=2
//size[s] = {0,3,5,7,9,11,21,25,43,85}
Mat ImgProcess::genKernel(int type, int s)
{
    Mat m;
    float size[] = {0,3,5,7,9,11,21,25,43,85};
    int MN = size[s];

    switch(type){
        case 1:
            m=Mat::ones(MN,MN,CV_32F);
            m=m/MN/MN;
        break;
        case 2:
            m = gaussian(MN,1,1).clone();
            break;
        case 3:
            m = gaussian(MN,2,1).clone();
            break;

        default:
            m=Mat::ones(MN,MN,CV_32F);
            break;

    }
    return m;
}

//generate gaussian
Mat ImgProcess::gaussian(int size, float sigma, float K)
{
    Mat dst = Mat::zeros(size,size,CV_32F);
    int cenr = size/2;
    int cenc = size/2;

    for(int i=0; i<=cenr; i++){
        for(int j=0; j<=cenc; j++){
            float g = K*exp(-(pow(i,2)+pow(j,2))/(2*pow(sigma,2)));
            dst.at<float>(cenr+i,cenc+j) = g;
            dst.at<float>(cenr-i,cenc-j) = g;
            dst.at<float>(cenr+i,cenc-j) = g;
            dst.at<float>(cenr-i,cenc+j) = g;
        }
    }

    dst = dst/sum(dst);

    return dst;
}


Mat ImgProcess::conv2DD(Mat ker, Mat src){
    int kerRows = ker.rows;
    int kerCols = ker.cols;
    int padS = (kerRows-1)/2;
    int cenr = kerRows/2;
    int cenc = kerCols/2;

    int srcRows = src.rows;
    int srcCols = src.cols;

    int dstRows = kerRows + srcRows - 1;
    int dstCols = kerCols + srcCols - 1;

    Mat dst = Mat::zeros(dstRows,dstCols, CV_32F);
    Mat padMat = addZeroPad(src, padS).clone();
    padMat.convertTo(padMat,CV_32F);
    for(int i=0; i<srcRows; i++){
        for(int j=0; j<srcCols; j++){
            float rr=0;
             for(int c=0; c<kerRows*kerCols; c++){
                 float ki = ker.at<float>(cenr-1+int(c/kerRows),cenc-1+c%kerRows);
                 float srci = padMat.at<float>(i+padS-1+int(c/kerRows), j+padS-1+c%kerRows);
                 rr = rr+ki*srci;
             }
             dst.at<float>(i+padS, j+padS)=rr;
        }
    }
    dst.convertTo(dst,CV_8U);
    imshow("conv2DD result",dst);
    std::cout<<"conv2DD result  = "<<dst<<std::endl;
    return dst;
}


//add padS circles of 0 as padding
//output type is CV_8U
Mat  ImgProcess::addZeroPad(Mat src, int padS)
{

    src.convertTo(src,CV_32F);
    int srcRows = src.rows;
    int srcCols = src.cols;

    int dstRows = srcRows + padS*2;
    int dstCols = srcCols + padS*2;

    Mat dst = Mat::zeros(dstRows,dstCols, CV_32F);

    for(int i=0; i<srcRows; i++){
        for(int j=0; j<srcCols; j++){
             float srci = src.at<float>(i, j);
             dst.at<float>(i+padS, j+padS) = srci;
        }
    }
    dst.convertTo(dst,CV_8U);
    imshow("add pad",dst);
    return dst;
}

