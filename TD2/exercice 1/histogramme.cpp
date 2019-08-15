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

void compris (int *t,int n,int *t2,int *m,int x,int y)
{
	
	int i,j,p=0;
	*m=0;
	
	for(i=0;i<n;i++)
	{
		if(t[i]>=x && t[i]<=y)
		{
			if(*m==0)
				t2[(*m)++]=t[i];
			else{
				p=0;
				for(j=0;j<*m;j++)
				{
					if(t[j]==t[i])
					{
						p=1;
						break;
					}
				}
				if(p==0)
					t2[(*m)++]=t[i];
			}
		}

	}
}

/////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////

int nbrocc(int *t,int n,int v)
{
	int i,nbrocc=0;
	
	for(i=0;i<n;i++)
	{
		if(t[i]==v)
			nbrocc++;
	}
	return nbrocc;
}

int existe (int *t,int n, int v)
{
	int i;
	if(n==0) return 0;
	for(i=0;i<n;i++)
	{
		if(t[i]==v)
			return 1;
	}
	return 0;
}

/*
void histogramme (int *t,int n)
{
	int i,j,m=0,nbr;
	int *t2;
	t2= (int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
	{
		if(!existe(t2,m,t[i]))
		{
			t2[m++]=t[i];
			nbr=nbrocc(t,n,t[i]);
			printf("%d | ",t[i]);
			for(j=0;j<nbr;j++)
				printf("*");
		 printf("\n");
		}
		
	}
	
}
*/

void histogramme (int *t,int n,int x,int y)
{
	int i,j,m=0,nbr;
	int *t2;
	t2= (int*)malloc(n*sizeof(int));
	
	compris(t,n,t2,&m,x,y);

	for(i=0;i<m;i++)
	{
		nbr=nbrocc(t,n,t2[i]);
		printf("%d | ",t2[i]);
		for(j=0;j<nbr;j++)
			printf("*");
		printf("\n");
	}
	
}

int main()
{
	int *t,n;
	n=8;
	t=remplir(n);
	
	//affichage(t,n);
	//histogramme(t,n);
	
	int x,y;
	printf("donner x : ");scanf("%d",&x);
	printf("donner y : ");scanf("%d",&y);

	histogramme(t,n,x,y);

	
	
	printf("\n\n");
	
	
	
	
	
	
	
	system("pause");
}
