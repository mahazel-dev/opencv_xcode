//
//  video_fun.cpp
//  opencv_xcode
//
//  Created by Adam on 12/06/2022.
//

#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>
#include <filesystem>

int hmin = 4, smin = 145, vmin = 117;
int hmax = 24, smax = 255, vmax = 255;

/*
int main () {
    
    cv::VideoCapture cap(0);
    cv::Mat img, imgHSV, mask, imgBlur;
    

    while (true)    {
        cap.read(img);
        
        cv::GaussianBlur(img, imgBlur, cv::Size(5, 5), 3, 0);
        cv::cvtColor(imgBlur, imgHSV, cv::COLOR_BGR2HSV);
        
        cv::Scalar lower(hmin, smin, vmin);
        cv::Scalar upper(hmax, smax, vmax);
        cv::inRange(imgHSV, lower, upper, mask);
        
        
        cv::imshow("image" ,imgHSV);
        cv::imshow("mask" ,mask);
        cv::waitKey(1);
    }
    
}
*/
