#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b) {
	return !(a % b) ? b : gcd(b, a % b);
}

int main() {
	int a, b, c, inp;
	scanf("%d", &inp);
	for (int i = 0; i < inp; i++) {
		scanf("%d %d", &a, &b);
		c = gcd(a, b);
		printf("%d %d\n", a * b / c, c);
	}
}