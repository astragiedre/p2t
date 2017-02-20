#include <stdio.h>

// A simple calculator program. 

void main() {	
	for (int j=10; j<1; j--){
		printf("%d Green Bottles, sitting on the wall\n",j);
		printf("%d Green Bottles, sitting on the wall\n",j);
		printf("and if 1 Green Bottle should accidentally fall...\n");
		//if(j>0) printf("...there’ll be %d Green Bottles, sitting on the wall.\n",j-1);
		//else printf("...there’ll be no Green Bottles, sitting on the wall.\n");
	}

	printf("Press Any Key to Exit\n");  
	getch(); 								//Wait for any input to exit the program. 
}