#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int cri[6] = { 1, 1, 2, 2, 2, 8 }, inp;
	for (int i = 0; i < 6; i++) { 
		scanf("%d", &inp);
		printf("%d ", cri[i] - inp);
	}
	puts("");
}