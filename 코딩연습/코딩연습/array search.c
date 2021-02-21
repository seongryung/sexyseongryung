#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdlib.h>
#define size 5


void main() {

	srand(time(NULL));
	double jeojang;
	double arr[size];
	double max = 0;

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 / 10.0;
		printf("%f ", arr[i]);
	}
	printf("\n");

	for (int a = 0; a < size; a++) {


		if (a == 0) {
			jeojang = arr[a] * arr[a + 1];
			continue;
		}

		else if (a == size - 1) {
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
	printf("%f\n", max);

}