/*  input=5
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    




#include<stdio.h>
int main(void){
int input;
scanf(" %d",&input);
int row,column;
for(row=1;row<=input;row++){
for(column=1;column<=row;column++){
printf(" %d",column);
}
printf(" \n");
}
return 0;
}

  input=5
    1 2 3 4 5  
    1 2 3 4
    1 2 3
    1 2
    1
    */
#include<stdio.h>
int main(){
	int row,column,input;
	scanf(" %d",&input);
	for(row=input;row>=0;row--){
		for(column=1;column<=row;column++){
			printf("%d ",column);
		}
		printf("\n");
	}
	return 0;
} 
