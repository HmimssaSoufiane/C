#include<stdio.h>
#include<stdlib.h>
#include<Math.h>



void affichage(int *t,int n)
{
	int i;
	for(i=0;i<n;i++)
		if(t[i]!=0)
			printf(" %d \t",t[i]);
	
	printf("\n\n");
}

void eratostheme(int *t,int n)
{
	int i,j=0,tmp;
	
	for(i=0;i<n;i++)
		t[j++]=i+1;
	
	for(i=1;i<=sqrt(n);i++)
		if(t[i]!=0)
		{
			tmp=t[i];
			for(j=i+1;j<n;j++)
				if(t[j]%tmp==0)
					t[j]=0;
			
		}
	
	
}

int main()
{
	int n,*t;
	
	printf("donner n : ");scanf("%d",&n);
	
	t= (int*)malloc(n*sizeof(int));
	eratostheme(t,n);
	affichage(t,n);
	
	
	
	
	
	
	
	
	
	
	printf("\n\n");
	system("pause");
}
