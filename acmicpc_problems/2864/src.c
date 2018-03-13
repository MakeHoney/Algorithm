#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int exp(int);
void maxMin(int arr[]);

int main() {
	int num[2];

	for (int i = 0; i < 2; i++)
		scanf("%d", &num[i]);

	maxMin(num);
}

int exp(int exp) {
	int result = 1;
	for (int i = 0; i < exp; i++)
		result *= 10;

	return result;
}

void maxMin(int num[]) {
	int maxSum[2] = { 0, }, minSum[2] = { 0, };
	int quo, exponent, max = 0, min = 0;

	for (int j = 0; j < 2; j++) {

		for (int i = 0; i < 7; i++) {
			exponent = exp(6 - i);
			quo = num[j] / exponent;
			num[j] %= exponent;

			if (quo == 5 || quo == 6) {
				maxSum[j] += 6 * exponent;
				minSum[j] += 5 * exponent;
			}
			else {
				maxSum[j] += quo * exponent;
				minSum[j] += quo * exponent;
			}
		}
	}
	for (int i = 0; i < 2; i++) {
		max += maxSum[i];
		min += minSum[i];
	}
	printf("%d %d\n", min, max);
}