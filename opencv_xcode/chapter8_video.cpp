//
//  chapter8_video.cpp
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


int main() {
    cv::VideoCapture cap(0);
    cv::Mat img;
    cv::Mat imgBlur;
    
    cv::CascadeClassifier faceCascade;
    faceCascade.load("/Users/adam/Desktop/opencv_xcode/opencv_xcode/Resources/haarcascade_frontalface_default.xml");
    
    std::vector<cv::Rect> faces;
    
    while (true)    {
        cap.read(img);
        cv::GaussianBlur(img, imgBlur, cv::Size(5, 5), 7, 0);
        
        faceCascade.detectMultiScale(imgBlur, faces, 1.1, 10);
        
        for (int i = 0; i < faces.size(); i++) {
            cv::rectangle(img, faces[i].tl(), faces[i].br(), cv::Scalar(0, 255, 0), 4);

        }
        cv::imshow("image", img);
        cv::waitKey(1);
    }
}
    
