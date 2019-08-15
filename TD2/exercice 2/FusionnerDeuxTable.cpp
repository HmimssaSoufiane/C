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


void fusionner (int *t,int n,int *t2,int n2,int *t3)
{

	int i=0,j=0,k=0;
	
	while(i<n || j<n2)
	{
		if(i==n)
			t3[k++]=t2[j++];
		else if (j==n2)
			t3[k++]=t[i++];
		
		else if(t[i]<t2[j])
		
			t3[k++]=t[i++];
		else
			t3[k++]=t2[j++];
		
	}
	
	
}

int main()
{
	int *t,n,*t2,n2,*t3,n3;



	printf("donner la taille de tableau 1 :");scanf("%d",&n);
	t=remplir(n);
	printf("donner la taille de tableau 2 :");scanf("%d",&n2);
	t2=remplir(n2);
	
		
	n3=n+n2;


	t3= (int*)malloc(n3*sizeof(int));
	
	affichage(t,n);
	printf("\n\n");
	affichage(t2,n2);
	printf("\n\n");
	fusionner(t,n,t2,n2,t3);
	
	
	affichage(t3,n3);
	printf("\n\n");
	
	
	
	
	
	system("pause");
}
