#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define	MAX	1000
int main() {
	double jujak[MAX], max = 0, sum = 0;
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) scanf("%lf", &jujak[i]);
	for (int i = 0; i < test; i++)
		if (max < jujak[i]) max = jujak[i];
	for (int i = 0; i < test; i++) sum += jujak[i] / max * 100.0;
	printf("%.2lf\n", sum / test);
}