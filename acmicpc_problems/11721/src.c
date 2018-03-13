#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isalpha(char a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return 1;
	else
		return 0;
}

int main()
{
	char string[101];
	char temp[11];
	int count = 0;
	int i = 0;
	int j = 0;
	scanf("%s", string);

	while (!(string[i] == '\0'))
	{
		count++;
		i++;
	}
	if (count % 10 != 0)
		count = (count / 10) + 1;
	else
		count = count / 10;

	for (i = 0; i < count; i++)
	{
		while (j != 10 && isalpha(string[i * 10 + j]))
		{
			temp[j] = string[i * 10 + j];
			j++;
		}
		temp[j] = '\0';
		j = 0;

		printf("%s\n", temp);
	}
	return 0;
}
