#include <stdio.h>

// A program to perform basic mathematical operations. 

void main() {
	
	const int hamster = 12;
	int a = 100;

	printf("Constant integer is %d\n, another integer is %d\n", a, hamster);

	printf("Result of addition: %d\n", a+hamster);
	printf("Result of subtraction: %d\n", a-hamster);
	printf("Result of multiplication: %d\n", a*hamster);
	printf("Result of division: %.2f\n", (float) a/hamster);
	printf("Result of modulus: %d\n", a%hamster);

}