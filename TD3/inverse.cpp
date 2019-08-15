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






int main()
{
	char *ch;
	
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	inverse(ch);
	puts(ch);	
	
	
	printf("\n\n");
	system("pause");
}
