#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void main() {
	srand(time(NULL));
	int computer, p1;
	int score = 0;
	int life = 5;
	printf("0 = ������ , 1 = ����\n");
	while (1) {
		computer = rand() % 2; //0 = ������ , 1 = ����
		if (life == 0) {
			break;
		}
		scanf("%d", &p1);
		if (p1 != 0 && p1 != 1) {
			printf("0 �Ǵ� 1 �̿��� ���ڸ� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.(0 = ������ , 1 = ����)\n");
			continue;
		}
		if (p1 != computer) {
			score = score + 100;
			printf("�¸� !\n");
			
		}
		if (p1 == computer) {
			life = life - 1;
			printf("���� ��� : %d\n", life);
		}
	}

	printf("GAME OVER\n"); //���ѷ��� Ż���ϸ� �й���
	printf("%d\n", score);
}


