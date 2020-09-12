#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main(){
	printf("Hey welcome to age calculator !! \n");
	int BirthYear;
	printf("What's your birthyear? \n=");
	scanf(" %d",&BirthYear);
	int CurrentYear;
	printf("What's the current year?\n=");
	scanf(" %d",&CurrentYear);
	int age=abs(BirthYear-CurrentYear);
	printf("Your age is %d \n",age);
	return 0;
}
