/*  input=4           input=4
    A                 A B C D
    A B               A B C
    A B C             A B
    A B C D           A
*/
#include<stdio.h>
int main(){
	int row,column,input;
	//int count=0;
	scanf(" %d",&input);     //3
	for(row=1;row<=input;row++){                                //first loop 3 bar ghure 3ta row korbe 
		for(column=1;column<=row;column++){             //second loop column bananor condition onujai proti row er majhe column korbe            
			printf("%c ",(column+64));                                                  
		}
		printf("\n");
	}
	return 0;
}
/*#include<stdio.h>
int main(){
	int row,column,input;
	//int count=0;
	scanf(" %d",&input);     //3
	for(row=5;row>=1;row--){                                //first loop 3 bar ghure 3ta row korbe 
		for(column=1;column<=row;column++){             //second loop column bananor condition onujai proti row er majhe column korbe            
			printf("%c ",(column+64));                                                  
		}
		printf("\n");
	}
	return 0;
}
*/
