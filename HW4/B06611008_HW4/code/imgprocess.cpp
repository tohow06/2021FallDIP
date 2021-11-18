#include "imgprocess.h"
#include <iostream>


using namespace cv;
using namespace std;
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

    Mat m = Mat::zeros(nRows,nCols,CV_32F);

    for( int j = 0; j < nCols; j++ ){
        for( int i = 0; i < nRows; i++ ){
            double mean;
            uchar vec3b0 = srcM.at<Vec3b>(i,j)[0];
            uchar vec3b1 = srcM.at<Vec3b>(i,j)[1];
            uchar vec3b2 = srcM.at<Vec3b>(i,j)[2];
            mean = (double)vec3b0+(double)vec3b1+(double)vec3b2;
            m.at<float>(i,j) = (float)(mean/3);
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
//     = 4 -> LoG sigma=4
//     = 5 -> Sobel
//     = 6 -> max
//     = 7 -> median
//     = 8 -> min
//size[s] = {0,3,5,7,9,11,21,25,43,85}
Mat ImgProcess::genKernel(int type, int s)
{
    Mat m;
    int size[] = {0,3,5,7,9,11,21,25,43,85};
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
        case 4:
        {
            Mat g = gaussian(MN,4,1).clone();
            Mat l = (Mat_<float>(3,3) << 1,1,1,1,-8,1,1,1,1);
            m = conv2DD(g,l).clone();
            break;
        }
        case 5:
            m = (Mat_<float>(3,3) << -1,-2,-1,0,0,0,1,2,1);
            break;
        case 6:
            m = Mat::ones(MN,MN,CV_32F)*7;
            break;
        case 7:
            m = Mat::ones(MN,MN,CV_32F)*8;
            break;
        case 8:
            m = Mat::ones(MN,MN,CV_32F)*9;
            break;

        default:
            m=Mat::zeros(MN,MN,CV_32F);
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

    rotate(ker,ker,1);
    int kerRows = ker.rows;
    int kerCols = ker.cols;
    int padS = kerRows-1;

    int srcRows = src.rows;
    int srcCols = src.cols;

    int dstRows = kerRows + srcRows - 1;
    int dstCols = kerCols + srcCols - 1;
    Mat dst = Mat::zeros(dstRows,dstCols, CV_32F);

    Mat padMat = addZeroPad(src, padS).clone();
    padMat.convertTo(padMat,CV_32F);
    for(int i=0; i<dstRows; i++){
        for(int j=0; j<dstCols; j++){

            float rr=0;
            for(int c=0; c<kerRows*kerCols; c++){
                float ki = ker.at<float>(int(c/kerRows),c%kerRows);
                float srci = padMat.at<float>(i+int(c/kerRows), j+c%kerRows);
                rr = rr+ki*srci;
            }
            dst.at<float>(i, j)=rr;

        }
    }
    return dst;
}

Mat ImgProcess::ordfilt(Mat ker, Mat src){

    int kerRows = ker.rows;
    int kerCols = ker.cols;
    int padS = (kerRows-1)/2;
    int ord = int(ker.at<float>(0,0));

    int srcRows = src.rows;
    int srcCols = src.cols;

    int dstRows = kerRows + srcRows - 1;
    int dstCols = kerCols + srcCols - 1;

    Mat dst = Mat::zeros(dstRows,dstCols, CV_32F);
    Mat padMat = addZeroPad(src, padS).clone();
    padMat.convertTo(padMat,CV_32F);

    for(int i=0; i<srcRows; i++){
        for(int j=0; j<srcCols; j++){
            Mat stat = Mat::zeros(kerRows*kerCols,1,CV_32F);
            for(int c=0; c<kerRows*kerCols; c++){
                float srci = padMat.at<float>(i+padS*2-int(c/kerRows), j+padS*2-c%kerRows);
                stat.at<float>(c,0) = srci;
            }
            cv::sort(stat,stat,1+0);

            switch (ord) {
            case 7:
                dst.at<float>(i+padS, j+padS)=stat.at<float>(kerRows*kerCols-1,0);
                break;
            case 8:
            {
                int med = (kerRows*kerCols-1)/2;
                dst.at<float>(i+padS, j+padS)=stat.at<float>(med,0);
            }
                break;
            case 9:
                dst.at<float>(i+padS, j+padS)=stat.at<float>(0,0);
                break;
            default:
                std::cout<<"ssssssssshiiiiiitt"<<std::endl;
                break;
            }

        }
    }
    return dst;
}


//add padS circles of 0 as padding
Mat ImgProcess::addZeroPad(Mat src, int padS)
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
    return dst;
}

Mat ImgProcess::imRescale(Mat src, int K)
{
    src.convertTo(src,CV_32F);
    int srcRows = src.rows;
    int srcCols = src.cols;

    double min, max;
    cv::minMaxLoc(src, &min, &max);
    Mat gm;
    subtract(src,Scalar(min),gm);
    cv::minMaxLoc(gm, &min, &max);
    Mat dst = Mat::zeros(srcRows,srcCols, CV_32F);

    for(int i=0; i<srcRows; i++){
        for(int j=0; j<srcCols; j++){
            float gs = K*gm.at<float>(i,j)/max;
            dst.at<float>(i,j) = gs;
        }
    }
    return dst;
}

Mat ImgProcess::zeroCross(Mat src, double thre)
{
    int srcRows = src.rows;
    int srcCols = src.cols;

    Mat dst = Mat::zeros(srcRows-2,srcCols-2, CV_32F);
    for(int i=1; i<srcRows-2; i++){
        for(int j=1; j<srcCols-2; j++){

            float up = src.at<float>(i,j-1);
            float down = src.at<float>(i,j+1);
            float left = src.at<float>(i-1,j);
            float right = src.at<float>(i+1,j);
            float lu = src.at<float>(i-1,j-1);
            float rd = src.at<float>(i+1,j+1);
            float ru = src.at<float>(i+1,j-1);
            float ld = src.at<float>(i-1,j+1);

            if (up*down < 0 ){
                if (std::abs(up-down) > thre){
                    dst.at<float>(i-1,j-1)=1;
                    continue;
                }
            }
            if (left*right < 0 ){
                if (std::abs(left-right) > thre){
                    dst.at<float>(i-1,j-1)=1;
                    continue;
                }
            }
            if (lu*rd < 0 ){
                if (std::abs(lu-rd) > thre){
                    dst.at<float>(i-1,j-1)=1;
                    continue;
                }
            }
            if (ru*ld < 0 ){
                if (std::abs(ru-ld) > thre){
                    dst.at<float>(i-1,j-1)=1;
                    continue;
                }
            }
        }
    }
    return dst;
}


void ImgProcess::fftshift(const Mat& inputImg, Mat& outputImg)
{
    outputImg = inputImg.clone();
    int cx = outputImg.cols / 2;
    int cy = outputImg.rows / 2;
    Mat q0(outputImg, Rect(0, 0, cx, cy));
    Mat q1(outputImg, Rect(cx, 0, cx, cy));
    Mat q2(outputImg, Rect(0, cy, cx, cy));
    Mat q3(outputImg, Rect(cx, cy, cx, cy));
    Mat tmp;
    q0.copyTo(tmp);
    q3.copyTo(q0);
    tmp.copyTo(q3);
    q1.copyTo(tmp);
    q2.copyTo(q1);
    tmp.copyTo(q2);
}
void ImgProcess::filter2DFreq(const Mat& inputImg, Mat& outputImg, const Mat& H)
{
    Mat planes[2] = { Mat_<float>(inputImg.clone()), Mat::zeros(inputImg.size(), CV_32F) };
    Mat complexI;
    merge(planes, 2, complexI);
    dft(complexI, complexI, DFT_SCALE);
    Mat planesH[2] = { Mat_<float>(H.clone()), Mat::zeros(H.size(), CV_32F) };
    Mat complexH;
    merge(planesH, 2, complexH);
    Mat complexIH;
    mulSpectrums(complexI, complexH, complexIH, 0);
    idft(complexIH, complexIH);
    split(complexIH, planes);
    outputImg = planes[0];
}
void ImgProcess::synthesizeFilterH(Mat& inputOutput_H, Point center, int radius)
{
    Point c2 = center, c3 = center, c4 = center;
    c2.y = inputOutput_H.rows - center.y;
    c3.x = inputOutput_H.cols - center.x;
    c4 = Point(c3.x,c2.y);
    circle(inputOutput_H, center, radius, 0, -1, 8);
    circle(inputOutput_H, c2, radius, 0, -1, 8);
    circle(inputOutput_H, c3, radius, 0, -1, 8);
    circle(inputOutput_H, c4, radius, 0, -1, 8);
}
// Function calculates FSD(fourier spectrum density) by fft with two flags
// flag = 0 means to return FSD
// flag = 1 means to return log(FSD)
void ImgProcess::calcFSD(const Mat& inputImg, Mat& outputImg, int flag)
{
    Mat planes[2] = { Mat_<float>(inputImg.clone()), Mat::zeros(inputImg.size(), CV_32F) };
    Mat complexI;
    merge(planes, 2, complexI);
    dft(complexI, complexI);
    split(complexI, planes);                // planes[0] = Re(DFT(I)), planes[1] = Im(DFT(I))

    Mat imgFSD;
    magnitude(planes[0], planes[1], imgFSD);
    outputImg = imgFSD;

    // logFSD = log(1 + FSD)
    if (flag)
    {
        Mat imglogFSD;
        imglogFSD = imgFSD + Scalar::all(1);
        log(imglogFSD, imglogFSD);
        outputImg = imglogFSD;
    }
}

// Function calculates PAS(phase angle spectrum) by fft with two flags
void ImgProcess::calcPAS(const Mat& inputImg, Mat& outputImg)
{
    Mat planes[2] = { Mat_<float>(inputImg.clone()), Mat::zeros(inputImg.size(), CV_32F) };
    Mat complexI;
    merge(planes, 2, complexI);
    dft(complexI, complexI);
    split(complexI, planes);                // planes[0] = Re(DFT(I)), planes[1] = Im(DFT(I))

    Mat imgFSD;
    phase(planes[0],planes[1],imgFSD);
    outputImg = imgFSD;
}

//frequency domain ideal filter
//flag = 0 mean to lowpass
//flag = 1 mean to highpass
void ImgProcess::idealFilter(Mat& inputOutput_H, int radius, int flag)
{
    int hRows = inputOutput_H.rows;
    int hCols = inputOutput_H.cols;
    int centerX = (int)hRows/2;
    int centerY = (int)hCols/2;
    Point center = Point(centerX,centerY);
    circle(inputOutput_H, center, radius, 0, FILLED, LINE_8);

    if (flag == 0) {
        Mat one = Mat(inputOutput_H.size(),CV_32F,Scalar(1));
        bitwise_xor(inputOutput_H,one,inputOutput_H);
    }
}


//frequency domain gaussion filter
//flag = 0 mean to lowpass
//flag = 1 mean to highpass
void ImgProcess::gaussFilter(Mat& inputOutput_H, int D0, int flag)
{
    int hRows = inputOutput_H.rows;
    int hCols = inputOutput_H.cols;
    int centerX = (int)hRows/2;
    int centerY = (int)hCols/2;
    for(int i = 0; i< hRows; i++){
        for (int j = 0; j < hCols; j++){
            double D;
            D
        }
    }
}

//return log(1+centered fourier specturm)
Mat ImgProcess::showCenFS(Mat src)
{
    Mat dst;
    calcFSD(src,dst,1);
    fftshift(dst,dst);
    dst = imRescale(dst,255);
    dst.convertTo(dst,CV_8U);
    return dst;
}

Mat ImgProcess::showPAS(Mat src)
{
    Mat dst;
    calcPAS(src,dst);
    dst = imRescale(dst,255);
    dst.convertTo(dst,CV_8U);
    return dst;
}




