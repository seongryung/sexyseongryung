#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	


	int c;
	int geomsa;
	int sfc[4];
	int User[4];
	srand(time(NULL));
	int ball = 0;
	int strike = 0;

	//4�ڸ� ���� ���� - ��ǻ�� (����)
	for (int a = 0; a < 4; a++) {
		geomsa = (rand() % 10); // 0���� 9������ ������ ��

		sfc[a] = geomsa;

		for (int b = 0; b < a; b++) {
			if (sfc[b] == geomsa) {
				a--;
			}
		}
	}
	// ��Ģ �Ұ�
	printf("=========================================================================\n");
	printf("                           ** �� �� �� �� **                              \n");
	printf("                 [�� �ڸ����� ���� �ٸ� 4�ڸ����� ����� !]                \n");
	printf("        �� ������ 4�ڸ� �� ��, �ڸ��� (��ġ) �� �޶� ���� ���ڰ� �����ϸ� BALL!!\n");
	printf("        �� ���ڰ� �ڸ������� ������ Strike!!    \n");
	printf("        �� ������ �� 9ȸ���� �����մϴ�. 9���ȿ� �����߸� LOSE...\n");
	printf("=========================================================================\n");

	//cmd �ʱ�ȭ
	system("pause");
	system("cls");

	// ���ھ߱� ���� ���� �ڵ� �� �� ~~

	
	int i = 1;

	while (1) {
		
		printf("[%dȸ] \n 1~9���� ���ڸ� �Է��� �ּ���. ���� ���̸��� space�ٸ� �����ּ���. \n �Է�:", i);
		scanf("%d %d %d %d", &User[0], &User[1], &User[2], &User[3]);
		i++;
		// ���� ���� ���� �Է� ���� ó�� 
		if (User[0] > 9 || User[0] < 0 || User[1] > 9 || User[1] < 0 ||
			User[2] > 9 || User[2] < 0 || User[3] > 9 || User[3] < 0) {
			printf("1~9 ������ ���� �� \n");
			
			continue;
		}
		// �ߺ� ���� �Է� ���� ó�� 
		if (User[0] == User[1] || User[0] == User[2] || User[0] == User[3] ||
			User[1] == User[2] || User[1] == User[3] || User[2] == User[3]) {
			printf("�ߺ� ��\n\n");
			continue;
		}
		
		if (i == 10) {

			printf("\n***** ���� �� *****\n\n");
			printf("����: ");
			for (int p = 0; p < 4; p++) {
				printf("%d ",sfc[p]);
			}
			printf("\n");
			return 0;
		}
		ball = 0;
		strike = 0;
		for (int yeendecs = 0; yeendecs <= 3; yeendecs++) {

			for (int index = 0; index <= 3; index++) {
				if (sfc[yeendecs] == User[index]) {
					if (index == yeendecs) {
						strike++;
					}
					else {
						ball++;
					}

				}


			}
		}
		printf("[���] ��Ʈ����ũ : %d, �� : %d\n\n", strike, ball);
		
		
		if (strike == 4) {
			printf("\n***** �ϰ� �̱� �� *****\n\n");
			return 0;
		}
	}
}

	












