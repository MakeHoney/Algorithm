#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
char* calc(char num[][101], char);
int main() {
	char num[2][101];// , num2[101];
	char oper;
	scanf("%s %c %s", num[0], &oper, num[1]);
	char* a = calc(num, oper);
	printf("%s\n", a);
}

char* calc(char num[][101], char oper) {
	int cnt[2] = { -1, -1 };
	int flag[2] = { 0, };
	
	for (int i = 0; i < 2; i++) {
		while (num[i][++cnt[i]]) if (num[i][0] == '1') flag[i] = 1;
	}

	char* ret = (char*)malloc(cnt[0] + cnt[1]);
	if (oper == '*') {
		if (!(flag[0] && flag[1])) {
			ret[0] = '0', ret[1] = '\0';
			return ret;
		}
		ret[0] = '1';
		for (int i = 1; i < cnt[0] + cnt[1] ; i++) {
			ret[i] = '0';
			if (i == cnt[0] + cnt[1] - 1) ret[i] = '\0';
		}
		return ret;
	}
	else {
		int count1 = cnt[0] > cnt[1] ? cnt[0] : cnt[1];
		int count2 = cnt[0] < cnt[1] ? cnt[0] : cnt[1];
		ret[0] = '1';
		if (!flag[0] && !flag[1]) { 
			ret[0] = '0', ret[1] = '\0';
			return ret;
		}
		ret[count1 - count2] = '1';
		ret[0] = count1 == count2 ? '2' : '1';
		if (!(flag[0] && flag[1])) ret[0] = '1';
		for (int i = 1; i <= count1; i++) {
			if(i != count1 - count2) ret[i] = '0';
			if (i == count1) ret[i] = '\0';
		}	
		return ret;
	}
}