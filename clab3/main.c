#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int size = 6;
	int data[size][size];
	int i;
	int j;

	// Allows generating random numbers
	srand(time(NULL));

	// Make random data
	for (i=0; i<size; i++) {
		for (j=0; j<size; j++) {
			data[i][j] = rand() % 100;
		}
	}

	// Print
	for (i=0; i<size; i++) {
		for (j=0; j<size; j++) {
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}

	return 0;
}