#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, num[1000], n, i, j;
	scanf("%d", &a);
	while (a >= 10) {
		for (i = 0; a > 0; i++) {
			num[i] = a % 10;
			a = a / 10;
		}
		a = 0;
		for (j = 0; j < i; j++) {
			a += num[j];
		}
		printf("%d", a);
		if (a >= 10) {
			printf("\n");
		}
	}
	return 0;
}