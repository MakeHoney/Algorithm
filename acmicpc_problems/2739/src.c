#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int inp; scanf("%d", &inp);
	for (int i = 1; i <= 9; i++) printf("%d * %d = %d\n", inp, i, inp * i);
}