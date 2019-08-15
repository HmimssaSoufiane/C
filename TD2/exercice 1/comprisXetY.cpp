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


void compris (int *t,int n,int *t2,int x,int y)
{
	
	int i,j=0;
	
	for(i=x;i<=y;i++)
	{
		t2[j++]=t[i];

	}
}

int main()
{
	int *t,n,*t2,i,x,y;

	n=8;
	t=remplir(n);
	
	printf("donner x: ");scanf("%d",&x);
	printf("donner y: ");scanf("%d",&y);
	
	
	t2= (int*)malloc((y-x+1)*sizeof(int));
	compris(t,n,t2,x,y);
	
	affichage(t,n);
	printf("\n\n");
	
	affichage(t2,y-x+1);
	
	
	
	
	
	
	
	system("pause");
}
