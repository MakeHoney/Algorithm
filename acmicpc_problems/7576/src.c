#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define WIDTH	1000
#define HEIGHT	1000
int calc(int, int);

int main() {
	int width, height;
	scanf("%d %d", &width, &height);
	printf("%d\n", calc(width, height));
}

int calc(int width, int height) {
	int arr[HEIGHT][WIDTH];
	int flag[4] = { 0, };
	int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			scanf("%d", &arr[i][j]);
			if (arr[i][j] == 1) flag[0] = 1;
			if (arr[i][j] == 0) flag[1] = 1, cnt1++;
		}
	}

	if (!flag[0] && !flag[1]) return 0;
	if (!flag[0]) return -1;
	if (!flag[1]) return 0;

	while (!flag[2]) {
		flag[3] = 0;
		cnt4++;

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				
				if (arr[i][j] == cnt4) {
					if (i + 1 < height) {
						if (!arr[i + 1][j]) {
							arr[i + 1][j] = cnt4 + 1;
							flag[3] = 1, cnt2++;
						}
					}
					if (i - 1 > -1) {
						if (!arr[i - 1][j]) {
							arr[i - 1][j] = cnt4 + 1;
							flag[3] = 1, cnt2++;
						}
					}
					if (j + 1 < width) {
						if (!arr[i][j + 1]) {
							arr[i][j + 1] = cnt4 + 1;
							flag[3] = 1, cnt2++;
						}
					}
					if (j - 1 > -1) {
						if (!arr[i][j - 1]) {
							arr[i][j - 1] = cnt4 + 1;
							flag[3] = 1, cnt2++;
						}
					}
				}
			}
		}
		cnt3++;

		if (!flag[3]) return -1;
		if (cnt2 == cnt1) return cnt3;
	}
}