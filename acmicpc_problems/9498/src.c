#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main() {
	int inp; 
	scanf("%d", &inp);
	if (inp <= 100 && inp >= 90) puts("A");
	else if (inp < 90 && inp >= 80) puts("B");
	else if (inp < 80 && inp >= 70) puts("C");
	else if (inp < 70 && inp >= 60) puts("D");
	else puts("F");
}