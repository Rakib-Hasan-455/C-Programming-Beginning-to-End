/*write out programme to print out 0 to input and when it's at 5 then break
*1 2 3 4 5*/
#include<stdio.h>
int main(){
int input;
scanf(" %d",&input);
int initial;
for(initial=0;initial<=input;initial++){
//Note the middle condition is usually exixts as initial<=0 like for(initial=-4;initial++)
if(initial==6)  //It's better to write condition first
break;
printf("%d\n",initial);
}
return 0;
}
/*write out programme to print out 0 to input  and when it's at 3 then continue
 1 2   4 5 6 7 8 9 10
#include<stdio.h>
int main(){
int input;
scanf(" %d",&input);
int initial;
for(initial=0;initial<=input;initial++){
//Note the middle condition is usually exixts as initial<=0 like for(initial=-4;initial++)
if(initial==3)
continue;
}
printf("%d\n",initial);

return 0;
}
*/
 
