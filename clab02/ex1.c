#include <stdio.h>

// A simple calculator program. 

void main() {
	printf("Type in two numbers and an operation (+,-,*,/) separated by a single space. \n");
	float a;
	float b;
	char c;
	scanf("%f %f %c", &a, &b, &c);		//Input is taken from user. a and b are real numbers, c is symbol for operation. 

										//Performing checks for the operation.
	if (c == '+'){						//Addition.
		printf("Result of addition: %f\n", a+b);
	}
	else if (c == '-'){					//Subtraction.
		printf("Result of subtraction: %f\n", a-b);
	}
	else if (c=='*'){					//Multiplication.
		printf("Result of multiplication: %f\n", a*b);
	}
	else if (c=='/'){					//Division.
		printf("Result of division: %.2f\n", (float) a/b);

	}
	else 								//If invalid operation is entered, error message is printed. 
		printf("Error. Operation not recognised.");


	printf("Press Any Key to Exit\n");  
	getch(); 								//Wait for any user input to exit the program. 
}