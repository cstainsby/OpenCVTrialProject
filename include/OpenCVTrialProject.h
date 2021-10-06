// OpenCVTrialProject.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

// TODO: Reference additional headers your program requires here.
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>


using namespace std;
using namespace cv;

void mainCameraVideo();

Mat convertColor(Mat orgImg);