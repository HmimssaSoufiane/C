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

void possition(int *t,int n, int v,int *t2,int *m)
{
	
	int i;
	*m=0;
	for(i=0;i<n;i++)
	{
		if(t[i]==v)
			t2[(*m)++]=i;
	}
}

int main()
{
	int *t,n,v,*t2,k,i;
	n=8;
	t=remplir(n);
	t2= (int*)malloc(n*sizeof(int));
	
	printf("donner la valeur a rechercher : ");scanf("%d",&v);

	
	possition (t,n,v,t2,&k);
	
	affichage(t,n);
	if(k==0)
		printf("%d n'existe pas dans le tableau ! \n",v);
	else{
		
		printf("%d existe dans le tableau %d fois en positions : ",v,k);
		affichage(t2,k);
	}
	
	
	
	
	
	
	
	
	
	system("pause");
}
