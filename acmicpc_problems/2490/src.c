#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num[12], cnt = 0;

	for (int i = 0; i < 12; i++) scanf("%d", &num[i]);

	for (int i = 0; i < 12; i++) {
		if (num[i] == 0) cnt++;
		if (i % 4 == 3) {
			!cnt ? puts("E") : printf("%c\n", cnt + 64);
			cnt = 0;
		}
	}
}