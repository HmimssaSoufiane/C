#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


void remplacer (char *ch,char A,char B)
{
	
	while(*ch)
	{
		if(*ch==A)
			*ch=B;
	*ch++;
	}
}

int main()
{
	char *ch,A,B;
	
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	
	printf("caracter a remplace : ");scanf(" %c",&A);
	printf("remplacer par : ");scanf(" %c",&B);
	
	remplacer(ch,A,B);
	
	puts(ch);	
	
	
	printf("\n\n");
	system("pause");
}
