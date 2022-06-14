//
//  chapter5.cpp
//  opencv_xcode
//
//  Created by Adam on 11/06/2022.
//
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>
#include <filesystem>


////// Color detection //

/*
cv::Mat imgHSV, mask;

int hmin = 4, smin = 145, vmin = 117;
int hmax = 24, smax = 255, vmax = 255;


int main () {
    std::string path = "/Users/adam/Desktop/opencv_xcode/opencv_xcode/Resources/lambo.png";
    cv::Mat img = cv::imread(path);
    cv::cvtColor(img, imgHSV, cv::COLOR_BGR2HSV);
    
    
    cv::namedWindow("Trackbars", (640, 200));
    cv::createTrackbar("Hue Min", "Trackbars", &hmin, 179);
    cv::createTrackbar("Hue Max", "Trackbars", &hmax, 179);
    cv::createTrackbar("Sat Min", "Trackbars", &smin, 255);
    cv::createTrackbar("Sat Max", "Trackbars", &smax, 255);
    cv::createTrackbar("Val Min", "Trackbars", &vmin, 255);
    cv::createTrackbar("Val Max", "Trackbars", &vmax, 255);
    
    while (true) {
        cv::Scalar lower(hmin, smin, vmin);
        cv::Scalar upper(hmax, smax, vmax);
        
        cv::inRange(imgHSV, lower, upper, mask);
        
        cv::imshow("image", img);
        cv::imshow("image HSV", imgHSV);
        cv::imshow("image Mask", mask);
        cv::waitKey(10);
        
        
    }
    
    return 0;
    
    
}
*/

