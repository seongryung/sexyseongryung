#include <stdio.h>
#pragma warning(disable:4996)
#include <limits.h>

int faecootoureeal(long long a) {
	if (a == 0) {
		return 1;
	}
	return a * faecootoureeal(a - 1);
	
}

void main() {
	long long result, b;
	printf("���丮�� ���� !\n\n���� �Է��ϼ��� : ");
	scanf("%lld", &b);
	result = faecootoureeal(b);
	printf("\nResult : %d\n\n", result);
}
/*
int plus5(int a) {
	return a + 5;
}

void main() {
	int b;
	printf("����ڰ� �Է��� ���� 5�� �����ݴϴ�\n�Է��ϱ� : ");
	scanf("%d", &b);
	b = plus5(b);
	printf("����ڰ� �Է��� �� + 5�� %d�Դϴ�\n", b);
}


void addArr(int x[]) {
	int i;
	for (i = 0; i < 10; i++) {
		x[i] += 5;
	}
}

void main() {
	int a[] = { 1,2,3,4,5,6,9,8,7,10 };
	int i;
	addArr(a);
	for (i = 0; i < 10; i++) {
		printf("%3d\n", a[i]);
	}
}
*/
/*
int plus(int a, int b) {
	return a + b;
}

void main() {
	int phonenum, joomin, a;
	printf("�ڵ��� ��ȣ�� �Է����ּ��� : ");
	scanf("%d", &phonenum);
	printf("�ֹε�Ϲ�ȣ�� �Է����ּ��� : ");
	scanf("%d", &joomin);
	a = plus(joomin, phonenum);
	printf("�ֹε�Ϲ�ȣ�� �ڵ�����ȣ�� �� : %d\n", a);
}
*/
/*
int change(int *a, int *b) {
	
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;


}

void main() {
	int kor = 95, math = 74;
	printf("kor = %d, math = %d\n", kor, math);
	change(&kor, &math);

	printf("kor = %d, math = %d\n", kor, math);
}
*/
/*
int jjaksoo(int a[]) {
	int i;
	int temp = 0;
	for (i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			temp = temp + a[i];
			
		}
	}
	return temp;
}


void main() {
	int b;
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	b = jjaksoo(arr);
	printf("Result : %d\n",b);
}


int jaegwee(int a) {
	
	if (a == 0) {
		return 0;
	}
	else {
		return a + jaegwee(a - 1);
	}
}

void main() {
	int b;
	b = jaegwee(10);
	printf("1���� 10���� ��� ���� ���� %d �Դϴ�\n", b);

}
*/

