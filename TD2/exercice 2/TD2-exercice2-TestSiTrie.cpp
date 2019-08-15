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


int testsitrie (int *t,int n)
{
	int i;
	if(n==0) return 1;
	for(i=0;i<n-1;i++)
		if(t[i] > t[i+1])
			return 0;
	return 1;

}

int main()
{
	int *t,n;
	n=8;
	t=remplir(n);


	affichage(t,n);
	
	if(testsitrie(t,n))
		printf("le tableau est trie !\n");
	else 
		printf("le tableau n'est pas trie !\n");
	
	printf("\n\n");
	
	
	
	
	
	
	
	system("pause");
}
