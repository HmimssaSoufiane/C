#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50

int exist(char *ch,char c)
{
	while(*ch)
	{
		if(*ch==c)
			return 1;
	*ch++;
	}
	return 0;
}

int nbrocc(char *ch,char c)
{
	
	int i=0;
	while(*ch)
	{
		if(*ch==c)
			i++;
	*ch++;
	}
	return i;
	
}

void ChPlusSouvents(char *ch,char *pos)
{
	
	int nbr,m;
	char *p=pos;
	
	m=nbrocc(ch,*ch);
	*pos++=*ch++;
	
	while(*ch)
	{
		nbr=nbrocc(ch,*ch);
		if(nbr>m)
		{
			m=nbr;
			pos=p;
			*pos++=*ch;
		}
		else if(nbr==m && !exist(pos,*ch))
			*pos++=*ch;
		*ch++;
		
	}
	*pos='\0';
}



int main()
{
	char *ch,*pos;
	
	ch=(char *)malloc(N*sizeof(char));
	
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	
	pos=(char *)malloc(strlen(ch)+1);
	ChPlusSouvents(ch,pos);
	
	printf("les caracteres qui apparaissent le plus souvent est :  ");
	while(*pos)
		printf("%c  ",*pos++);	
	
	printf("\n\n");
	system("pause");
}
