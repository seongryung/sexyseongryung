#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
	int h1, h2, h3, h4; //��� 1, 2, 3, 4 ����
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
		printf("h1�� h4�� a��, h2�� h3�� b���Դϴ�\n");
	}
	else if (h1 == h2) {
		printf("h1�� h2�� a��, h3�� h4�� b���Դϴ�\n");
	}
	else if (h1 == h3) {
		printf("h1�� h3�� a��, h2�� h4�� b���Դϴ�\n");
	}
	else if (h2 == h3) {
		printf("h2�� h3�� a��, h1�� h4�� b���Դϴ�\n");
	}
	else if (h2 == h4) {
		printf("h2�� h4�� a��, h1�� h3�� b���Դϴ�\n");
	}
	else if (h3 == h4) {
		printf("h3�� h4�� a��, h1�� h2�� b���Դϴ�\n");
	}

}
