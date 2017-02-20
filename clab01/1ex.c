// 3 mistakes in the original code were found and corrected

//1. The code needs #include <stdio.h> in the beginning to execute 
//   printf statement. This is like importing a module in Python.
#include <stdio.h>

int k = 4;
int main(void) {
	int i = 50;
	unsigned int j = i * 2;
// 2. Line double k = 1.0 will not execute as a semicolon ; is missing at the end. 
//    Every line in C code must end with ; unless it is { or } to start or end a set
//    of instructions.  
	double k = 1.0;
	{
		float i = 5.0;
		printf("The value of i is %3f\n", i);
		k = i * j;
		i *= 6;
	}

	// 3. The line double j; is unnecessary. We have already defined the variable j
	//    as unsigned int in the beginning of the code. 

	i = k + i; //or i += k
	printf("Now , the value of i is %d\n", i);
	return 0;
}
