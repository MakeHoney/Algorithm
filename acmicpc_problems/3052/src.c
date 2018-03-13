#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int rem[42] = { 0, }, inp, cnt = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &inp);
		rem[inp % 42]++;
	}
	for (int i = 0; i < 42; i++)
		if (rem[i]) cnt++;
	printf("%d\n", cnt);
}