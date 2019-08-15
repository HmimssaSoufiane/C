#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50

/*
void supprimerEspace(char *ch)
{
	
	int p=0;
	char *s;
	s=ch;
	
	while(*s)
	{
		if(*s!=' ')
		{
			*ch++=*s++;
			p=0;
		}
		else{
			if(p==0)
			{
				*ch++=*s++;
				p=1;
			}
			else
			*s++;
			
		}
		
		
	}
	*ch='\0';
	
}
*/
void supprimerEspace(char *ch)
{
	char *s=ch;
	while(*s)
	{
		if(*s==' ')
		{
			*ch++=*s++;
			while(*s==' ')
				*s++;
		}
		*ch++=*s++;
	}
	*ch='\0';
	
}


int main()
{
	char *ch;
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	supprimerEspace(ch);
	
	
	puts(ch);	
	
	
	printf("\n\n");
	system("pause");
}
