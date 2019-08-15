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


void dernier(char **tab,int n,char **tab2,int n2)
{
	int i;
	
	for(i=n-n2;i<n;i++)
		strcpy(tab2[i-(n-n2)],tab[i]);
}




int main()
{
	
	int n,n2,i;
	char ** tab,**tab2;
	
	printf("donner la taille de tableau : ");scanf("%d",&n);getchar();
	tab=saisiTabChaine(n);
	printf("\n");
	afficheTabChaine(tab,n);
	
	printf("\ndonner n : ");scanf("%d",&n2);getchar();
	
	tab2=(char **)malloc(n2*sizeof(char *));
	for(i=0;i<n2;i++)
		tab2[i]=(char *)malloc(N*sizeof(char ));
		
	dernier(tab,n,tab2,n2);
	printf("\n");
	afficheTabChaine(tab2,n2);
	
	
	
	printf("\n\n");
	system("pause");
}
