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

void permutTab(char **tab,int i,int j)
{
	char *tmp;
	tmp=(char *)malloc(N*sizeof(char));
	
	strcpy(tmp,tab[i]);
	strcpy(tab[i],tab[j]);
	strcpy(tab[j],tmp);
}

void TrieTabChaine(char **tab,int n)
{
	int i,echange;
	do{
		
		echange=0;
		for(i=0;i<n-1;i++)
			if(strcmp(tab[i],tab[i+1])==1)
			{
				permutTab(tab,i,i+1);
				echange=1;
			}
		
	}while(echange);
}


int main()
{
	
	int n;
	char ** tab;
	
	printf("donner la taille de tableau : ");scanf("%d",&n);getchar();
	tab=saisiTabChaine(n);
	printf("\n");
	afficheTabChaine(tab,n);
	
	printf("\n");
	TrieTabChaine(tab,n);
	afficheTabChaine(tab,n);
	
	
	
	printf("\n\n");
	system("pause");
}
