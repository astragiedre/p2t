#include <stdio.h>

void main() {
int i,a,divider,check; //i-loop counter, a-input number, divider-squared divider number, check-exit loop when the number is not squarefree.
int ch=1; //ch-checks if the user wants to continue the program, runs when ch=1.
while(ch==1){
	check=0;
	printf("Enter an integer number. \n");
	scanf("%d", &a);		//Input is taken from user.
	for (i=2;i<=a;i++){		//i=2 because every number is divisable by 1, i is incremented after every successful loop until it reaches a
		divider=i*i;        //Calculatiion of the square.
		if(a%divider==0) {  //When divider divides a without remainder, loop breaks. 
			printf("The number is not squarefree, divider: %d \n",divider);
			check=1;        //check=1 breaks the loop.
			break;
		}
	}
	if (check==0) printf("The number is squarefree \n");	//if check = 0, no square divided number a. 
	printf("Press 1 to continue, 0 to exit\n");  
	scanf("%d",&ch);	//Input is taken from user. 0 breaks the while loop, 1 repeats the code.
}
}