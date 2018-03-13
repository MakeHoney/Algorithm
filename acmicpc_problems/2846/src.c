#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num; scanf("%d", &num);
	int* hill = (int*)malloc(num);
	for (int i = 0; i < num; i++) scanf("%d", &hill[i]);
	int ini = hill[0], last = hill[0], max = 0, flag = 0;
	for (int i = 0; i < num - 1; i++) {
		if (hill[i] < hill[i + 1]) {
			last = hill[i + 1];
			if (max < last - ini) max = last - ini;
			flag = 1;
		}
		else {
			if(max < last - ini) max = last - ini;
			if(flag) ini = hill[i + 1];
		}
	}
	printf("%d\n", max);
}