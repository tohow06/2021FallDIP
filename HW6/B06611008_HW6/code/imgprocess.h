#ifndef IMGPROCESS_H
#define IMGPROCESS_H

#include <map>
#include <opencv2/opencv.hpp>

class ImgProcess{
    public:
        cv::Mat calCalHist(cv::Mat);
        cv::Mat cvtColorBGRRGB(cv::Mat);
        cv::Mat grayScaleA(cv::Mat);
        cv::Mat grayScaleB(cv::Mat);
        cv::Mat subtractGray(cv::Mat, cv::Mat);
        cv::Mat binByTH(cv::Mat, int);
        cv::Mat modSpatial(cv::Mat, int);
        cv::Mat modGrayLevel(cv::Mat, int);
        cv::Mat modBright(cv::Mat, int);
        cv::Mat modContrast(cv::Mat, int);
        cv::Mat histEQ(cv::Mat);
        cv::Mat genKernel(int, int);
        cv::Mat gaussian(int, float, float);
        cv::Mat conv2DD(cv::Mat, cv::Mat);
        cv::Mat ordfilt(cv::Mat, cv::Mat);
        cv::Mat addZeroPad(cv::Mat, int);
        cv::Mat imRescale(cv::Mat, int);
        cv::Mat zeroCross(cv::Mat, double);

        //-----------from opencv document
        void fftshift(const cv::Mat& inputImg, cv::Mat& outputImg);
        void filter2DFreq(const cv::Mat& inputImg, cv::Mat& outputImg, const cv::Mat& H);
        void synthesizeFilterH(cv::Mat& inputOutput_H, cv::Point center, int radius);
        void calcFSD(const cv::Mat& inputImg, cv::Mat& outputImg, int flag = 0);
        //------------

        void calcPAS(const cv::Mat& inputImg, cv::Mat& outputImg);
        void idealFilter(cv::Mat& inputOutput_H, int radius, int flag);
        void gaussFilter(cv::Mat& inputOutput_H, double D0, int flag);
        void butterFilter(cv::Mat& inputOutput_H, double D0, int n, int flag);
        void homoFilter2DFreq(const cv::Mat& inputImg, cv::Mat& outputImg, const cv::Mat& H);
        void homoFilter(cv::Mat& inputOutput_H, double D0, double rH, double rL, double c);
        void motionFilter(cv::Mat& inputOutput_H, double a, double b, double T);
        cv::Mat invComplex(const cv::Mat& m);
        void WienerFilter2DFreq(const cv::Mat& inputImg, cv::Mat& outputImg, const cv::Mat& H, double K);

        cv::Mat showCenFS(cv::Mat);
        cv::Mat showPAS(cv::Mat);

        cv::Mat imHSV2RGB(cv::Mat src);
        cv::Mat imCMY2RGB(cv::Mat src);
        cv::Mat imRGB2XYZ(cv::Mat src);
        cv::Mat imXYZ2LAB(cv::Mat src);

        //-----------

};


#endif // IMGPROCESS_H

