#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


void cesar(char *ch,char *s,int d)
{
	
	int i;
	while(*ch)
	{
		if(*ch>='a' && *ch<='z')
		{
			i=*ch+d-'a';
			*s++='a'+i%26;
		}
		else if(*ch>='A' && *ch<='Z')
		{
			i=*ch+d-'A';
			*s++='A'+i%26;
		}
		else *s++=*ch;
		*ch++;
		
	}
	*s='\0';

}



int main()
{
	char *ch,*s,*ss;
	int d=rand()%25;
	
	ch=(char *)malloc(N*sizeof(char));
	
	printf("donner une chaine de caracters : ");
	gets(ch);

	s=(char *)malloc(strlen(ch)+1);
	ss=(char *)malloc(strlen(ch)+1);
	cesar(ch,s,d);

	printf("d = %d \n",d);
	printf("chaine source : ");	puts(ch);
	printf("chaine chiffree : ");	puts(s);
	cesar(s,ss,26-d);
	printf("chaine dechiffre : ");	puts(ss);
	printf("\n\n");
	system("pause");
}
