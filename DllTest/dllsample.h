#pragma once

#ifdef CREATEDLL_EXPORTS
#define DLLSAMPLE_DECLSPEC __declspec(dllexport)
#else
#define DLLSAMPLE_DECLSPEC __declspec(dllimport)
#endif

extern "C" DLLSAMPLE_DECLSPEC int function1(int i);
