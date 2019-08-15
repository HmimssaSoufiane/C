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

void Min(int *t,int n, int *Min,int *posMin,int *m)
{
	
	int i;
	*m=0;
	*Min=t[0];
	
	for(i=0;i<n;i++)
	{
		if(t[i]<*Min)
		{
			*m=0;
			*Min=t[i];
			posMin[(*m)++]=i;
		}
		else if(t[i]==*Min)
			posMin[(*m)++]=i;
		
	}
}

void Max(int *t,int n, int *Max,int *posMax,int *m)
{
	
	int i;
	*m=0;
	*Max=t[0];
	
	for(i=0;i<n;i++)
	{
		if(t[i]>*Max)
		{
			*m=0;
			*Max=t[i];
			posMax[(*m)++]=i;
		}
		else if(t[i]==*Max)
			posMax[(*m)++]=i;
		
	}
}

int main()
{
	int *t,n,M1,M2,*posMin,m1,m2,*posMax,i;
	n=8;
	t=remplir(n);

	printf("\n\n");
	affichage(t,n);
	
	posMin= (int*)malloc(n*sizeof(int));
	posMax= (int*)malloc(n*sizeof(int));
	
	Min(t,n,&M1,posMin,&m1);
	Max(t,n,&M2,posMax,&m2);
	
	printf("le Min est : %d ... position : ",M1);affichage(posMin,m1);
	
	printf("\nle Max est : %d ... position :  ",M2);affichage(posMax,m2);
	
	
	
	
	
	
	
	
	system("pause");
}
