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
	printf("���ϸ��� �� : %d\n", pokemon);
	printf("������ 18 �̻��� ���ϸ� : %d\n", count);
	for (int a = 0; a <= 11; a++) {
		printf("%d, ", level[a]);
	}
	printf("\n");

	//�������� ����
	int temp = 0;
	int ttemp = 0;
	int b, c;

	for ( c = 0; c < 12; c++) {
		temp = level[c]; //c ���Ӻ��� ����
		for ( b = c; b <= 11; b++) {		
			if (level[b] > temp) { //b�ε����� �� > ����(c�ε����� ��)�̶�� temp : �迭 �� �ִ밪
				temp = level[b]; // ������ b�ε����� ������ ���� �ǰ�
				ttemp = b;// ttemp(�ε���)�� b�� ���� , ttemp : �ִ밪�� �ε���
			}
		}
		//��ġ �ٲٱ�
		level[ttemp] = level[c];
		level[c] = temp;
	}
	//���
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
//������������������������������������������������������������������������������������������������������������������������������