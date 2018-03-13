#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_TEST	1000
#define MAX_LENGTH	20

int main() {
	int test, cnt = 0;
	double num, result[MAX_TEST];
	char testCase[MAX_TEST][MAX_LENGTH];

	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		cnt = 0;
		scanf("%lf", &num);
		do {
			scanf("%c", &testCase[i][cnt]);
			switch (testCase[i][cnt++]) {
				case '@':
					num *= 3.0;
					break;
				case '%':
					num += 5.0;
					break;
				case '#':
					num -= 7.0;
					break;
			}
		} while (testCase[i][cnt - 1] != '\n');
		result[i] = num;
	}
	for (int i = 0; i < test; i++) printf("%.2lf\n", result[i]);
}