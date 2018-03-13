#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX	10000
int main() {
	int test, pivot, arr[MAX];

	scanf("%d %d", &test, &pivot);

	for (int i = 0; i < test; i++) scanf("%d", &arr[i]);

	for (int i = 0; i < test; i++)
		if (arr[i] < pivot) printf("%d ", arr[i]);
	puts("");
}