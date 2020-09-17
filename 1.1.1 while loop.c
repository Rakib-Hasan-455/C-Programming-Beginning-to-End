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
	
	
/* My stupid logic
#include<stdio.h>
#include<string.h>
int main(){
int num=1788731852;
printf("%d",num%10);
int temp=num;
int mirror1=0;
int mirror2=0;
int print;
while(temp){
mirror1=temp/10;
mirror2=(mirror1)%10;
print=mirror2;
temp=mirror1;
if(print==0)
break;
printf("%d",print); 

}
return 0;
}
*/
