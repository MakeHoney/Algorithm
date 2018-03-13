#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double inp[2]; scanf("%lf %lf", &inp[0], &inp[1]);
	printf("%.9lf", inp[0] / inp[1]);
}