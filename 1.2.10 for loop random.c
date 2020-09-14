#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<time.h> //making random number on each run
int main(){
	int i;
	time_t t;
	srand((unsigned)time(&t)); //making random number on each run
	while(1){
		int n;
		scanf(" %d",&n);
	for(i=1;i<n;i++){
	printf("Generated random number= %d \n",rand());
		}
		}return 0;
}
