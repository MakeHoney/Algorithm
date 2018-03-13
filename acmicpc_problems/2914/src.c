#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ave, song;
	scanf("%d %d", &song, &ave);
	printf("%d", song * (ave - 1) + 1);
}