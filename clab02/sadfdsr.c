#include <stdio.h>

void main() {
	int j;	
	printf("Type in a number of bottles between 0 and 99. \n");
	scanf("%d", &j);		//Input is taken from user.
	if (j>0 && j<99){
	for (j; j>0; j--){
		if (j!=1){
			printf("%d Green Bottles, sitting on the wall\n",j);
			printf("%d Green Bottles, sitting on the wall\n",j);
			printf("and if 1 Green Bottle should accidentally fall...\n");
			if (j!=2) printf("...there will be %d Green Bottles, sitting on the wall.\n",j-1); //
			else printf("...there will be %d Green Bottle, sitting on the wall.\n",j-1); //
		}
		else {				//condition when j=1
			printf("%d Green Bottle, sitting on the wall\n",j);
			printf("%d Green Bottle, sitting on the wall\n",j);
			printf("and if 1 Green Bottle should accidentally fall...\n");
			printf("...there will be no Green Bottles, sitting on the wall.\n");
		}
	}
}
	else printf("Error.");
	printf("Press Any Key to Exit\n");  
	getch(); 								//Wait for any input to exit the program. 
}