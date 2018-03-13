#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int average(int score[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += score[i] > 40 ? score[i] : 40;
	return sum / length;
}

int main() {
	int score[5];
	int length = sizeof(score) / sizeof(int);

	for (int i = 0; i < 5; i++)
		scanf("%d", &score[i]);
	printf("%d\n", average(score, length));
}