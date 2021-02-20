#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {

	for (int a = 2; a <= 9; a++) {
		for (int b = 1; b <= 9; b++) {
			printf("%d * %d = %d\t", a, b, a * b);
		}
		printf("\n");
	}
	

}
