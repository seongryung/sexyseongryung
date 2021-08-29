#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	int count = 0;
	FILE* fp;
	fp = fopen("하이.txt", "w");
	fputs("쿠헬헬\n헬창\n창가\n가창력\n역도\n도시락\n락스타\n타잔\n잔다르크\n크샤트리아\n아 현타와\n", fp);
	char imshee[200] = { NULL };
	fclose(fp);
	fp = fopen("하이.txt", "r");
	while (fgets(imshee, 200, fp)) {
		printf("%s", imshee);
		
	}
	fclose(fp);
	
	
}   