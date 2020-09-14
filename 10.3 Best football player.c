#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
printf("Welcomt to best player Judger Programme\n");
printf("How many football player you wanna judge?\n=");
int input_limit;
scanf(" %d",&input_limit);
int Gercy_no[input_limit];
int Total_match[input_limit];
int  Total_goals[input_limit];
float rating[input_limit];
float bestrating=0.0;
int gercy;
int loop1;
for(loop1=0;loop1<input_limit;loop1++){
	printf("\nPlease give details of player%d\n",loop1+1);
	printf("Gercy number=");
	scanf(" %d",&Gercy_no[loop1]);
	printf("Total Match=");
	scanf(" %d",&Total_match[loop1]);
	printf("Total goals=");
	scanf(" %d",&Total_goals[loop1]);
rating[loop1]=Total_goals[loop1]/(float)Total_match[loop1];
}
printf("\n Here is the details of those players\n");
for(loop1=0;loop1<input_limit;loop1++){
	printf("Gercy number= %d  | Total Match= %d | Total goals= %d | rating= %.2f\n",Gercy_no[loop1],Total_match[loop1],Total_goals[loop1],rating[loop1]);
if(bestrating<rating[loop1]){
	bestrating=rating[loop1];
	gercy=Gercy_no[loop1];
}
}

printf("\n %.2f is the best rating and the player is gercy no. %d ",bestrating,gercy);
return 0;
}
