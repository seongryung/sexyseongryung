#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void main() {
	srand(time(NULL));
	int computer, p1;
	int score = 0;
	int life = 5;
	printf("0 = 오른쪽 , 1 = 왼쪽\n");
	while (1) {
		computer = rand() % 2; //0 = 오른쪽 , 1 = 왼쪽
		if (life == 0) {
			break;
		}
		scanf("%d", &p1);
		if (p1 != 0 && p1 != 1) {
			printf("0 또는 1 이외의 숫자를 입력하셨습니다. 다시 입력해주세요.(0 = 오른쪽 , 1 = 왼쪽)\n");
			continue;
		}
		if (p1 != computer) {
			score = score + 100;
			printf("승리 !\n");
			
		}
		if (p1 == computer) {
			life = life - 1;
			printf("남은 목숨 : %d\n", life);
		}
	}

	printf("GAME OVER\n"); //무한루프 탈출하면 패배함
	printf("%d\n", score);
}


