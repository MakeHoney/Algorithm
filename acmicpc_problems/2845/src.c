#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int peo, area, press[5];
	scanf("%d %d", &peo, &area);
	int num = peo * area;
	for (int i = 0; i < 5; i++) scanf("%d", &press[i]);
	for (int i = 0; i < 5; i++) printf("%d ", press[i] - num);
	puts("");
}