#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main() {
	FILE* fp;
	fp = fopen("����.txt", "w");
	printf("�л��̸�, ����, ����, ����\n>>");
	char sn[30]; //�ܺ����Ͽ��� �о�� ������ ���� ���ڿ� �̸�
	int jeojang[10];
	int kr, eng, math;
	for (int a = 0; a < 5; a++) {	
		scanf("%s %d %d %d", sn, &kr, &eng, &math);
		fprintf(fp, "%s %d %d %d\n", sn, kr, eng, math);
	}
	printf("�Է��� ����Ǿ����ϴ�\n");
	fclose(fp);

	fp = fopen("����.txt", "r");
	
	if (!fp) {
		printf(" file open error\n");
		return;
	}
	int i = 0;
	while (fgets(sn,sizeof(sn),fp)) {
		char* ptr;
		ptr = strtok(sn, " ");
		ptr = strtok(NULL, " ");
		jeojang[i] = atoi(ptr);
		printf("%s\n", ptr);
		i++;
	}
	printf("Array check:\n");
	for (int a = 0; a < 5; a++) { 
		printf("%d\n", jeojang[a]);
	}
	return 0;
}