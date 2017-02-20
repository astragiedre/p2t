#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

	char input[100], new[100];						//declaring variables. user input will be stored in input
	int i,j; 										//new will be necessary for lowercasing. i,j integers for for loops

	printf("Enter a string. Max 100 symbols. \n");
	scanf("%s", input);							//Input is taken from user.
	printf("your input %s \n", input);  

	for(i = 0; input[i] != '\0'; ++i);				//code to calculate length of input.for every letter in input, +1 is added to i. 
	    printf("Length of string: %d \n", i);		// when no character is found (length is exeeded) the program prints the length i


	strcpy(new, input);								//copy of input is stored in new
	printf("copied - %s \n", new);

	//for(i = 0; new[i]; i++){                      //this code enters for loop i=length of input times (unlike the one below)
	//	printf("%d ", i);							//however, it still does not lowercase strings....
	 // 	new[i] = tolower(new[i]);
	//}


	for (j=0; j<strlen(new); j++) {						//loop to lowercase new
	    printf("entered loop: %d ", j);			//code to check how many times loop is entered
		printf("char: %c \n", new[j]);				//code to check particular letter
		if (isupper(new[j])) { 						//if the letter is uppercase isupper() returns true, code enters if statement
	  		new[j] = tolower(new[j]);				//that particular letter is lowered
	  		printf("the char new[j] %c is UPP by default \n", new[j] ); //printing to check if IF statement was executed
		}
	}
	if (strcmp(input, new)==0) {						//comparing input (which can have capitals) with new (which is all lowercased)
	 	printf("your string was lowercase \n");		// if new is the same as input, 0 is returned, and input was lowercase by default.
	}
	printf("%s\n", new);

	printf("Press Any Key to Exit\n");  
	getch(); 										//Wait for any user input to exit the program. 
	return 0;
}