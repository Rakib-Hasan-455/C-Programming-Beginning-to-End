/* Input 3
 *     1
 *   1 2
 * 1 2 3

#include<stdio.h>
int main(){
	int row,column,input;
	scanf(" %d",&input);
	for(row=1;row<=input;row++){
		for(column=1;column<=input-row;column++){
		printf(" ");
			}
		for(column=1;column<=row;column++){
			printf("%d",column);
		}
		
		printf("\n");

}
	return 0;
}
 Input 3 
 * 1 2 3
 *   1 2
 *     1
*/
#include<stdio.h>
int main(){
	int row,column,input;
	scanf(" %d",&input);
	for(row=0;row<=input;row++){
		for(column=0;column<=row;column++){
			printf(" ");
		}
		for(column=1;column<=input-row;column++){
			printf("%d",column);
		}
		printf("\n");
	}
	return 0;
}

/*6
 123456
  12345
   1234
    123
     12
      1

 ******
  *****
   ****
    ***
     **
      *
      #include<stdio.h>
int main(){
	int row,column,input;
	scanf(" %d",&input);
	for(row=0;row<=input;row++){
		for(column=0;column<=row;column++){
			printf(" ");
		}
		for(column=1;column<=input-row;column++){
			printf("%d",column);
		}
		printf("\n");
	}
	for(row=0;row<=input;row++){
		for(column=0;column<=row;column++){
			printf(" ");
		}
		for(column=1;column<=input-row;column++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/
