//Rakibs Random wife fun Game Code
 #include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<time.h>
int main(){
 while(1){
 srand(time(NULL));//making random number on each run
printf("\t\tFun game to find out your soulmate\n\t\t\t(^_^)\n\t\tEnter your name :");
char YourName[10];
scanf(" %s",YourName);
char*wifenames[11]={"Nowrin","Raba","Juhi","Srabony","Showrovie","Ansary","Tahmida","Tasnim","Sanjana","Jeba"};
int randNum=rand()%11;
printf("Hi %s ,  Your best wife match is %s \n", YourName,wifenames[randNum]);
printf(" You will have %d children\n",rand()%100);
} 
return 0;
}
