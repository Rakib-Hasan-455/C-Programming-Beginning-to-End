#include<stdio.h>
int main(){
int n;
int row,column;
scanf(" %d",&n);
for(row=1;row<=n;row++){
for(column=1;column<=n;column++){
printf(" %d ",row);
}
printf(" \n ");
}
return 0;
}
