#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


void afficheTabChaine(char **tab,int n)
{
	int i;
	for(i=0;i<n;i++)
		puts(tab[i]);
	
}

char ** saisiTabChaine(int n)
{
	char **tab;
	int i;
	tab = (char **)malloc((n+1)*sizeof(char *));
	for(i=0;i<n;i++)
		tab[i]=(char *)malloc(N*sizeof(char));
	
	for(i=0;i<n;i++)
	{
		printf("donner une chaine : ");
		gets(tab[i]);
	}
	return tab;
	
}



int main()
{
	
	int n;
	char ** tab;
	
	printf("donner la taille de tableau : ");scanf("%d",&n);getchar();
	tab=saisiTabChaine(n);
	afficheTabChaine(tab,n);
	
	
	
	printf("\n\n");
	system("pause");
}
