#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

void main() {
	double jeojang;
	double arr[8] = { 1.1, 0.7, 1.3, 0.9, 1.4, 0.8, 0.7, 1.4 };
	double max = 0;

	for (int a = 0; a < 8; a++) {
		
		if (a == 0) {
			jeojang = arr[a] * arr[a + 1];
			continue;
		}
		
		else if (a == 7) {
			jeojang = arr[a] * arr[a - 1];
			continue;
		}

		else {
			jeojang = arr[a - 1] * arr[a] * arr[a + 1];
		}
		if (max < jeojang) {
			max = jeojang;
		}
	}
	printf("%d\n", max);

}