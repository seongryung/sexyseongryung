#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#pragma warning(disable:4996)

void move();

void hanoi(int n, int s, int d, int m, char st[][4]) {
	//n은 s에 꽂힌 원판의 개수, s는 시작막대, d는 목적막대, m은 중간 막대, st는 현재 하노이 타워 상태
	if (n == 1)
		move(s, d, st);
	else {
		hanoi(n - 1, s, m, d, st);
		move(s, d, st);
		hanoi(n - 1, m, d, s, st);
	}
}

void move(int s, int d, char st[][4]) {
	char temp='\0';
	for (int a = 0; a < 4; a++) { // 0 직전의 문자를 받아옴
		if (st[s][a] == '0') {
			temp = st[s][a - 1];
			st[s][a - 1] = '0';
			break;
		}

	}
	if (isalpha(st[s][3])) { //위의 포문이 끝나버린 경우, 막대가 가득 차있다는 뜻, 가장 위에것을 받아옴
		temp = st[s][3];
		st[s][3] = '0';
	}

	for (int b = 0; b < 4; b++) {
		if (st[d][b] == '0') {
			st[d][b] = temp;
			break;
		}
		
	}
	
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 4; c++) {
			printf("%c  ", st[r][c]);
		}
		printf("\n");
	}
	printf("----------------------------\n");

}

void main() {

		char st[3][4] = { { 'D','C','B','A' }, {'0','0','0','0'}, {'0','0','0','0'} };
		hanoi(4, 0, 2, 1, st);	
}