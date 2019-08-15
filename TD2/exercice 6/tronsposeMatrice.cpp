#include<stdio.h>
#include<stdlib.h>
#include<Math.h>



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

int  ** MallocMatrice(int l,int c)
{

	int **t,i;
	
	t=(int **)malloc(l*sizeof(int *));
	
	for(i=0;i<l;i++)
		t[i]=(int *)malloc(c*sizeof(int));
	
	return t;


}

void tronsposeeMatrice(int **m,int l,int c,int **m2)
{
	int i,j;
	
	for(i=0;i<l;i++)
		for(j=0;j<c;j++)
			m2[j][i]=m[i][j];
	
}




int main()
{

	int **Mat,**Mat2,l,c;

	printf("donne le nombre ligne de Matrice  : ");scanf("%d",&l);
	printf("donne le nombre colonne de Matrice :");scanf("%d",&c);
	

	Mat=MallocMatrice(l,c);
	Mat2=MallocMatrice(c,l);
	
	printf("saisir matrice  : \n"); saisirMatrice(Mat,l,c);	
	printf("\nAffichage de  matrice  : \n"); afficheMatrice(Mat,l,c);
	
	
	tronsposeeMatrice(Mat,l,c,Mat2);
	printf("\nAffichage de  tronsposee de matrice  : \n");	afficheMatrice(Mat2,c,l);
	
	
	printf("\n\n");
	system("pause");
}
