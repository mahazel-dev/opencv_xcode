//
//  chapter7.cpp
//  opencv_xcode
//
//  Created by Adam on 13/06/2022.
//

/*
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>
#include <filesystem>
#include <vector>

using namespace std;


// Shapes and contour detection
cv::Mat imgGrey, imgBlur, imgCanny, imgDil, imgErode;

void getContours(cv::Mat dilated_image, cv::Mat image) {

    vector<vector<cv::Point>> contours;

    
    vector<cv::Vec4i> hierarchy;
    
    
    cv::findContours(dilated_image, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
    
    
    for (int i = 0; i < contours.size(); i++) {
        auto area = cv::contourArea(contours[i]);
        std::cout << i+1 << ") " << area << endl;
        
        vector<vector<cv::Point>> conPoly(contours.size());
        vector<cv::Rect> boundRect(contours.size());
        
        if (area > 1000) {
            float peri = cv::arcLength(contours[i], true);
            cv::approxPolyDP(contours[i], conPoly[i], 0.02*peri, true);
            cv::drawContours(image, conPoly, i, cv::Scalar(255, 0, 255), 2);
            
            std::cout << conPoly[i].size() << endl;
            
            boundRect[i] = cv::boundingRect(conPoly[i]);
            cv::rectangle(image, boundRect[i].tl(), boundRect[i].br(), cv::Scalar(0, 255, 0), 5);
            
            int objCor = (int)conPoly[i].size();
            std::string objectType;
            if (objCor == 4) {
                float aspRatio = (float) boundRect[i].width/ (float)boundRect[i].height;
                if (aspRatio > 0.95 && aspRatio <= 1.05) {
                    objectType = "Square";
                } else {
                    objectType = "Rectangular";
                }
            } else if (objCor == 3) {
                objectType = "Triangle";
            } else {
                objectType = "Circle";
            }
            cv::putText(image, objectType, { boundRect[i].x, boundRect[i].y - 5} , cv::FONT_HERSHEY_PLAIN, 0.75, cv::Scalar(255, 0, 255));

            
        }
    
    }
    
}

int main() {
    std::string path = "/Users/adam/Desktop/opencv_xcode/opencv_xcode/Resources/shapes.png";
    cv::Mat img = cv::imread(path);
    
    // Preprocessing image
    cv::cvtColor(img, imgGrey, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(imgGrey, imgBlur, cv::Size(3, 3), 5, 0);
    cv::Canny(imgBlur, imgCanny, 30, 90);
    cv:: Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
    cv::dilate(imgCanny, imgDil, kernel);
    
    getContours(imgDil, img);
    
    cv::imshow("image", img);
 cv::imshow("image grey", imgGrey);
    cv::imshow("image blurr", imgBlur);
    cv::imshow("image canny", imgCanny);
    cv::imshow("image dilation", imgDia);

    
    
    cv::waitKey(0);

}
 
*/
