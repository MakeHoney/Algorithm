#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int in[4], out[4], rest = 0, max = 0;

	for (int i = 0; i < 4; i++) scanf("%d %d", &out[i], &in[i]);

	for (int i = 0; i < 4; i++) {
		int diff = in[i] - out[i];
		if (max < rest + diff) max = rest + diff;
		rest += diff;
	}
	printf("%d\n", max);
}