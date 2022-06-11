//
//  chapter2.cpp
//  opencv_xcode
//
//  Created by Adam on 08/06/2022.
//
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>
#include <filesystem>

/*
int main() {
    std::string path = "/Users/adam/Desktop/opencv_xcode/opencv_xcode/Resources/Kamilka.jpeg";
    cv::Mat img = cv::imread(path);
    
    cv::Mat imgGrey, imgBlur, imgCanny, imgDia, imgErode;
    
    cv::cvtColor(img, imgGrey, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(img, imgBlur, cv::Size(7, 7), 5, 0);
    cv::Canny(imgBlur, imgCanny, 30, 90);
    
    
    cv:: Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
    cv::dilate(imgCanny, imgDia, kernel);
    
    cv::erode(imgDia, imgErode, kernel);
    
    cv::imshow("image", imgCanny);
    
    //cv::imshow("grey image", imgGrey);
    //cv::imshow("blurreed image", imgBlur);
    //cv::imshow("canny image", imgCanny);
     
    
    cv::imshow("image dilation", imgDia);
    cv::imshow("image derode", imgErode);
    
    
    cv::waitKey(0);
}
*/
