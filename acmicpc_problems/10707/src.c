#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int companyX(int, int);
int companyY(int, int, int, int);
int selectCom();

int main() {
	int finChar = selectCom();
	printf("%d\n", finChar);
	return 0;
}

int companyX(int charge, int liter) {
	return charge * liter;
}

int companyY(int init, int upper, int charge, int liter) {
	int sum = init + charge*(liter - upper);
	return upper <= liter ? sum : init;
}

int selectCom() {
	int init;
	int chargeA;
	int chargeB;
	int upper;
	int liter;

	scanf("%d %d %d %d %d", &chargeA, &init,
		&upper, &chargeB, &liter);

	int x = companyX(chargeA, liter);
	int y = companyY(init, upper, chargeB, liter);

	return x >= y ? y : x;
}