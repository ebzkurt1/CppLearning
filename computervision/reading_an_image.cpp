
// Read an image using opencv and display it using opencv


#include <opencv2/opencv.hpp>  // basic building blocks of the library
#include <opencv2/imgcodecs.hpp>  // provides functions for reading and writing
#include <opencv2/highgui.hpp>  // contains the functions to show an image

#include <iostream>


int main()
{
    std::string image_path = cv::samples::findFile("starry_night.jpg");
    // cv::Mat class is n dimensional dense array
    cv::Mat img = cv::imread(image_path, cv::IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image:" << image_path << '\n';
        return 1;
    }
    cv::imshow("Display window", img);
    int k = cv::waitKey(0);
    if (k == 's')
    {
        cv::imwrite("starry_night.png", img);
    }
    return 0;
}
