/*5
     1
    123
   12345
  1234567
 123456789
 */
 
#include<stdio.h>
int main(){
	int row,column,input;
	scanf(" %d",&input);
	for(row=0;row<=input;row++){
		for(column=0;column<=input-row;column++){
			printf(" ");
		}
		for(column=1;column<=2*row-1;column++){
			printf("%d",column);
		}
		printf("\n");
	}

	return 0;
}
/*
5

     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
 
 
#include<stdio.h>
int main(){
	int row,column,input;
	scanf(" %d",&input);
	for(row=0;row<=input;row++){
		for(column=0;column<=input-row;column++){
			printf(" ");
		}
		for(column=1;column<=row;column++){
			printf("%d ",column);
		}
		printf("\n");
	}

	return 0;
}
*/
