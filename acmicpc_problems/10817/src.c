#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	
int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int sort(int arr[]) {
	int temp;
	for(int i = 0 ; i < 2 ; i++)
		for (int i = 0; i < 2; i++)
			if (arr[i] > arr[i + 1]) swap(&arr[i], &arr[i + 1]);
	return arr[1];
}
int main() {
	int arr[3];
	for (int i = 0; i < 3; i++) scanf("%d", &arr[i]);
	printf("%d\n", sort(arr));
}