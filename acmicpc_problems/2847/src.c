#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[100], test , cnt = 0;

	scanf("%d", &test);
	for (int i = 0; i < test; i++)	scanf("%d", &arr[i]);

	for (int i = 0; i < test - 1; i++)
		if (arr[i] >= arr[i + 1]) cnt += arr[i] - arr[i + 1] + 1;

	printf("%d\n", cnt);
}