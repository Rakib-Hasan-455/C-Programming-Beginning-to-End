#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(){
	int Int_Char='r';
	printf(" %c is a letter\n",Int_Char);
if(isalpha(Int_Char) ){
	if(isupper(Int_Char)){
	printf("That latter %c is upper case character\n",Int_Char);
}
else{
	printf("That latter %c is lower case character\n",Int_Char);
}
}
else{
	if(isdigit(Int_Char) ){
		printf("That is %c is a number",Int_Char);
	}
	else{
	printf(" This is not digit or letter");
}
}


	return 0;
}
