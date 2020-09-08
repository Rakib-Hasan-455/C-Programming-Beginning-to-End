/*           * * * *           # # # #
             * * * *           # # # #
             * * * *           # # # #
             * * * *           # # # #
*/
#include<stdio.h>
int main(){
int row,column,input;
scanf(" %d",&input);
for(row=0;row<=input;row++){
for(column=0;column<=input;column++){
printf("* ");
//printf("# ");
}
printf("\n");
return 0;
}
