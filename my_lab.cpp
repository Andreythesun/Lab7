#include "my_lab.h"
#include <stdio.h>
#include <time.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>

/*int f0 = 0;
int f1 = 0;
int f2 = 0;

void my_srand() {
	f0 = 30;
	f1 = 30;
	f2 = 30;
}

int my_rand(int n) {
	int f3 = 0;
	f3 = (f2 + f1 + f0) % MOD;
	f0 = f1;
	f1 = f2;
	f2 = f3;
	return f3;
}*/


float r() {

	float a = rand() % 100;
	a = a / 100;
	return a;  //rand (0;1)
}

float boxmul() {
	float u1 = r();
	float u2 = r();
	float z = sqrt(-2 * log(u1)) * cos(2 * M_PI * u2);
	return z;  //normally distributed rand (0;1)
}