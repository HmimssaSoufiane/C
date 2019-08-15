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

int main()
{
	int *t,n,*t2,i,x,y,m;
	n=8;
	t=remplir(n);

	printf("donner x: ");scanf("%d",&x);
	printf("donner y: ");scanf("%d",&y);
	
	t2= (int*)malloc(n*sizeof(int));
	
	compris(t,n,t2,&m,x,y);
	
	affichage(t,n);
	printf("\n\n");
	
	affichage(t2,m);
	
	
	
	
	
	
	
	system("pause");
}
