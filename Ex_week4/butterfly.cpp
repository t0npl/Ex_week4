#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, i, j, k, l, m;
	scanf("%d", &a);
	for (i = 0; i < a - 1; i++) {
		for (j = 0; j < i + 1; j++) {
			printf("*");
		}
		for (k = 0; k < a * 2 - 1 - j * 2; k++) {
			printf(" ");
		}
		for (l = 0; l < i + 1; l++) {
			printf("*");
		}
		printf("\n");
	}
	for (m = 0; m < a * 2 - 1; m++) {
		printf("*");
	}
	printf("\n");
	for (i; i < a - 1; i--) {
		for (j = 0; j > a; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i <= a - 1; i++) {
		for (j = 0; j < a - i - 1; j++) {
			printf("*");
		}
		for (k = 0; k < a * 2 - 1 - j * 2; k++) {
			printf(" ");
		}
		for (l = 0; l < a - i - 1; l++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}