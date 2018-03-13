#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int min(int*, int);

int main() {
	int ham[3], bev[2];

	for (int i = 0; i < 5; i++)
		i < 3 ? scanf("%d", &ham[i]) : scanf("%d", &bev[i - 3]);
	printf("%d\n", min(ham, 3) + min(bev, 2) - 50);
}

int min(int* arr, int len) {
	int min = arr[0];
	for (int i = 0; i < len - 1; i++)
		if (min > arr[i + 1]) min = arr[i + 1];
	return min;
}