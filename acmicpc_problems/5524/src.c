#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[21];
	int test, cnt = -1;

	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%s", str);
		while (str[++cnt]) {
			if (str[cnt] >= 'A' && str[cnt] <= 'Z')
				str[cnt] += 32;
		}
		cnt = -1;
		printf("%s\n", str);
	}
}