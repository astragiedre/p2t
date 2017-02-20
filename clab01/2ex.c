#include <stdio.h>

// A program to perform basic mathematical operations. 

void main() {
	
	const int b = 12;
	int a = 100;

	printf("Constant integer is %d, another integer is %d. \n\n", b, a);

// Performing mathematical operations and printing the result
	printf("Result of addition: %d\n", a+b);
	printf("Result of subtraction: %d\n", a-b);
	printf("Result of multiplication: %d\n", a*b);
// Result of division is rounded to 2 significant digits. The result is a float. 
	printf("Result of division: %.2f\n", (float) a/b);
	printf("Result of modulus: %d\n", a%b);

}