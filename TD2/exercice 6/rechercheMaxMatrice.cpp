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

void rechercheMaxMatrice(int **M,int l,int c ,int **pos,int *l2, int *Max)
{
	
	int i,j;
	*Max=M[0][0];
	*l2=0;
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			if( M[i][j] > *Max  )
			{
				*l2=0;
				*Max=M[i][j];
				pos[*l2][0] = i ;
				pos[(*l2)++][1] = j ;
			} 
			else if( M[i][j] == *Max)
			{
				pos[*l2][0] = i ;
				pos[(*l2)++][1] = j ;
				
			}
		}
		
	}
	
}




int main()
{

	int **Mat,l=3,c=3,**pos,l2,Max;

	Mat=MallocMatrice(l,c);
	Mat[0][0]=1; Mat[0][1]=2; Mat[0][2]=2;
	Mat[1][0]=5; Mat[1][1]=3; Mat[1][2]=5;
	Mat[2][0]=2; Mat[2][1]=5; Mat[2][2]=1;
		
	afficheMatrice(Mat,l,c);
	
	pos=MallocMatrice(l*c,2);
	rechercheMaxMatrice(Mat,l,c,pos,&l2,&Max);
	
	printf("le max est : %d \n les potions : \n",Max);
	afficheMatrice(pos,l2,2);
	
	
	printf("\n\n");
	system("pause");
}
