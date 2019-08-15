#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


char* copier1(char *ch)
{
	char *s;
	int i=0;
	s=(char *)malloc(strlen(ch)*sizeof(char));
	while(*ch)
		s[i++]=*ch++;
	s[i]='\0';
	return s;
	
}

void copier2(char *ch,char *ch2)
{

	while(*ch)
		*ch2++=*ch++;
	
	
}


int main()
{
	char *ch,*ch2;
	int l;
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	ch2=(char *)malloc(strlen(ch)*sizeof(char));
	copier2(ch,ch2);
	puts(ch2);	
	
	
	printf("\n\n");
	system("pause");
}
