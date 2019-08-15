#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


void supprimerEspace(char *s)
{
	

			char *p;
			p=s;
				while(*p)
				{
					if(*s!=' ')
					{
						s++;
					p++;
				}
				else
				{
					while(*p==' ')
					p++;
					*s=*p;
					s++;
					p++;
				}
			}
			*s='\0';
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
