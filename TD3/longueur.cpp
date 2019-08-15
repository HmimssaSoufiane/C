#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


int longueur(char *ch)
{
	int n=0;
	
	while(*ch++)
		n++;
	return n;
	
}



int main()
{
	char *ch;
	int l;
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	l=longueur(ch);
	printf("le longueur de votre chaine est :  %d ",l);
	
	
	
	printf("\n\n");
	system("pause");
}
