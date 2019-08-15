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

int testSiAppartient(char **tab,int n,char *ch)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(strcmp(tab[i],ch)==0)
			return 1;
	}
	return 0;
	
}





int main()
{
	
	int n;
	char ** tab;
	char *ch;
	ch=(char *)malloc(N*sizeof(char));
	
	printf("donner la taille de tableau : ");scanf("%d",&n);getchar();
	tab=saisiTabChaine(n);
	afficheTabChaine(tab,n);
	
	printf("\ndonner une chaine : ");gets(ch);
	
	if(testSiAppartient(tab,n,ch))
		printf("votre chaine apprtient a tableau \n");
	else 
		printf("votre chaine n'apprtient pas a tableau \n");
	
	
	
	
	
	
	printf("\n\n");
	system("pause");
}
