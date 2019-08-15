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




void bulle (int *t,int n)
{

	int i,j,tmp,echange=0;
	
	do
	{
		echange=0;
		for(j=0;j<n-1;j++)
		{
			if(t[j]>t[j+1])
			{
				tmp=t[j];
				t[j]=t[j+1];
				t[j+1]=tmp;
				echange=1;
			}
		}
	}while(echange);
}

int main()
{
	int *t,n;
	n=8;
	t=remplir(n);


	affichage(t,n);
	
	bulle(t,n);
	
	
	printf("\n\n");
	
	affichage(t,n);
	printf("\n\n");
	
	
	
	
	
	system("pause");
}
