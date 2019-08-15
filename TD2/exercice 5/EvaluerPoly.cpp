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

double evaluerPoly (double *t,int n,double x)
{
	int i;
	double s=0;
	
	for(i=0;i<n;i++)
		s+=t[i]*pow(x,i);
	return s;
	
}





int main()
{

	double *t,x;
	int n;
	
	t=saisirPoly(&n);
	affichePoly(t,n);
	printf("\n\n");
	printf("donner x : ");scanf("%lf",&x);

	printf(" P ( %.2f ) = %.2f ",x,evaluerPoly(t,n,x));
	
	
	printf("\n\n");
	system("pause");
}
