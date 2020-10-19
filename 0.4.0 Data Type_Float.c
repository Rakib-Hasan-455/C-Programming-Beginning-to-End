#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main(){
	float number1=7.6;
	float number2=7.2;
	
	//floor makes it to next lowest digit or 7.6  as 7
	printf(" %.2f is floor \n", floor(number1) );
	//floor makes 7.2 to next lowest digit or 7.2 as 7
		printf(" %.2f is floor \n", floor(number2) );
	//ceil makes it to next highest number or 7.6 as 8
		printf(" %.2f is ceil\n", ceil(number1) );
	
	//ceil makes it to next highest number or 7.2 as 8
		printf(" %.2f is ceil \n", ceil(number2) );
	//mannual ceil
	int number=10,another_number=3,ceil;
	if (number % another_number == 0) {
		ceil = number / another_number;
	}else{
		ceil = number / another_number + 1;
	}	
	//ANOTHER TECHNIQUE
		ceil = (number + another_number - 1) / another_number;
	
	return 0;
}
