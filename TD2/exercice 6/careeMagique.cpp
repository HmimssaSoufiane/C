#include<stdio.h>
#include<stdlib.h>
#include<Math.h>



int  ** MallocMatrice(int l,int c)
{

	int **t,i;
	
	t=(int **)malloc(l*sizeof(int *));
	
	for(i=0;i<l;i++)
		t[i]=(int *)malloc(c*sizeof(int));
	
	return t;


}

void afficheMatrice(int **M,int l,int c)
{
		int i,j;
	
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
			printf("%d\t",M[i][j]);
		
		printf("\n");
		
	}
	
}

int ** carreeMagique(int n)
{
	
	int **m,i,j,k;
	m=MallocMatrice(n,n);
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			m[i][j]=0;
			
	i=n-1;j=n/2;
	m[i][j]=1;
	
	for(k=2;k<=n*n;k++)
	{
		if(m[(i+1)%n][(j+1)%n] != 0 )
		{
			if(i!=0)
				i=i-1;
			else
				i=n-1;
		}
		else{
			i=(i+1)%n;
			j=(j+1)%n;
		}
		m[i][j]=k;
	}
	
	return m;
	
}




int main()
{

	int **Mat,n;
	
	printf("donne N : ");scanf("%d",&n);
	Mat=carreeMagique(n);
	
	afficheMatrice(Mat,n,n);
	
	
	
	printf("\n\n");
	system("pause");
}
