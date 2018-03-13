#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX	101

int main() {
	char str[MAX];
	char result[MAX];
	int i = 0;
	int j = 0;

	scanf("%s", str);

	while (str[i] != '\0') {
		if (i == 0 || (i != 0 && str[i - 1] == 45))
			result[j++] = str[i];
		i++;
	}

	result[j] = '\0';
	printf("%s\n", result);
}