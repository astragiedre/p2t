#include <stdio.h>

void main() {
	int j;					//Input will be stored in variable j. 
	printf("Type in a number of bottles between 0 and 99. \n");
	scanf("%d", &j);		//Input is taken from user.
	if (j>0 && j<99){       //Code only executes for the appropriate number of bottles. 
	for (j; j>0; j--){      //The song is printed j times until j reaches 0 bottles. After each loop bttle number decreases by 1.
		if (j!=1){
			printf("%d Green Bottles, sitting on the wall\n",j);
			printf("%d Green Bottles, sitting on the wall\n",j);
			printf("and if 1 Green Bottle should accidentally fall...\n");
			if (j!=2) printf("...there will be %d Green Bottles, sitting on the wall.\n",j-1); //Check to avoid incorrect grammar. 
			else printf("...there will be %d Green Bottle, sitting on the wall.\n",j-1); // When j = 2-1 - 'bottle' instead of 'bottles' is printed.
		}
		else {				//Condition when j=1 to print 'bottle' instead of 'bottles'. 
			printf("%d Green Bottle, sitting on the wall\n",j);
			printf("%d Green Bottle, sitting on the wall\n",j);
			printf("and if 1 Green Bottle should accidentally fall...\n");
			printf("...there will be no Green Bottles, sitting on the wall.\n");
		}
	}
}
	else printf("Error. Wrong number of bottles."); //Song is not printed for incorrect number of bottles. 
	printf("Press Any Key to Exit\n");  
	getch(); 								//Wait for any input from user to exit the program. 
}