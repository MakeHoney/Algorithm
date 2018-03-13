#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int inp[3];
	for (int i = 0; i < 3; i++) scanf("%d", &inp[i]);

	printf("%d\n", (inp[0] + inp[1]) % inp[2]);
	printf("%d\n", (inp[0]%inp[2] + inp[1]%inp[2]) % inp[2]);
	printf("%d\n", (inp[0] * inp[1]) % inp[2]);
	printf("%d\n", (inp[0] % inp[2] * inp[1] % inp[2]) % inp[2]);
}