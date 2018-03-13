#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define	MAX_CASE	10000
void censorship();

int main() {
	censorship();
}

void censorship() {
	int num1, num2, cnt = 0;
	char* result[MAX_CASE];

	do {
		scanf("%d %d", &num1, &num2);
		result[cnt] = (char*)malloc(4);
		result[cnt++] = num1 > num2 ? "Yes" : "No";
	} while (num1 && num2);

	for (int i = 0; i < cnt - 1; i++)
		printf("%s\n", result[i]);
}

