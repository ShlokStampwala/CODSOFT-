#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // Load the image
    Mat image = imread("path_to_your_image.jpg");

    if (image.empty()) {
        cout << "Error loading the image" << endl;
        return -1;
    }

    // Display the original image
    imshow("Original Image", image);
    waitKey(0);

    // Convert the image to grayscale
    Mat grayscaleImage;
    cvtColor(image, grayscaleImage, COLOR_BGR2GRAY);

    // Display the grayscale image
    imshow("Grayscale Image", grayscaleImage);
    waitKey(0);

    // Save the grayscale image
    imwrite("grayscale_image.jpg", grayscaleImage);

    return 0;
}