#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int test; scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		long long inp[2]; scanf("%ld %ld", &inp[0], &inp[1]);
		long long i = 0, n = inp[1] - inp[0];
		while (++i) if (i * (i + 1) / 2 >= n - 1) break;
		printf("%ld\n", i + 1);
	}
}