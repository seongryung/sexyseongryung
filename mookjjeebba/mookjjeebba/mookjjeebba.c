#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void main() {
	int computer, p1, flag=3; //flag 1 = 컴 승, flag 0 = 플레이어 승
	printf("가위바위보 시작!\n");
	while (1) {
		computer = rand() % 3; // 0 = 주먹 , 1 = 가위, 2 = 보자기
		scanf("%d", &p1);
		if (p1 != 0 && p1 != 1 && p1 != 2) {
			printf("0,1,2, 이외의 숫자를 입력하셨습니다. \n다시 선택해주세요.(0 = 주먹 , 1 = 가위, 2 = 보자기)\n");
		}
		switch (computer) {
		case 0:
			if (p1 == 0) {
				printf("비겼습니다\n");
				continue;
			}
			else if (p1 == 1) {
				printf("컴퓨터 승 - 컴퓨터 선\n");
				flag = 1;
				break;
			}
			else if (p1 == 2) {
				printf("p1 승 - p1 선\n");
				flag = 0;
				break;
			}
		case 1:
			if (p1 == 1) {
				printf("비겼습니다\n");
				continue;
			}
			else if (p1 == 2) {
				printf("컴퓨터 승 - 컴퓨터 선\n");
				flag = 1;
				break;
			}
			else if (p1 == 0) {
				printf("p1 승 - p1 선\n");
				flag = 0;
				break;
			}
		case 2:
			if (p1 == 2) {
				printf("비겼습니다\n");
				continue;
			}
			else if (p1 == 0) {
				printf("컴퓨터 승 - 컴퓨터 선\n");
				flag = 1;
				break;
			}
			else if (p1 == 1) {
				printf("p1 승 - p1 선\n");
				flag = 0;
				break;
			}
		}
		if (flag == 1 || flag == 0) {
			break;
		}
		else continue;
	}
	printf("묵ㅁㅉㅃ\n");
	while (1) {
		if (flag == 0) { //player가 승리한 경우
			computer = rand() % 3;
			scanf("%d", &p1);
			if (p1 != 0 && p1 != 1 && p1 != 2) {
				printf("0,1,2, 이외의 숫자를 입력하셨습니다. \n다시 선택해주세요.(0 = 주먹 , 1 = 가위, 2 = 보자기)\n");
				continue;
			}
			switch (p1) {
				printf("당신의 승리입니다 ! 묵찌빠 시작\n");
			case 0:
				if (computer == 0) {
					printf("컴터 패배\n");
					return;
					
				}
				else if (computer == 1) {
					printf("내 차례\n");
					flag = 0;
					continue;
				}
				else if (computer == 2) {
					printf("컴터 차례\n");
					flag = 1;
					continue;
				}
			case 1:
				if (computer == 1) {
					printf("컴터 패배\n");
					return;
				}
				else if (computer == 2) {
					printf("내 차례\n");
					flag = 0;
					continue;
				}
				else if (computer == 0) {
					printf("컴터 차례\n");
					flag = 1;
					continue;
				}
			case 2:
				if (computer == 2) {
					printf("플레이어 승리\n");
					return;
				}
				else if (computer == 0) {
					printf(" 컴퓨터 차례\n");
					flag = 1;
					continue;

				}
				else if (computer == 1) {
					printf("내 차례\n");
					flag = 0;
					continue;
				}

			}

		}
		if (flag == 1) {
			computer = rand() % 3;
			switch (computer) {
				printf("컴퓨터의 승리입니다 ! 묵찌빠 시작\n");
			case 0:
				if (p1 == 0) {
					printf("플레이어 패배\n");
					return;
				}
				else if (p1 == 1) {
					printf("컴터 차례\n");
					flag = 1;
					continue;
				}
				else if (p1 == 2) {
					printf("내 차례\n");
					flag = 0;
					continue;
				}
			case 1:
				if (p1 == 1) {
					printf("플레이어 패배\n");
					return;
				}
				else if (p1 == 2) {
					printf("컴터 차례\n");
					flag = 1;
					continue;
				}
				else if (p1 == 0) {
					printf("내 차례\n");
					flag = 0;
					continue;
				}
			case 2:
				if (p1 == 2) {
					printf("플레이어 패배\n");
					return;
				}
				else if (p1 == 0) {
					printf("컴터 차례\n");
					flag = 1;
					continue;

				}
				else if (p1 == 1) {
					printf("내 차례\n");
					flag = 0;
					continue;
				}

			}
			
				

		}
	}
}

