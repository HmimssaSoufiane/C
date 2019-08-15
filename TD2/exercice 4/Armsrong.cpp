#include<stdio.h>
#include<stdlib.h>
#include<Math.h>



void affichage(int *t,int n)
{
	int i;
	for(i=0;i<n;i++)
			printf(" %d \t",t[i]);
	
	printf("\n\n");
}


int * decomp(int n,int*i)
{
	
	int *t,m;
	*i=0;
	double b=(log10(n+1))+1;
	m=b ;
	
	t= (int*)malloc(m*sizeof(int));
	
	while(n!=0)
	{
			
		t[(*i)++]=n%10;
		n/=10;
	
		
	}
	return t;	
}


int armsrong(int nbr)
{
	
	int i,*t,n,s=0;
	t=decomp(nbr,&n);
	
	for(i=0;i<n;i++)
		s+=t[i]*t[i]*t[i];
		
	if(s==nbr)
		return 1;
	return 0;
	
}

void listeArmsrong(int n)
{
	int i;

	for(i=1;i<=n;i++)
		if(armsrong(i))
			printf("%d \t",i);
	
	
}


int main()
{
	int nbr;

	printf("donner le nombre : ");scanf("%d",&nbr);
	printf("la liste des Nombres Armsong inferieur de %d : \n",nbr);
	
	listeArmsrong(nbr);
	

		
	
	
	
	
	
	
	printf("\n\n");
	system("pause");
}
