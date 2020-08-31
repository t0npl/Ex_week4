#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 1, sum = 0;
	printf("%d", 1);
	while (a <= 10000) {
		for (int i = 1; i < a; i++) {
			if (a % i == 0) {
				sum += i;
			}
		}
		if (sum == a) {
			printf(" %d", a);
		}
		sum = 0;
		a++;
	}
	return 0;
}