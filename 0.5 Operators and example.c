#include<stdio.h>
int main(){
int value1,value2;
printf("\tPlease give two integer value.\n");
//Taking value of two integer
printf("\t\tValue1=");
scanf("%d",&value1);
printf("\t\tValue2=");
scanf("%d",&value2);
//addition
printf("\n\tAddition=value1+value2\n");
printf("\t\t=%d+%d\n",value1,value2);
printf("\t\t=%d\n",value1+value2);
//Subtraction
printf("\n\tSubtraction=value1-value2\n");
printf("\t\t =%d-%d\n",value1,value2);
printf("\t\t =%d\n",value1-value2);
//Multiplication
printf("\n\tMultiplication=value1*value2\n");
printf("\t\t =%d*%d\n",value1,value2);
printf("\t\t =%d\n",value1*value2);
//Division
printf("\n\tDivision=value1/value2\n");
printf("\t\t=%d/%d\n",value1,value2);
printf("\t\t=%d\n",value1/value2);
//Modulus
printf("\n\tModulus=value1%%value2\n");
printf("\t\t=%d %% %d\n",value1,value2);
printf("\t\t=%d\n",value1%value2);
return 0;
  
}
