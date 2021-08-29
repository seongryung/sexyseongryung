#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	FILE* fp;
	fp = fopen("data.txt", "r");
	char baguni[30];
	int np = 0;
	int sxf = 0;
	char* ptr;
	fgets(baguni, sizeof(baguni), fp);
	while (fgets(baguni, sizeof(baguni), fp)) {
		np++;
		ptr = strtok(baguni, "\t \t\t");
		ptr = strtok(NULL, "\t \t\t");
		ptr = strtok(NULL, "\t \t\t");
		ptr = strtok(NULL, "\t \t\t");
		if (!strcmp("F", ptr)) {
			sxf++;
		}
		ptr = strtok(NULL, "\t \t\t");
		printf("%s\n", ptr);
		
	}
	printf("학교에 등록된 인원 : %d\n", np);
	printf("여학생의 수 : %d\n", sxf);
	fclose(fp);
	
	char ID[30], Res[30], sx[30], Major[30];
	int age;
	
	fp = fopen("data.txt", "a");

	scanf("%s %s %d %s %s", ID, Res, &age, sx, Major);
	fprintf(fp, "\n%s	%s	%d	%s	%s", ID, Res, age, sx, Major);

	fclose(fp);
}