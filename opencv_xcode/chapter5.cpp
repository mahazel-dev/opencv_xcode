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

// Warp images
/*
int main () {
    std::string path = "/Users/adam/Desktop/opencv_xcode/opencv_xcode/Resources/cards.jpg";
    cv::Mat img = cv::imread(path);
    float w = 250;
    float h = 350;
    cv::Point2f src[4] = {{529, 142},  {771, 190},  {405, 395},  {674, 457}};
    cv::Point2f dest[4] = {{0.f, 0.f},  {w, 0.0f},  {0.f, h},  {w, h}};
    
    cv::Mat matrix, imgWarp;
    
    matrix = cv::getPerspectiveTransform(src, dest);
    cv::warpPerspective(img, imgWarp, matrix, cv::Point(w, h));

    
    for (int i = 0; i < 4; i++) {
        circle(img, src[i], 10, cv::Scalar(0, 69, 255), cv::FILLED);
    }
    cv::imshow("image", img);
    cv::imshow("warp image", imgWarp);
    cv::waitKey(0);
    
}
*/
