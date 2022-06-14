//
//  chapter8.cpp
//  opencv_xcode
//
//  Created by Adam on 14/06/2022.
//
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>

#include <iostream>
#include <filesystem>
#include <vector>

/*
int main() {
    
    std::string path = "/Users/adam/Desktop/opencv_xcode/opencv_xcode/Resources/Kamilka.jpeg";
    cv::Mat  image = cv::imread(path);
    
    cv::CascadeClassifier faceCascade;
    faceCascade.load("/Users/adam/Desktop/opencv_xcode/opencv_xcode/Resources/haarcascade_frontalface_default.xml");
    if (faceCascade.empty()) {
        std::cout << "NOT FINE" << std::endl;
    }
    
    std::vector<cv::Rect> faces;
    faceCascade.detectMultiScale(image, faces, 1.1, 10);
    
    for (int i = 0; i < faces.size(); i++) {
        cv::rectangle(image, faces[i].tl(), faces[i].br(), cv::Scalar(0, 255, 0), 4);

    }
    
 
    
    
    cv::imshow("Image", image);
    cv::waitKey(0);
    
}
 
 */
