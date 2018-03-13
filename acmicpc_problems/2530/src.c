#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calTime(int*, int*, int*);

int main() {
	int hr, min, sec;
	scanf("%d %d %d", &hr, &min, &sec);
	calTime(&hr, &min, &sec);
	printf("%d %d %d", hr, min, sec);
}

void calTime(int* hr, int* min, int* sec) {
	int plusSec;
	int plusMin;
	int plusHr;
	scanf("%d", &plusSec);

	plusSec += *sec;

	int quo = plusSec / 60;
	int rem = plusSec % 60;
	*sec = rem;
	plusMin = *min + quo;
	quo = plusMin / 60;
	rem = plusMin % 60;
	*min = rem;
	plusHr = *hr + quo;

	*hr = plusHr % 24;
}