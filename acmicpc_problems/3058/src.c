#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX	10000

int main() {
	int arr[MAX][7];
	int test, sum = 0, min = 100;
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		for (int j = 0; j < 7; j++) {
			scanf("%d", &arr[i][j]);
			if (!(arr[i][j] % 2)) {
				sum += arr[i][j];
				if (arr[i][j] < min)
					min = arr[i][j];
			}
		}
		printf("%d %d\n", sum, min);
		sum = 0, min = 100;
	}
}