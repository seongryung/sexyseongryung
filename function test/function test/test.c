#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main() {
	int m = 3, n = 4;
	printf("16�� ������ = %.2f\n", sqrt(16, 0));
	printf("-123�� ���밪 = %d\n", abs(-123));
	printf("3�� 4�� = %.2f\n", pow(m, n));

	char ch1 = 'A';
	if (isupper(ch1)) {
		printf("�̹� �빮�� �Դϴ�.\n");
	}
	else
		printf("�빮�� �ٲٰڽ��ϴ�.%c\n", toupper(ch1));
}