#include<stdio.h>
int main()
{
int a;
printf("Hey! Welcome to Days to Year-Month-Days Converter\n");
//getting value of days
printf("Please give value of Days\n=");
scanf("%d",&a); //variable “a” contain days
printf("Converted result is=");
//calculating Days to Year-Month-Days.
printf("%d Year - %d Month - %d Days",(a/365),(a%365)/30,((a%365)%30));
return 0;
}
