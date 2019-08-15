#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


void PlusCourtPlusLongue(char **tab,int n,char *court,char *longue)
{
	int i;
	strcpy(court,tab[0]);
	strcpy(longue,tab[0]);
	
	for(i=0;i<n;i++)
		if(strlen(tab[i])>strlen(longue) )
			strcpy(longue,tab[i]);
		else if(strlen(tab[i]) < strlen(court))
			strcpy(court,tab[i]);
}



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
	char *court,*longue;
	
	court=(char *)malloc(N*sizeof(char));
	longue=(char *)malloc(N*sizeof(char));
	
	printf("donner la taille de tableau : ");scanf("%d",&n);getchar();
	tab=saisiTabChaine(n);
	afficheTabChaine(tab,n);
	
	PlusCourtPlusLongue(tab,n,court,longue);
	printf("\n\nchaine plus court : ");puts(court);
	printf("chaine plus longue : ");puts(longue);
	
	
	printf("\n\n");
	system("pause");
}
