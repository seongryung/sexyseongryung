#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void main() {
	int computer, p1, flag=3; //flag 1 = �� ��, flag 0 = �÷��̾� ��
	printf("���������� ����!\n");
	while (1) {
		computer = rand() % 3; // 0 = �ָ� , 1 = ����, 2 = ���ڱ�
		scanf("%d", &p1);
		if (p1 != 0 && p1 != 1 && p1 != 2) {
			printf("0,1,2, �̿��� ���ڸ� �Է��ϼ̽��ϴ�. \n�ٽ� �������ּ���.(0 = �ָ� , 1 = ����, 2 = ���ڱ�)\n");
		}
		switch (computer) {
		case 0:
			if (p1 == 0) {
				printf("�����ϴ�\n");
				continue;
			}
			else if (p1 == 1) {
				printf("��ǻ�� �� - ��ǻ�� ��\n");
				flag = 1;
				break;
			}
			else if (p1 == 2) {
				printf("p1 �� - p1 ��\n");
				flag = 0;
				break;
			}
		case 1:
			if (p1 == 1) {
				printf("�����ϴ�\n");
				continue;
			}
			else if (p1 == 2) {
				printf("��ǻ�� �� - ��ǻ�� ��\n");
				flag = 1;
				break;
			}
			else if (p1 == 0) {
				printf("p1 �� - p1 ��\n");
				flag = 0;
				break;
			}
		case 2:
			if (p1 == 2) {
				printf("�����ϴ�\n");
				continue;
			}
			else if (p1 == 0) {
				printf("��ǻ�� �� - ��ǻ�� ��\n");
				flag = 1;
				break;
			}
			else if (p1 == 1) {
				printf("p1 �� - p1 ��\n");
				flag = 0;
				break;
			}
		}
		if (flag == 1 || flag == 0) {
			break;
		}
		else continue;
	}
	printf("��������\n");
	while (1) {
		if (flag == 0) { //player�� �¸��� ���
			computer = rand() % 3;
			scanf("%d", &p1);
			if (p1 != 0 && p1 != 1 && p1 != 2) {
				printf("0,1,2, �̿��� ���ڸ� �Է��ϼ̽��ϴ�. \n�ٽ� �������ּ���.(0 = �ָ� , 1 = ����, 2 = ���ڱ�)\n");
				continue;
			}
			switch (p1) {
				printf("����� �¸��Դϴ� ! ����� ����\n");
			case 0:
				if (computer == 0) {
					printf("���� �й�\n");
					return;
					
				}
				else if (computer == 1) {
					printf("�� ����\n");
					flag = 0;
					continue;
				}
				else if (computer == 2) {
					printf("���� ����\n");
					flag = 1;
					continue;
				}
			case 1:
				if (computer == 1) {
					printf("���� �й�\n");
					return;
				}
				else if (computer == 2) {
					printf("�� ����\n");
					flag = 0;
					continue;
				}
				else if (computer == 0) {
					printf("���� ����\n");
					flag = 1;
					continue;
				}
			case 2:
				if (computer == 2) {
					printf("�÷��̾� �¸�\n");
					return;
				}
				else if (computer == 0) {
					printf(" ��ǻ�� ����\n");
					flag = 1;
					continue;

				}
				else if (computer == 1) {
					printf("�� ����\n");
					flag = 0;
					continue;
				}

			}

		}
		if (flag == 1) {
			computer = rand() % 3;
			switch (computer) {
				printf("��ǻ���� �¸��Դϴ� ! ����� ����\n");
			case 0:
				if (p1 == 0) {
					printf("�÷��̾� �й�\n");
					return;
				}
				else if (p1 == 1) {
					printf("���� ����\n");
					flag = 1;
					continue;
				}
				else if (p1 == 2) {
					printf("�� ����\n");
					flag = 0;
					continue;
				}
			case 1:
				if (p1 == 1) {
					printf("�÷��̾� �й�\n");
					return;
				}
				else if (p1 == 2) {
					printf("���� ����\n");
					flag = 1;
					continue;
				}
				else if (p1 == 0) {
					printf("�� ����\n");
					flag = 0;
					continue;
				}
			case 2:
				if (p1 == 2) {
					printf("�÷��̾� �й�\n");
					return;
				}
				else if (p1 == 0) {
					printf("���� ����\n");
					flag = 1;
					continue;

				}
				else if (p1 == 1) {
					printf("�� ����\n");
					flag = 0;
					continue;
				}

			}
			
				

		}
	}
}

