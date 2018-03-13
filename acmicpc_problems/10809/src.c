#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ALPHALEN	26
#define MAX_LENG	101
int main() {
	int cnt = 0;
	int arr[ALPHALEN] = { 0, };
	char string[MAX_LENG];

	scanf("%s", string);
	for (int i = 0; i < ALPHALEN; i++) arr[i] = -1;
	while (string[cnt]) { 
		if(arr[string[cnt] - 'a'] == -1) arr[string[cnt] - 'a'] = cnt; 
		cnt++; 
	}
	for (int i = 0; i < ALPHALEN; i++) printf("%d ", arr[i]);
}