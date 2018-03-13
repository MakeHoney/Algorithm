#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int exp1(int); int exp2(int);
int convert(char str[]);

int main() {
	char str[9];
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%s", str);
		int a = convert(str);
		a <= 100 ? puts("nice") : puts("not nice");
	}
}

int exp1(int exp) {
	int result = 1;
	for (int i = 0; i < exp; i++)
		result *= 10;
	return result;
}

int exp2(int exp) {
	int result = 1;
	for (int i = 0; i < exp; i++)
		result *= 26;
	return result;
}

int convert(char str[]) {
	int sum1 = 0, sum2 = 0, sum;
	for (int i = 0; i < 8; i++) {
		if (i < 3)
			sum1 += (str[i] - 65) * exp2(2 - i);
		else if (i > 3)
			sum2 += (str[i] - 48) * exp1(7 - i);
	}
	sum = sum1 - sum2;
	if (sum < 0) sum *= (-1);
	return sum;
}