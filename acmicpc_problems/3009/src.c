#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[6], x, y;
	for (int i = 0; i < 6; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < 3; i ++) {
		if (a[2 * i % 6] == a[2 * (i + 1) % 6]) x = a[2 * (i + 2) % 6];

		if (a[2 * i % 6 + 1] == a[2 * (i + 1) % 6 + 1]) y = a[2 * (i + 2) % 6 + 1];
	}

	printf("%d %d", x, y);
}