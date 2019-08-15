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


void insertion (int *t,int n)
{

	int i,j,tmp;
	
	for(i=0;i<n-1;i++)
	{
		if(t[i]>t[i+1])
		{
			tmp=t[i];
			t[i]=t[i+1];
			t[i+1]=tmp;
			
			if(i!=0)
			{
				j=i;
				while(t[j]<=t[j-1] && j>=1)
				{
					tmp=t[j];
					t[j]=t[j-1];
					t[j-1]=tmp;
					j--;
					
				}
			}
		}
		
	}	
	
}

int main()
{
	int *t,n;
	n=8;
	t=remplir(n);


	affichage(t,n);
	
	insertion(t,n);
	
	
	printf("\n\n");
	
	affichage(t,n);
	printf("\n\n");
	
	
	
	
	
	system("pause");
}
