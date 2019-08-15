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

void saisirMatrice(int **M,int l,int c)
{
	int i,j;
	
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("donner MAT[%d][%d]= ",i,j);
			scanf("%d",&M[i][j]);
		}
	}
	
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




int main()
{

	int **Mat,l,c;
	
	printf("donne le nombre ligne : ");scanf("%d",&l);
	printf("donne le nombre colonne  : ");scanf("%d",&c);
	Mat=MallocMatrice(l,c);
	saisirMatrice(Mat,l,c);
	afficheMatrice(Mat,l,c);
	
	
	
	printf("\n\n");
	system("pause");
}
