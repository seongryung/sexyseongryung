#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <math.h>
void main() {
	/*
	int na, nb, nc;
	scanf("%d %d %d", &na, &nb, &nc);
	if (na > nb && na > nc) {
		if (nb* nb + nc * nc == na * na) {
			printf("직각삼각형입니다\n");
		}
	}
	if (nb > na && nb > nc) {
		if (na * na + nc * nc == nb * nb) {
			printf("직각삼각형입니다\n");
		}
	}
	if (nc > nb && nc > na) {
		if (nb * nb + na * na == nc * nc) {
			printf("직각삼각형입니다\n");
		}
	}
	*/
	printf("세 변의 길이를 입력해 주세요 : ");
	int a, b, c, max, index, plus;
	max = 0;
	index = 0;
	plus = 0;
	scanf("%d %d %d", &a, &b, &c);
	int arr[3] = { a, b, c };
	for (int i = 0; i < 3; i++) {
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
		
	}
	for (int i = 0; i < 3; i++) {
		if (i == index) {
			continue;
		}
		else {
			plus = plus + pow(arr[i],2);
		}
	}

	if ( plus == max * max) {
		printf("zicgaksamgakhyeong입니다\n"); 
	}
	else {
		printf("zic각sam각hyeong이 a닙니da\n");
	}

} 