#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	int count = 0;
	FILE* fp;
	fp = fopen("����.txt", "w");
	fputs("������\n��â\nâ��\n��â��\n����\n���ö�\n����Ÿ\nŸ��\n�ܴٸ�ũ\nũ��Ʈ����\n�� ��Ÿ��\n", fp);
	char imshee[200] = { NULL };
	fclose(fp);
	fp = fopen("����.txt", "r");
	while (fgets(imshee, 200, fp)) {
		printf("%s", imshee);
		
	}
	fclose(fp);
	
	
}   