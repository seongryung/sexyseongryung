#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Linear_Search() {
	int i = 0;
	int x[8] = { 3,6,9,12,15,18,21,24 };
	while (i < 8) {
		if (x[i] == 12) {
			printf("12의 위치 : %d번째\n", i + 1);
			break;
		}
		i++;
	}
}
void Binary_Search() {
	int x[8] = { 3,6,9,12,15,18,21,24 };
	int i = 0; //Binary_Search 내부 배열의 왼쪽 끝 인덱스
	int j = 7; //Binary_Search 내부 배열의 오른쪽 끝 인덱스
	int m;	//midpoint

	int target = 12;
	while (i < j) {	//while interval has >1 item
		m = (i + j) / 2;	
		if (x[m]< target) {
			i = m+1;
		}
		else {
			j = m;
		}
	}
	if (target == x[i]) {
		printf("%d\n", i);
	}
	else {
		printf("0\n");
	}
}
void Bubble_Sort(){
	int temp;
	int x[5] = { 97,120,1,5,5 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= 3 - i; j++) {
			if (x[j] > x[j + 1]) {
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
				
			}
		}
	}
	for (int a = 0; a < 5; a++) {
		printf("%d\n", x[a]);
	}
}
void Insertion_Sort() {
	int x[5] = { 97,120,1,5,3 };
	int i,m;
	for (int j = 1; j <= 4; j++) {
		i = 0;
		while (x[j] > x[i]) {
			i++;
		}
		m = x[j];
		for (int k = 0; k <= j - i - 1; k++) {
			x[j - k] = x[j - k - 1];
		}
		x[i] = m;
	}
	for (int c = 0; c < 5; c++) {
		printf("%d ", x[c]);
	}
}
void main() {
	//Binary_Search();
	//Bubble_Sort();
	Insertion_Sort();
}