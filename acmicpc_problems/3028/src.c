#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int*, int*);

int main() {
	int ball[3] = { 1, }, cnt = -1;
	char inp[51];
	scanf("%s", inp);
	while (inp[++cnt]) {
		if (inp[cnt] == 'A') swap(&ball[0], &ball[1]);
		else if (inp[cnt] == 'B') swap(&ball[1], &ball[2]);
		else swap(&ball[0], &ball[2]);
	}
	for (int i = 0; i < 3; i++)
		if (ball[i])
			printf("%d\n", i + 1);
}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}