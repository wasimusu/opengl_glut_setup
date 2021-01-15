#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <string>

using namespace cv;
using namespace std;

int main() {
    Mat image = cv::imread("test,jpg", 1);
    cv::imshow("Image", image);
    cv::waitKey(0);
//    cv::Mat image(800, 800, CV_8UC3, Scalar(100, 150, 250));
//    std::string windowName = "Square Orange Image";
//    cv::namedWindow(windowName);
//    cv::imshow(windowName, image);
//    cv::waitKey(1000);
    return 0;
}