#include<stdio.h>
int main()
{
int marks,grade;
scanf(" %d",&marks);
grade=marks/5;
switch(grade){
case 15:
printf("A");
    break;
case 12:
printf("B");
break;
case 9:
printf("C");
break;
case 8:
printf("D");
break;
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
printf("F");
 break;
 }
return 0;
}
