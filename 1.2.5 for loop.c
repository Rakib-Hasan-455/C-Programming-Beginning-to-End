/*  input=5
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    4 4 4 4
    3 3 3
    2 2
    1

#include<stdio.h>
int main(){
	int row,column,input;
	scanf(" %d",&input);
	for(row=1;row<=input;row++){
		for(column=1;column<=row;column++){
			printf(" %d",row);
		}
		printf("\n");
	}
	for(row=input-1;row>0;row--){
		for(column=1;column<=row;column++){ 
			printf(" %d",row);
		}
		printf("\n");
	}
	return 0;
}

input 5
* A 
* A B
* A B C
* A B C D
* A B C D E
* A B C D
* A B C 
* A B
* A


#include<stdio.h>
int main(){
	int row,column,input;
	scanf(" %d",&input);
	for(row=1;row<=input;row++){
		for(column=1;column<=row;column++){
			printf(" %c", column+64);
		}
		printf("\n");
	}
	for(row=input-1;row>0;row--){
		for(column=1;column<=row;column++){
			printf(" %c", column+64);
		}
		printf("\n");
	}
return 0;
}

input 5:
	*
	*   *
	*   *    *
	*   *    *    *
	*   *    *    *     *
        *   *    *    *
        *   *    *
        *   *
        * 
    
    */
    #include<stdio.h>
    int main(){
		int row,column,input;
		scanf(" %d",&input);
		for(row=1;row<=input;row++){
			for(column=1;column<=row;column++){
				printf("*   ");
			}
			printf("\n");
		}
		for(row=input-1;row>0;row--){
			for(column=1;column<=row;column++){
				printf("*   ");
			}
			printf("\n");
		}
		return 0;
	}
