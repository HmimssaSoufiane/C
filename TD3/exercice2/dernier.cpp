#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


char * dernier(char *ch,int n)
{
	
char *s;
int l=strlen(ch);
int i=0;

s=(char *)malloc((n+1)*sizeof(char));

	if(l<n)
		n=l;
		
	ch=ch+(l-n);
	while(*ch)
		s[i++]=*ch++;
	s[i]='\0';
return s;


	
}


int main()
{
	char *ch,*s;
	int n;
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	printf("donner n : ");scanf("%d",&n);
	puts(ch);
	s=dernier(ch,n);
	
	
	puts(s);	
	
	
	printf("\n\n");
	system("pause");
}
