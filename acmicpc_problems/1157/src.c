#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_LEN		1000001
#define ALPHALEN	26

int main()
{
	char string[MAX_LEN];
	int arr[ALPHALEN] = { 0 };
	int i = 0;
	int flag = 0;
	int max = 0;

	scanf("%s", string);
	while (string[i] != '\0') {
		if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
			if (string[i] >= 'a' && string[i] <= 'z')
				string[i] = string[i] - 32;
			arr[string[i] - 65]++;

		}
		i++;
	}
	for (int i = 0; i < ALPHALEN ; i++)
		printf("%d ", arr[i]);
	puts("");
	for (int j = 0; j < ALPHALEN - 1; j++)
		if (arr[max] < arr[j + 1])
			max = j + 1;
	for (int j = 0; j < ALPHALEN; j++)
		if (arr[max] == arr[j])
			flag++;
	if (flag >= 2)
		fputs("?\n", stdout);
	else
		printf("%c\n", max + 65);
}