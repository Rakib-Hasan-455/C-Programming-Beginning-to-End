#include<stdio.h>
int main()
{
int base,height;
printf(" Welcome to Area of Triangle Calculator..\n\n");
//taking input of base & height
printf("Please give value of base =");
scanf("%d",&base);
printf("Please give value of Height=");
scanf("%d",&height);
//calculating Area of triangle
printf("area of triangle= 0.5*base*height \n");
printf(" \t\t= 0.5*%d*%d \n",base,height);
printf(" \t\t= %.2f \n",0.5*base*height);
return 0;
}
