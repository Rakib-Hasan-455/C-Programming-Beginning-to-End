#include <stdio.h>
int main(){
	int elements;
	int sum=0;
	//float average;
	printf("How many input u wanna take\n");
	scanf("%d",&elements);
	int array[elements];
	int loop;
	for(loop=0;loop<elements;loop++){
		printf("%dth element=",loop+1);
		scanf("%d",&array[loop]);
		sum+=array[loop];
		}
	printf("Sum of %d elements=%d \n",elements,sum);
		float average=(float)sum/elements;
		//you can typecast sum or elements
printf("Average of %d elements=%.2f",elements,average);
			return 0;
	
	}
 
