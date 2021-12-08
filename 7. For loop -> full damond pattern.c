#include<stdio.h>
int main(){
	int row,column,input;
	scanf("%d", &input);
	
	for(row=0; row<=input; row++){
	for(column=0; column<=(input-row)*2; column++){
			printf(" ");
		}
		for(column=1; column<=(2*row-1); column++){
			printf("%d ", column);
		}
		printf("\n");
	}
    
	for(row=1;row<=input;row++){
	for(column=0; column<=row*2; column++){
			printf(" ");
	}
	for(column=1; column<=(input-row)*2-1; column++){
			printf("%d ",column);
		}
		printf("\n");
	}

	return 0;
}

    1    
  1 2 3  
1 2 3 4 5
  1 2 3  
    1     
