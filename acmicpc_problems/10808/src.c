#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_LENG	101
#define ALPHA		26

int main() {
	char str[MAX_LENG];
	char alpha[ALPHA] = { 0, };
	int i = 0;

	scanf("%s", str);

	while (str[i] != '\0') alpha[str[i++] - 97]++;

	for (int j = 0; j < ALPHA; j++) printf("%d ", alpha[j]);

	return 0;
}