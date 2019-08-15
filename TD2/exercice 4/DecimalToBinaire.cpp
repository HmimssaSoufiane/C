#include<stdio.h>
#include<stdlib.h>
#include<Math.h>


void affichage(int *t,int n)
{
	int i;
	for(i=n-1;i>=00;i--)
			printf(" %d \t",t[i]);
	
	printf("\n\n");
}

void DecimalToBinaire(int nbr,int *t,int *n)
{
	*n=0;
	while(nbr!=0)
	{
		t[(*n)++]=nbr%2;
		nbr/=2;
		
	}
	
	
	
}

int main()
{
	int n,*t,nbr;
	
	printf("donner le nombre a converti  : ");scanf("%d",&nbr);

	t=(int *)malloc( (log(n+1)+1)*sizeof(int));

	DecimalToBinaire(nbr,t,&n);

	printf("\n");
	affichage(t,n);
		
	
	
	
	
	
	
	printf("\n\n");
	system("pause");
}
