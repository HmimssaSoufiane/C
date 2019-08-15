#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#define N 50


void saisiChaineAleatoire(char *ch2,int l)
{
	
	int i,j;
	
	for(i=0;i<l;i++)
	{
		j=rand()%2;
		ch2[i]=j*('a'+rand()%26)+(1-j)*('A'+rand()%26);
	}
}

void changeChaineAliatoire(char *ch2)
{
	while(*ch2)
	{
		if(*ch2>='a' && *ch2<='z')
			*ch2='a'+(26-(*ch2-'a'));
		else
			*ch2='A'+(26-(*ch2-'A'));
		*ch2++;
	}
}


void vernam(char *ch,char *ch2,char *s)
{
	
	int i,j;
	while(*ch)
	{
			
		if(*ch>='a' && *ch<='z')
		{
			if(*ch2>='a' && *ch2<='z')
				i=*ch2-'a';
			else
				i=*ch2-'A';
			j=*ch+i-'a';
			*s++='a'+j%26;
		}
		else if(*ch>='A' && *ch<='Z')
		{
			if(*ch2>='a' && *ch2<='z')
				i=*ch2-'a';
			else
				i=*ch2-'A';
			j=*ch+i-'A';
			*s++='A'+j%26;
		}
		else *s++=*ch;
		*ch++;
		*ch2++;
		
	}
	*s='\0';

}

void vernam2(char *ch,char *ch2,char *s)
{
	
	int i,j;
	while(*ch)
	{
			
		if(*ch>='a' && *ch<='z')
		{
			if(*ch2>='a' && *ch2<='z')
				i=*ch2-'a';
			else
				i=*ch2-'A';
			j=*ch+(26-i)-'a';
			*s++='a'+j%26;
		}
		else if(*ch>='A' && *ch<='Z')
		{
			if(*ch2>='a' && *ch2<='z')
				i=*ch2-'a';
			else
				i=*ch2-'A';
			j=*ch+(26-i)-'A';
			*s++='A'+j%26;
		}
		else *s++=*ch;
		*ch++;
		*ch2++;
		
	}
	*s='\0';

}




int main()
{
	char *ch,*ch2,*s,*s2;
	srand(time(NULL));
	
	ch=(char *)malloc(N*sizeof(char));
	ch2=(char *)malloc(N*sizeof(char));

	
	printf("donner une chaine de caracters : ");
	gets(ch);
	
	saisiChaineAleatoire(ch2,strlen(ch));
	puts(ch2);
	printf("\n\n\n");
	
	s=(char *)malloc(strlen(ch)+1);
	s2=(char *)malloc(strlen(ch)+1);
	vernam(ch,ch2,s);
	
	puts(ch);
	puts(ch2);
	puts(s);

/*	changeChaineAliatoire(ch2);
	vernam(s,ch2,s2);
	*/
	vernam2(s,ch2,s2);
	printf("\n");
	puts(s2);

	
	
	printf("\n\n");
	system("pause");
}
