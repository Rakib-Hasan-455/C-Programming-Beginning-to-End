
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(){
	char string[100]="Main String \n";
	strcat(string,"Added Strcat String 1\n");
	strcat(string,"Added Strcat String 2\n");
	strcat(string,"Added Strcat String 3\n");
	strcat(string,"Added Strcat String 4\n");
	
	//printf(" %s \n",string);
	strcpy(string,"Replaced Strcpy String 1\n");
	//Strcpy removed Main String and all Strcat
	
	printf(" %s \n",string);
	return 0;
}
