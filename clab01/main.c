#include <stdio.h>

int k = 4;

int exercise01() {
	int i = 50;
	unsigned in;
	double k = 1.0;
	double j;
	{
		float i = 5.0;
		printf ("The value of i is %3f\n", i);
		k = i * j;
		i *= 6;
	}

	i = k + i;
	printf ("Now , the value of i is %d\n", i);
}

void main() {
	// For reference
	//const float pi = 3.14;
	//short a = -15;   // [-32000, 32000]
	//int   k = 16000; // [-555555, 5555555]
	//long  b = 21321; // [-2000000000, 2000000000]
	//float f = 5.54657;
	//double d = 1.3213246576576576876864616587;
	//unsigned int uns = -1; // WTF
	//printf("printf:  %d  %c  %s  \n", k, 'h', "hamster" );

	

	// Exercise 2
	const int hamster = 12;
	int a = 100;

	printf("Result of addition: %d\n", a+hamster);
	printf("Result of subtraction: %d\n", a-hamster);
	printf("Result of multiplication: %d\n", a*hamster);
	printf("Result of division: %.2f\n", (float) a/hamster);
	printf("Result of modulus: %d\n", a%hamster);


	//return 0;
}