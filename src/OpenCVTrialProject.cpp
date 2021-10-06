// OpenCVTrialProject.cpp : Defines the entry point for the application.
//

#include "OpenCVTrialProject.h"


int main()
{
	cout << "Hello CMake." << endl;
	mainCameraVideo();
	return 0;
}


void mainCameraVideo() {
	VideoCapture cap(0);  // finds the first availble camera on system
	Mat img;              // the camera will be taking a bunch of pictures, to be stitched together in a video, stored in a matrix RGB

	while (true) {
		cap.read(img);           // capture a new image

		Mat convertedImg;
		cvtColor(convertedImg, img, COLOR_BGR2GRAY);

		imshow("Image", convertedImg);    // display image
		waitKey(20);             // how long it should wait to take another pic
	}
}

Mat convertColor(Mat orgImg) {
	Mat convertedImg;
	// change color from colored to black and white
	cvtColor(convertedImg, orgImg, COLOR_BGR2GRAY);

	return convertedImg;
}