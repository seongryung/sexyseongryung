#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main() {
	FILE* fp;
	fp = fopen("data2.txt", "r");
	char baguni[30];
	int pokemon = 0;
	int h18, jeojang;
	int count = 0;
	char* ptr;
	int level[12];
	int i = 0;

	fgets(baguni, sizeof(baguni), fp);
	while (fgets(baguni, sizeof(baguni), fp)){
		pokemon++;
		ptr = strtok(baguni, "\t \t");
		ptr = strtok(NULL, "\t \t");
		ptr = strtok(NULL, "\t \t");
		h18 = atoi(ptr);
		level[i] = h18;
		if (h18 >= 18) {
			count++;
		}
		i++;
	}
	printf("포켓몬의 수 : %d\n", pokemon);
	printf("레벨이 18 이상인 포켓몬 : %d\n", count);
	for (int a = 0; a <= 11; a++) {
		printf("%d, ", level[a]);
	}
	printf("\n");

	//내림차순 정렬
	int temp = 0;
	int ttemp = 0;
	int b, c;

	for ( c = 0; c < 12; c++) {
		temp = level[c]; //c ㄱㅣ본값 저장
		for ( b = c; b <= 11; b++) {		
			if (level[b] > temp) { //b인덱스의 값 > 템프(c인덱스의 값)이라면 temp : 배열 내 최대값
				temp = level[b]; // 템프는 b인덱스의 값으로 변경 되고
				ttemp = b;// ttemp(인덱스)를 b로 저장 , ttemp : 최대값의 인덱스
			}
		}
		//위치 바꾸기
		level[ttemp] = level[c];
		level[c] = temp;
	}
	//출력
	for (int z = 0; z <= 11; z++) {
		printf("%d, ", level[z]);
	}
	printf("\n");
	fclose(fp);
	fp = fopen("data2.txt", "a");
	char name[10], type[10];
	int lev;
	scanf("%s	%s	%d", name, type, &lev);
	fprintf(fp, "%s	%s	%d", name, type, lev);
	fclose(fp);

}
//끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝끝