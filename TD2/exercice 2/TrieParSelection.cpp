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


void permutTab(int *t,int i,int j)
{
	int tmp;
	tmp=t[i];
	t[i]=t[j];
	t[j]=tmp;
	
	
}

int minPos(int *t,int n,int p)
{
	
	int i,m,pos;
	m=t[p];
	pos=p;
	for(i=p+1;i<n;i++)
		if(t[i]<m)
		{
			m=t[i];
			pos=i;       
		}
	
	return pos;
}


void selection (int *t,int n)
{

	int i;
	
	for(i=0;i<n-1;i++)
		permutTab(t,i,minPos(t,n,i));	
	
}

int main()
{
	int *t,n;
	n=6;
	t=remplir(n);


	affichage(t,n);
	
	selection(t,n);
	
	
	printf("\n\n");
	
	affichage(t,n);
	printf("\n\n");
	
	
	
	
	
	system("pause");
}
