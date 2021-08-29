#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>

double pita(int a, int b, int c, int d) { //두 점 사이의 길이 구하기
	//a^2 + b^2 == c^2
	int tempx, tempy, Pita;
	tempy = pow(b - d,2);
	tempx = pow(a - c, 2);
	return sqrt(tempx + tempy, 2);
}
struct won {
	int cx;
	int cy;
	int cr;
};
void main() {
	int cx, cy, cr, cx1, cy1, cr1;
	struct won c1, c2;
	double dist;
	printf("원 1의 x좌표, y좌표, 원의 반지름을 차례로 쓰시오 : ");
	scanf("%d %d %d", &c1.cx, &c1.cy, &c1.cr);
	printf("원 2의 x좌표, y좌표, 원의 반지름을 차례로 쓰시오 : ");
	scanf("%d %d %d", &c2.cx, &c2.cy, &c2.cr);
	
	dist = pita(c1.cx,c1.cy, c2.cx, c2.cy);
	
	if (dist > c1.cr + c2.cr) {
		printf("두원이 만나지 않는다\n");
	}
	else if (c1.cx == c2.cx && c1.cy == c2.cy && c1.cr == c2.cr) {
		printf("두 원은 겹칩니다\n");
	}
	else if (c1.cx == c2.cx && c1.cy == c2.cy && c1.cr != c2.cr) {
		printf("한 원이 다른 원을 감싸고 있다\n");
	}
	else if (dist == c1.cr + c2.cr) {
		printf("두원이 한점에서 만난다 -> 접한다\n");
	}
	else if (dist < c1.cr + c2.cr) {
		printf("두원이 두 점에서 만난다\n");
	}
	else {
		printf("이상감지");
	}
}






















