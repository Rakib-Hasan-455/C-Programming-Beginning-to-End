#include <stdio.h>
int main(){
int marks;
char grade;
scanf("%d",&marks);
printf("You have obtained %d marks",marks);
marks<=50 ? (grade='F' )&&( printf(" and your grade is %c\n",grade)):(grade='P' )&& (printf(" and your grade is %c\n",grade));
return 0;
}
 
