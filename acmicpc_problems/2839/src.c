#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX	10000
int test(int num) {
	int three = 0, five = 0;
	if (num == 3 || num == 5) return 1;
	if (!num) return 0;
	if (num <= 4) return MAX;
	three = test(num - 3) + 1, five = test(num - 5) + 1;
	if (three == MAX && five == MAX) return MAX;
	return three < five ? three : five;
}

int main() {
	int mok = 0;
	int inp, res; scanf("%d", &inp);
	if (inp > 15) {
		mok = (inp / 15) * 3;
		inp %= 15;
	}		// ¹®Á¦
	res = test(inp);
	if (res >= MAX) puts("-1");
	else printf("%d\n", res + mok);
}