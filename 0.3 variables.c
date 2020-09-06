#include<stdio.h>
int main(){

int input_number;
scanf(" %23d",&input_number); //%23 refers that it can input max 23 number
int number1=5;
printf(" %d is stored",number1);
printf("Inputted number is=%d",input_number);
float float_number=4.5;
printf(" %.2f is stored as float"); //%.2f refers that it can output two decimal number after fullstop(.) like 4.50
char character='R';
printf(" %c is the character",character);
char string[10]="Rakib";
printf(" %s is the string",string);
return 0;
}

