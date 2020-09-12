
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(){
char name[20];
char pencompany[20];
char pencolor[20];
char favfood[20];
char favresturant[20];
char sentence[200];
puts("Hey ! What's your name?");
//puts uses automatic line break
gets(name);


puts(" What's your favourite pen name?");
gets(pencompany);

puts(" Your favourite pen color?");
gets(pencolor);

puts(" What's your favourite Food?");
gets(favfood);

puts("What's your favourite Resturant");
gets(favresturant);

strcat(sentence," Hey ! ");
strcat(sentence,name);
strcat(sentence,"  ..");
strcat(sentence,pencompany);
strcat(sentence,"  is your favourite pen company and favourite pen color is ");
strcat(sentence,pencolor);
strcat(sentence," . You loves to eat ");
strcat(sentence,favfood);
strcat(sentence,"  and you loves to eat in ");
strcat(sentence,favresturant);

puts(sentence);
	return 0;
}
