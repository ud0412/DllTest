#pragma once

#ifdef CREATEDLL_EXPORTS
#define DLLSAMPLE_DECLSPEC __declspec(dllexport)
#else
#define DLLSAMPLE_DECLSPEC __declspec(dllimport)
#endif

extern "C" typedef void (*CALLBACK_FUNC)(int i);

extern "C" DLLSAMPLE_DECLSPEC int setCallback(CALLBACK_FUNC callback);
extern "C" DLLSAMPLE_DECLSPEC int function1(int i);
