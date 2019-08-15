#include<stdio.h>
#include<stdlib.h>
#include<Math.h>



double * saisirPoly(int *n)
{

	double *t;
	int deg,i;
	
	printf("donne le degree de polynome : ");scanf("%d",&deg);
	t=(double*)malloc((deg+1)*sizeof(double));
	
	for(i=0;i<deg+1;i++)
	{
		printf("donee le coeff de degree %d : ",i);
		scanf("%lf",&t[i]);
	}
	*n=i;
	return t;	

}

void affichePoly(double *t,int n)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		printf("%+.2f x^%d ",t[i],i);
	}

}






int main()
{

	double *t;
	int n;
	
	t=saisirPoly(&n);
	affichePoly(t,n);
	
	
	
	
	
	printf("\n\n");
	system("pause");
}
