#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>
#include <filesystem>
//#include <string>



/////////    Images  ////////
///
/*
int main () {
    
    std::string path = "/Users/adam/Desktop/opencv_xcode/opencv_xcode/Resources/test.png";
    cv::Mat img = cv::imread(path);
    cv::imshow("image" ,img);
    
    cv::waitKey(0);
    
}
*/
/*
/////////    Video  ////////
///
int main () {
    
    std::string path = "/Users/adam/Desktop/opencv_xcode/opencv_xcode/Resources/test_video.mp4";
    
    cv::VideoCapture cap(path);
    cv::Mat img;
    
    while (true)    {
        cap.read(img);
        cv::imshow("image" ,img);cv::waitKey(50);
        
    }
    
}
 */
/////////    webcam  ////////
/*
int main () {
    
    cv::VideoCapture cap(0);
    cv::Mat img;
    cv::Mat imgCanny;
    cv::Mat imgBlur;
    

    
    while (true)    {
        cap.read(img);
        cv::GaussianBlur(img, imgBlur, cv::Size(5, 5), 3, 0);
        cv::Canny(imgBlur, imgCanny, 40, 80);
        cv::imshow("image" ,imgCanny);
        cv::waitKey(1);
    }
}

*/
