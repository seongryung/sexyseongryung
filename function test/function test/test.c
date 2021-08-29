#include <stdio.h>
#include <math.h>
#include <ctype.h>

void main() {
	int m = 3, n = 4;
	printf("16의 제곱근 = %.2f\n", sqrt(16, 0));
	printf("-123의 절대값 = %d\n", abs(-123));
	printf("3의 4승 = %.2f\n", pow(m, n));

	char ch1 = 'A';
	if (isupper(ch1)) {
		printf("이미 대문자 입니다.\n");
	}
	else
		printf("대문자 바꾸겠습니다.%c\n", toupper(ch1));
}