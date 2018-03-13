#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	

int main() {
	int mon, day, sum = 0;
	int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char* week[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	scanf("%d %d", &mon, &day);

	for (int i = 0; i < mon - 1; i++) sum += arr[i];
	sum += day;
	printf("%s\n", week[(sum % 7)]);
}