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

void produitMatrice(int **m1,int l,int c,int **m2,int c2,int **m3)
{
	int i,j,k;
	
	for(i=0;i<l;i++)
		for(k=0;k<c2;k++)
		{
			m3[i][k]=0;
			for(j=0;j<c;j++)
				m3[i][k] += m1[i][j]*m2[j][k];
		}
	
}





int main()
{

	int **Mat,**Mat2,**Mat3,l,c,c2;

	printf("donne le nombre ligne de Matrice 1 : ");scanf("%d",&l);
	printf("donne le nombre colonne de Matrice 1 /nombre de ligne de matrice 2  : ");scanf("%d",&c);
	printf("donne le nombre colonne de Matrice 2 : ");scanf("%d",&c2);
	

	Mat=MallocMatrice(l,c);
	Mat2=MallocMatrice(c,c2);
	Mat3=MallocMatrice(l,c2);
	
	printf("saisir matrice 1 : \n");	saisirMatrice(Mat,l,c);
	printf("saisir matrice 2 : \n");	saisirMatrice(Mat2,c,c2);
	
	printf("\nAffichage de  matrice 1 : \n");	afficheMatrice(Mat,l,c);
	printf("\nAffichage de  matrice 2 : \n");	afficheMatrice(Mat2,c,c2);
	
	produitMatrice(Mat,l,c,Mat2,c2,Mat3);

	printf("\nAffichage de  matrice 3 : \n");	afficheMatrice(Mat3,l,c2);
	
	
	printf("\n\n");
	system("pause");
}
