#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct sagi {
	char grade[100];
	int item_number;
}item;

void main() {
	srand(time(NULL));
	int normal, rare, unique, legendary, Gacha;
	item arr[100];
	for (int a = 0; a < 80; a++) {
		strcpy(arr[a].grade,  "normal");
		arr[a].item_number = a;
	}
	for (int b = 80; b < 95; b++) {
		strcpy(arr[b].grade, "rare");
		arr[b].item_number = b;
	}
	for (int c = 95; c < 99; c++) {
		strcpy(arr[c].grade, "unique");
		arr[c].item_number = c;
	}
	for (int d = 99; d < 100; d++) {
		strcpy(arr[d].grade, "legendary");
		arr[d].item_number = d;
	}
	while (1) {
		printf("»Ì±â ¤¡: ");
		Gacha = rand() % 100;
		system("pause");
		printf("%d¸¦ »Ì¾Ò´Ù~~~ µî±Þ: %s\n", arr[Gacha].item_number, arr[Gacha].grade);
	}
	
}