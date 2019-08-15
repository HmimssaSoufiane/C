#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


void supprimer(char *ch,char c)
{
	
	char *s;
	s=ch;
	
	while(*s)
	{
		if(*s!=c)
			*ch++=*s;
		*s++;
	}
	*ch='\0';
	
}


int main()
{
	char *ch,c;
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	printf("donner un caractere : ");scanf(" %c",&c);
	supprimer(ch,c);
	
	
	puts(ch);	
	
	
	printf("\n\n");
	system("pause");
}
