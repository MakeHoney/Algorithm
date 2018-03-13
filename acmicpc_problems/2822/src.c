#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[8], inp, minIdx = 0, sum = 0;

	for (int j = 0; j < 3; j++, minIdx = 0) {
		for (int i = 0; i < 8; i++) {
			if(!j) scanf("%d", &arr[i]);
			if (i && arr[minIdx] > arr[i])
				minIdx = i;
		}
		arr[minIdx] = 151;
	}
	for (int i = 0; i < 8; i++)
		if (arr[i] < 151)
			sum += arr[i];
	printf("%d\n", sum);

	for (int i = 0; i < 8; i++)
		if (arr[i] < 151)
			printf("%d ", i + 1);
	puts("");
}