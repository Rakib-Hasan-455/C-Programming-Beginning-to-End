#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int i,n;
printf("This is a guessing game.\n");
printf("I have chosen a number between 0 and 20 which you must guess.\n");
srand(time(NULL));
int My_number=rand()%21;

for(i=5;i>0;i--){
	do{
		do {
	//printf("You have to input between 1 to 20\n");
	 printf("You have %d tries left.\n",i);
 printf("Enter a guess: ");
 scanf(" %d",&n);
 }while(n>20);
}while(n<0);
if(n==My_number){
  printf("\nCongratulations.You guessed it!\n");
 // break;
return 0; //program end
}
else if(n>My_number){
 printf("Sorry %d is wrong.My number is less than that\n",n);
continue;
}
else if(n<My_number){
 printf("Sorry %d is wrong.My number is greater than that.\n",n);
continue;
}
}

printf("Your chance is over\n");
return 0;
}
