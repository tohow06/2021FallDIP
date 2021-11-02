#ifndef IMGPROCESS_H
#define IMGPROCESS_H

#include <map>
#include <opencv2/opencv.hpp>


using namespace cv;
class ImgProcess{
    public:
        Mat calCalHist(Mat);
        Mat cvtColorBGRRGB(Mat);
        Mat grayScaleA(Mat);
        Mat grayScaleB(Mat);
        Mat subtractGray(Mat, Mat);
        Mat binByTH(Mat, int);
        Mat modSpatial(Mat, int);
        Mat modGrayLevel(Mat, int);
        Mat modBright(Mat, int);
        Mat modContrast(Mat, int);
        Mat histEQ(Mat);
        Mat genKernel(int, int);
        Mat gaussian(int, float, float);
        Mat conv2DD(Mat, Mat);
        Mat ordfilt(Mat, Mat);
        Mat addZeroPad(Mat, int);
        Mat imRescale(Mat, int);
        Mat zeroCross(Mat, double);

};


#endif // IMGPROCESS_H

