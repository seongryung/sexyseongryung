#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int h1, h2, h3, h4; //사람 1, 2, 3, 4 생성
	int temp;
	srand(time(NULL));
	while (1) {
		h1 = rand() % 2; 
		h2 = rand() % 2; 
		h3 = rand() % 2; 
		h4 = rand() % 2; 
		
		if ((h1 + h2 + h3 + h4) % 2 == 0 && (h1+h2+h3+h4)!= 4 && (h1 + h2 + h3 + h4) != 0)  {
			printf("%d, %d, %d, %d\n", h1, h2, h3, h4);
			break;

		}
	}
	if (h1 == h4) {
		printf("h1과 h4는 a팀, h2와 h3는 b팀입니다\n");
	}
	else if (h1 == h2) {
		printf("h1과 h2는 a팀, h3와 h4는 b팀입니다\n");
	}
	else if (h1 == h3) {
		printf("h1과 h3는 a팀, h2와 h4는 b팀입니다\n");
	}
	else if (h2 == h3) {
		printf("h2과 h3는 a팀, h1와 h4는 b팀입니다\n");
	}
	else if (h2 == h4) {
		printf("h2과 h4는 a팀, h1와 h3는 b팀입니다\n");
	}
	else if (h3 == h4) {
		printf("h3과 h4는 a팀, h1와 h2는 b팀입니다\n");
	}

}
