#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


void inverse(char *ch)
{
	int i,j,l;
	char tmp;
	
	l=strlen(ch);
	j=l-1;
	
	for(i=0;i<l/2;i++,j--)
	{
		tmp=ch[i];
		ch[i]=ch[j];
		ch[j]=tmp;
		
	}
	
	
}
char * int_to_char(int n)
{
	char *ch,*ch2;
	ch=(char *)malloc(N*sizeof(char));
	ch2=ch;
	while(n!=0)
	{
		*ch++=n%10+'0';
		n/=10;
	}
	inverse(ch2);
	return ch2;
	
}


int main()
{
	char *ch;
	int nbr;
	
	printf("donner un nombre : ");scanf(" %d",&nbr);
	ch=int_to_char(nbr);
	puts(ch);
	
	printf("\n\n");
	system("pause");
}
