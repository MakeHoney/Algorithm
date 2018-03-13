#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int num) {
	return 3 * num*num - 3 * num + 1;
}

int main() {
	int inp, i = 1;

	scanf("%d", &inp);

	while (1) {
		if (inp == 1) break;
		else if(inp >= func(i - 1) + 1 && inp <= func(i)) break;
		i++;
	}

	printf("%d\n", i);
}