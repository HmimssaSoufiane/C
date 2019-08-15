#include<stdio.h>
#include<stdlib.h>

void afficheMt(int **t,int n)
{
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%d\t",t[i][j]);
		printf("\n");
	}
}

int combi(int n,int k)
{
	int **p,i,j;
	p=(int **)malloc((n+1)*sizeof(int*));
	for(i=0;i<=n;i++)
		p[i]=(int *)malloc((i+1)*sizeof(int));
		
	for(i=0;i<=n;i++)
	{
		p[i][0]=1;
		p[i][i]=1;
	}
	for(i=2;i<=n;i++)
		for(j=1;j<i;j++)
			p[i][j]=p[i-1][j-1]+p[i-1][j];
	
	afficheMt(p,n);		
	return p[n][k];
}


int main(){
	
	int n,k,comb;
	
	printf("donner n :");scanf("%d",&n);
	printf("donner k :");scanf("%d",&k);
	
	comb=combi(n,k);
	printf("combinaison : %d \n",comb);
	
	system("pause");
	
	
}
