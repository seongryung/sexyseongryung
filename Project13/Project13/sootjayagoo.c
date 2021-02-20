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

	//4자리 난수 생성 - 컴퓨터 (문제)
	for (int a = 0; a < 4; a++) {
		geomsa = (rand() % 10); // 0부터 9까지의 랜덤한 수

		sfc[a] = geomsa;

		for (int b = 0; b < a; b++) {
			if (sfc[b] == geomsa) {
				a--;
			}
		}
	}
	// 규칙 소개
	printf("=========================================================================\n");
	printf("                           ** 숫 자 야 구 **                              \n");
	printf("                 [각 자리수가 서로 다른 4자리수를 맞춰라 !]                \n");
	printf("        ※ 추측한 4자리 수 중, 자릿수 (워치) 는 달라도 같은 숫자가 존재하면 BALL!!\n");
	printf("        ※ 숫자가 자릿수까지 같으면 Strike!!    \n");
	printf("        ※ 게임은 총 9회까지 진행합니다. 9번안에 못맞추면 LOSE...\n");
	printf("=========================================================================\n");

	//cmd 초기화
	system("pause");
	system("cls");

	// 숫자야구 게임 시작 코딩 시 작 ~~

	
	int i = 1;

	while (1) {
		
		printf("[%d회] \n 1~9까지 숫자를 입력해 주세요. 숫자 사이마다 space바를 눌러주세요. \n 입력:", i);
		scanf("%d %d %d %d", &User[0], &User[1], &User[2], &User[3]);
		i++;
		// 범위 외의 숫자 입력 예외 처리 
		if (User[0] > 9 || User[0] < 0 || User[1] > 9 || User[1] < 0 ||
			User[2] > 9 || User[2] < 0 || User[3] > 9 || User[3] < 0) {
			printf("1~9 사이의 숫자 ㄱ \n");
			
			continue;
		}
		// 중복 숫자 입력 예외 처리 
		if (User[0] == User[1] || User[0] == User[2] || User[0] == User[3] ||
			User[1] == User[2] || User[1] == User[3] || User[2] == User[3]) {
			printf("중복 ㄴ\n\n");
			continue;
		}
		
		if (i == 10) {

			printf("\n***** 졌누 ㅋ *****\n\n");
			printf("정답: ");
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
		printf("[결과] 스트라이크 : %d, 볼 : %d\n\n", strike, ball);
		
		
		if (strike == 4) {
			printf("\n***** 니가 이김 ㅋ *****\n\n");
			return 0;
		}
	}
}

	












