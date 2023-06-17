#include "pch.h"

#include "dllsample.h"

#include <stdio.h>

CALLBACK_FUNC cb = NULL;

int setCallback(CALLBACK_FUNC callback) {
	cb = callback;
	return 0;
}

int function1(int i) {
	printf("DLL : %d\n", i);
	if (cb != NULL)
		cb(i + 1);
	return i + 2;
}

