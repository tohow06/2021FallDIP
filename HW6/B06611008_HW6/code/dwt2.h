/*
 *
 * Reference:
 * https://stackoverflow.com/questions/20071854/wavelet-transform-in-opencv
 *
 */

#ifndef DWT2_H
#define DWT2_H

#include <opencv2/opencv.hpp>
#include <vector>

#define NONE 0  // no filter
#define HARD 1  // hard shrinkage
#define SOFT 2  // soft shrinkage
#define GARROT 3  // garrot filter

class dwt2{
public:
    dwt2();
    static float sgn(float x);
    static float soft_shrink(float d,float T);
    static float hard_shrink(float d,float T);
    static float Garrot_shrink(float d,float T);
    static void cvHaarWavelet(cv::Mat &src,cv::Mat &dst,int NIter);
    static void cvInvHaarWavelet(cv::Mat &src,cv::Mat &dst,int NIter, int SHRINKAGE_TYPE=0, float SHRINKAGE_T=50);
    int process(cv::VideoCapture& capture);
};

#endif // DWT2_H
