#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>

double pita(int a, int b, int c, int d) { //�� �� ������ ���� ���ϱ�
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
	printf("�� 1�� x��ǥ, y��ǥ, ���� �������� ���ʷ� ���ÿ� : ");
	scanf("%d %d %d", &c1.cx, &c1.cy, &c1.cr);
	printf("�� 2�� x��ǥ, y��ǥ, ���� �������� ���ʷ� ���ÿ� : ");
	scanf("%d %d %d", &c2.cx, &c2.cy, &c2.cr);
	
	dist = pita(c1.cx,c1.cy, c2.cx, c2.cy);
	
	if (dist > c1.cr + c2.cr) {
		printf("�ο��� ������ �ʴ´�\n");
	}
	else if (c1.cx == c2.cx && c1.cy == c2.cy && c1.cr == c2.cr) {
		printf("�� ���� ��Ĩ�ϴ�\n");
	}
	else if (c1.cx == c2.cx && c1.cy == c2.cy && c1.cr != c2.cr) {
		printf("�� ���� �ٸ� ���� ���ΰ� �ִ�\n");
	}
	else if (dist == c1.cr + c2.cr) {
		printf("�ο��� �������� ������ -> ���Ѵ�\n");
	}
	else if (dist < c1.cr + c2.cr) {
		printf("�ο��� �� ������ ������\n");
	}
	else {
		printf("�̻���");
	}
}






















