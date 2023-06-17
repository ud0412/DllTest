#include "pch.h"

#include "dllsample.h"

#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

CALLBACK_FUNC cb = NULL;

int setCallback(CALLBACK_FUNC callback) {
	cb = callback;
	return 0;
}

int function1(ImageData* image) {
	// printf("DLL : %d, %d\n", image->width, image->height);
	Mat img(image->height, image->width, CV_8UC3, image->data);
	delete image;
	Mat img2;
	resize(img, img2, Size(640, 480), 0, 0);
	image = new ImageData();
	image->height = img2.rows;
	image->width = img2.cols;
	image->data = img2.data;
	if (cb != NULL)
		cb(image);
	return 0;
}

