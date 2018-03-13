#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX	100

int main() {
	int testCase, rep, cnt = 0;
	char str[MAX];
	scanf("%d", &testCase);

	for (int j = 0; j < testCase; j++) {
		scanf("%d %s", &rep, str);
		while (str[cnt] != '\0') {
			for (int i = 0; i < rep; i++)
				printf("%c", str[cnt]);
			cnt++;
		}
		cnt = 0; puts("");
	}
}