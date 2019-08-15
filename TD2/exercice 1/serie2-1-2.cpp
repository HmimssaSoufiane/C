#include<stdio.h>
#include<stdlib.h>

int* remplir(int n)
{
	
	int *t,i;
	t= (int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&t[i]);
	return t;
	
}

void affichage(int *t,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf(" %d \t",t[i]);
	
	printf("\n\n");
}
/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////


void dernier (int *t,int n, int v,int *t2)
{
	
	int i,j=0;
	for(i=n-v;i<n;i++)
	{
		t2[i-(n-v)]=t[i];
	}
}

int main()
{
	int *t,n,v,*t2,k,i;
	n=8;
	t=remplir(n);

	printf("donner la valeur de tableau retourner : ");scanf("%d",&v);
	affichage(t,n);
	printf("\n\n");	

	if(v<=n){
	
		t2= (int*)malloc(v*sizeof(int));	
		dernier (t,n,v,t2);	
		affichage(t2,v);
	}
	else 	
		printf("la taille est inferieur !! ");
	
	
	
	
	
	
	
	system("pause");
}
