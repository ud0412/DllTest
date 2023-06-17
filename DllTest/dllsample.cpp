#include "pch.h"

#include "dllsample.h"

#include <stdio.h>

int function1(int i) {
	printf("DLL : %d\n", i);
	return i + 1;
}

