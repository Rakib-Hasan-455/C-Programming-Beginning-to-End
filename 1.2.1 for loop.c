/*  input=5
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */




#include<stdio.h>
int main(void){
int input;
scanf(" %d",&input);
int row,column;
for(row=1;row<=input;row++){
for(column=1;column<=input;column++){
printf(" %d",column);
}
printf(" \n");
}
return 0;
}
