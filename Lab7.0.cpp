#include <stdio.h>
#include <time.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "my_lab.h"


int main() {
	srand(time(NULL));
	/*	int remains[MOD] = { 0 };
		my_srand();
		for (int i = 0; i <= N; i++) {
			remains[my_rand(i)]++;
		}
		for (int i = 0; i < MOD; i++) {
			printf("Frequency of %d on selection is - %f\n", i, (1.0*remains[i] / N));
		}*/
		/*int remains[MOD] = { 0 };
		for (int i = 0; i <= N; i++) {
			int a = boxmul() * 239;
			if (a >= 0 && a <= 238)
				remains[a]++;
		}
		for (int i = 0; i < MOD; i++) {
			printf("Frequency of %d on selection is - %d\n", i, (remains[i]));
		}*/
	int count = 0;
	printf("-inf to -4 :\n");
	for (int i = 0; i < MOD; i++) {
		float a = boxmul();
		if (a < -4) {
			count++;
		}
	}
	printf("%d\n", count);
	printf("\n");

	count = 0;
	printf("-4 to -2 :\n");
	for (int i = 0; i < MOD; i++) {
		float a = boxmul();
		if (a > -4 && a < -2) {
			count++;
		}
	}
	printf("%d\n", count);
	printf("\n");

	count = 0;
	printf("-2 to 0 :\n");
	for (int i = 0; i < MOD; i++) {
		float a = boxmul();
		if (a > -2 && a < 0) {
			count++;
		}
	}
	printf("%d\n", count);
	printf("\n");

	count = 0;
	printf("0 to 2 :\n");
	for (int i = 0; i < MOD; i++) {
		float a = boxmul();
		if (a > 0 && a < 2) {
			count++;
		}
	}
	printf("%d\n", count);
	printf("\n");

	count = 0;
	printf("2 to 4 :\n");
	for (int i = 0; i < MOD; i++) {
		float a = boxmul();
		if (a > 2 && a < 4) {
			count++;
		}
	}
	printf("%d\n", count);
	printf("\n");

	count = 0;
	printf("4 to inf :\n");
	for (int i = 0; i < MOD; i++) {
		float a = boxmul();
		if (a > 4) {
			count++;
		}
	}
	printf("%d\n", count);
}