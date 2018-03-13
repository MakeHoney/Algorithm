#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main() {
	int arr[30] = { 0, };
	int inp;
	for (int i = 0; i < 28; i++) {
		scanf("%d", &inp);
		arr[inp - 1] = 1;
	}
	for (int i = 0; i < 30; i++)
		if (!arr[i]) printf("%d\n", i + 1);
}