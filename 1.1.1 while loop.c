//write a programme that can calculate every digit from a number
// like this         512     5+1+2=8
// Aha don't think to do without looping
//cause it can't be done without looping
#include<stdio.h>
int main(){
	int input1;
	int sum=0;
	scanf(" %d",&input1);
	int temp=input1;
	while(temp){
		sum=sum+temp%10;
		temp=temp/10;
	}
	printf(" Summation of %d numbers digit is %d ",input1,sum);
	return 0;
}
	
	
