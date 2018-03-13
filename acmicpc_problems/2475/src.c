#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int inp, cum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &inp);
		cum += inp * inp;
	}
	printf("%d\n", cum % 10);
}