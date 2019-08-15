#include<stdio.h>
#include<stdlib.h>
#include<Math.h>


int* remplir(int n)
{
	
	int *t,i;
	t= (int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("donner t[ %d ] : ",i);
		scanf("%d",&t[i]);
	}
	return t;
	
}

void affichage(int *t,int n)
{
	int i;
	for(i=0;i<n;i++)
			printf(" %d \t",t[i]);
	
	printf("\n\n");
}

int binairetodecimal(int *t,int n)
{
	int i,nbr=0,p=0;
	for(i=n-1;i>=0;i--)
		nbr=nbr+pow(2,p++)*t[i];
	return nbr;
	
	
}

int main()
{
	int n,*t,nbr;
	
	printf("donner la taille de tableau : ");scanf("%d",&n);
	t=remplir(n);

	
	nbr=binairetodecimal(t,n);
	printf("\n");
	affichage(t,n);
	printf("\n le nombre en decimale est : %d ",nbr);	
	
	
	
	
	
	
	
	
	
	printf("\n\n");
	system("pause");
}
