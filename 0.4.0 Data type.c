#include<stdio.h>
int main(){
int input_number;
scanf(" %23d",&input_number); //%23 refers that it can input max 23 number
int number1=5;
printf(" %d is stored\n",number1);
printf("Inputted number is=%d\n",input_number);
float float_number=4.5;
printf(" %.2f is stored as float\n",float_number); //%.2f refers that it can output two decimal number after fullstop(.) like 4.50
return 0;
}

