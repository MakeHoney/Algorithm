#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int, int);

int main() {
	int test, inp1, inp2;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d %d", &inp1, &inp2);
		printf("%d\n", inp1 * inp2 / gcd(inp1, inp2));
	}
}

int gcd(int num1, int num2) {
	return !(num1 % num2) ? num2 : gcd(num2, num1 % num2);
}