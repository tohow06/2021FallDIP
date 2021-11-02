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


};


#endif // IMGPROCESS_H

