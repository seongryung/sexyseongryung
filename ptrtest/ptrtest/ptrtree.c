#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

void main() {

	char name[20] = "Computer";
	char* p = name;
		while (1) {
			if (*p == '\0') {
				printf("\n");
				break;
			}
			
			printf("%s\n",p);
		
			p += 1;
		}
}























































