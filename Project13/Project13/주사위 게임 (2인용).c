#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*

int RSP();

void main() {
	srand(time(NULL));

	int dice = rand() % 6 + 1; //1~6������ �ֻ��� ��
	static int total = 30; //��ü �̵��� ĭ �� 
	static int status1 = 0; // �÷��̾�1�� ���� ��ġ ����
	static int status2 = 0; // �÷��̾�2�� ���� ��ġ ����
	int result = 1;

	result=RSP();

	while (1) {
		if (status1 >= total) {
			printf("player1 �ϰ� �̱�\n");
			return 0;
		}
		if (status2 >= total) {
			printf("player2 �ϰ� �̱�\n");
			return 0;
		}

		if (result==0) {


			srand(time(NULL));
			int dice = rand() % 6 + 1; //1~6������ �ֻ��� ��
			printf("player 1�� �����Դϴ�\n");
			printf("�ƹ� Ű�� ���� �ֻ����� ��������!\n\n");
			system("pause");
			printf("Dice : %d\n", dice);
			printf("player 1 status : \n");
			status1 = status1 + dice; //���簪 + �ֻ����� ���� ��
			printf("���� ���� : %d / 30\n\n", status1);
			for (int i = 1; i < status1; i++) {
				printf("��");
			}
			printf("��");
			for (int i = 0; i < total - status1; i++) {
				printf("��");
			}
			printf("\n\n");
			if (status1 >= total) {
				printf("player1 �ϰ� �̱�\n");
				return 0;
			}
			break;
		}


		else {
			srand(time(NULL));
			int dice = rand() % 6 + 1; //1~6������ �ֻ��� ��
			printf("player 2�� �����Դϴ�\n");
			printf("�ƹ� Ű�� ���� �ֻ����� ��������!\n\n");
			system("pause");
			printf("Dice : %d\n", dice);
			printf("player 2 status : \n");
			status2 = status2 + dice; //���簪 + �ֻ����� ���� ��
			printf("���� ���� : %d / 30\n\n", status2);
			for (int i = 1; i < status1; i++) {
				printf("��");
			}
			printf("��");
			for (int i = 0; i < total - status1; i++) {
				printf("��");
			}
			printf("\n\n");
			break;
		}


	}
}

int RSP() {
	srand(time(NULL));
	int son = rand() % 3 + 1; // 1���� 3������ ������ ��
	int naeson;


	//��Ģ
	printf("\n--------------- ����� ���������� ------------------\n");
	printf("\n          1 : ���� , 2 : ���� , 3 : ��\n");
	printf("\n	player1: com, player 2�� ���� ���� �� ��	\n");
	printf("\n-------------------- ���� -------------------------        \n\n");
	system("pause");
	system("cls");



	while (1) {
		printf("��ǻ���� �� : %d\n", son); // ��ǻ�Ͱ� ���� 1���� 3������ ������ ��
		scanf("%d", &naeson);
		if (son == naeson) {
			son = rand() % 3 + 1;
			printf("���׿� ^_^\n\n1 : ����, 2 : ����, 3 : �� �Դϴ� �ٽ� �������ּ���.\n\n");
			srand(time(NULL));
			continue;

		}
		if (naeson >= 4) {
			printf("������ �ش���� �ʴ� ���Դϴ�\n1 : ����, 2 : ����, 3 : �� �Դϴ� �ٽ� �������ּ���.\n\n");
			continue;
		}
		if (son == 3 && naeson == 1) {
			printf("���� �̰�׿�\n\n");
			return 1;
		}
		if (son == 2 && naeson == 3) {
			printf("���� �̰�׿�\n\n");
			return 1;
		}
		if (son == 1 && naeson == 2) {
			printf("���� �̰�׿�\n\n");
			return 1;
		}
		if (son == 1 && naeson == 3) {
			printf("��ǻ�Ͱ� �̰�׿�\n\n");
			return 0;
		}
		if (son == 3 && naeson == 2) {
			printf("��ǻ�Ͱ� �̰�׿�\n\n");
			return 0;
		}
		if (son == 2 && naeson == 1) {
			printf("��ǻ�Ͱ� �̰�׿�\n\n");
			return 0;
		}

	}

}
*/
