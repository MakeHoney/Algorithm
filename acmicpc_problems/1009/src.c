#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define	MAX	100000
int main() {
	int test, temp, cnt = 0, rem = 1;
	int base, exp, comp;
	int slot[10], result[MAX];
	
	scanf("%d", &test);
	for (int i = 0; i < test; i++, rem = 1) {
		scanf("%d %d", &base, &exp);
		for (cnt = 0;;) {
			rem = (base * rem) % 10;
			if (cnt == 0)
				temp = rem;
			else if (temp == rem)
				break;
			slot[cnt++] = !rem ? 10 : rem;
		}
		comp = exp % cnt;
		result[i] = slot[(comp + cnt - 1) % cnt];
	}
	for (int i = 0; i < test; i++) printf("%d\n", result[i]);
}