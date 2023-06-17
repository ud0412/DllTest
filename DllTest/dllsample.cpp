#include "pch.h"

#include "dllsample.h"

#include <stdio.h>

CALLBACK_FUNC cb = NULL;

int setCallback(CALLBACK_FUNC callback) {
	cb = callback;
	return 0;
}

int function1(ImageData* image) {
	// printf("DLL : %d, %d\n", image->width, image->height);
	if (cb != NULL)
		cb(image);
	return 0;
}

