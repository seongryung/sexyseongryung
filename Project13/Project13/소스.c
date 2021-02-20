#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*

int RSP();

void main() {
	srand(time(NULL));

	int dice = rand() % 6 + 1; //1~6까지의 주사위 눈
	static int total = 30; //전체 이동할 칸 수 
	static int status1 = 0; // 플레이어1의 현재 위치 상태
	static int status2 = 0; // 플레이어2의 현재 위치 상태
	int result = 1;

	result=RSP();

	while (1) {
		if (status1 >= total) {
			printf("player1 니가 이김\n");
			return 0;
		}
		if (status2 >= total) {
			printf("player2 니가 이김\n");
			return 0;
		}

		if (result==0) {


			srand(time(NULL));
			int dice = rand() % 6 + 1; //1~6까지의 주사위 눈
			printf("player 1의 차례입니다\n");
			printf("아무 키나 눌러 주사위를 굴리세요!\n\n");
			system("pause");
			printf("Dice : %d\n", dice);
			printf("player 1 status : \n");
			status1 = status1 + dice; //현재값 + 주사위를 굴린 값
			printf("현재 진행 : %d / 30\n\n", status1);
			for (int i = 1; i < status1; i++) {
				printf("□");
			}
			printf("■");
			for (int i = 0; i < total - status1; i++) {
				printf("□");
			}
			printf("\n\n");
			if (status1 >= total) {
				printf("player1 니가 이김\n");
				return 0;
			}
			break;
		}


		else {
			srand(time(NULL));
			int dice = rand() % 6 + 1; //1~6까지의 주사위 눈
			printf("player 2의 차례입니다\n");
			printf("아무 키나 눌러 주사위를 굴리세요!\n\n");
			system("pause");
			printf("Dice : %d\n", dice);
			printf("player 2 status : \n");
			status2 = status2 + dice; //현재값 + 주사위를 굴린 값
			printf("현재 진행 : %d / 30\n\n", status2);
			for (int i = 1; i < status1; i++) {
				printf("□");
			}
			printf("■");
			for (int i = 0; i < total - status1; i++) {
				printf("□");
			}
			printf("\n\n");
			break;
		}


	}
}

int RSP() {
	srand(time(NULL));
	int son = rand() % 3 + 1; // 1부터 3까지의 랜덤한 수
	int naeson;


	//규칙
	printf("\n--------------- 선잡기 가위바위보 ------------------\n");
	printf("\n          1 : 가위 , 2 : 바위 , 3 : 보\n");
	printf("\n	player1: com, player 2가 가위 바위 보 ㄱ	\n");
	printf("\n-------------------- ㄱㄱ -------------------------        \n\n");
	system("pause");
	system("cls");



	while (1) {
		printf("컴퓨터의 수 : %d\n", son); // 컴퓨터가 뽑은 1부터 3사이의 랜덤한 수
		scanf("%d", &naeson);
		if (son == naeson) {
			son = rand() % 3 + 1;
			printf("비겼네용 ^_^\n\n1 : 가위, 2 : 바위, 3 : 보 입니다 다시 선택해주세요.\n\n");
			srand(time(NULL));
			continue;

		}
		if (naeson >= 4) {
			printf("범위에 해당되지 않는 수입니다\n1 : 가위, 2 : 바위, 3 : 보 입니다 다시 선택해주세요.\n\n");
			continue;
		}
		if (son == 3 && naeson == 1) {
			printf("내가 이겼네요\n\n");
			return 1;
		}
		if (son == 2 && naeson == 3) {
			printf("내가 이겼네요\n\n");
			return 1;
		}
		if (son == 1 && naeson == 2) {
			printf("내가 이겼네요\n\n");
			return 1;
		}
		if (son == 1 && naeson == 3) {
			printf("컴퓨터가 이겼네요\n\n");
			return 0;
		}
		if (son == 3 && naeson == 2) {
			printf("컴퓨터가 이겼네요\n\n");
			return 0;
		}
		if (son == 2 && naeson == 1) {
			printf("컴퓨터가 이겼네요\n\n");
			return 0;
		}

	}

}
*/
