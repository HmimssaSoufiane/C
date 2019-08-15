#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


void premierETdernier(char *ch,char c,int *d,int *f)
{
	int l=strlen(ch);
	int i=0;
	char *s;
	
	s=ch+l;
	*d=*f=-1;
	while(*ch)
	{
		if(*ch==c && *d==-1)
			*d=i;
		if(*s==c && *f==-1)
			*f=l-i;
		if(*d!=-1 &&*f!=-1)
			break;
		*ch++;
		*s--;
		i++;
	}



	
}


int main()
{
	char *ch,c;
	int d,f;
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	printf("donner un caracter : ");scanf(" %c",&c);
	puts(ch);
	premierETdernier(ch,c,&d,&f);
	printf("\nle 1ere position de %c est %d : \n",c,d);
	printf("\nle dernier position de %c est %d : \n",c,f);
		
	
	
	printf("\n\n");
	system("pause");
}
