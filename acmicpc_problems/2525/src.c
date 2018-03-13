#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calTime(int*, int*);

int main() {
	int hr, min;
	scanf("%d %d", &hr, &min);
	calTime(&hr, &min);
	printf("%d %d", hr, min);
}

void calTime(int* hr, int* min) {
	int plusMin;
	int plusHr;
	scanf("%d", &plusMin);

	plusMin += *min;

	int quo = plusMin / 60;
	int rem = plusMin % 60;
	*min = rem;
	plusHr = *hr + quo;

	*hr = plusHr % 24;
}