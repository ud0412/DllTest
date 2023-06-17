#pragma once

#ifdef CREATEDLL_EXPORTS
#define DLLSAMPLE_DECLSPEC __declspec(dllexport)
#else
#define DLLSAMPLE_DECLSPEC __declspec(dllimport)
#endif

extern "C" typedef struct {
	int height;
	int width;
	unsigned char* data;
} ImageData;

extern "C" typedef void (*CALLBACK_FUNC)(ImageData *image);

extern "C" DLLSAMPLE_DECLSPEC int setCallback(CALLBACK_FUNC callback);
extern "C" DLLSAMPLE_DECLSPEC int function1(ImageData *image);
