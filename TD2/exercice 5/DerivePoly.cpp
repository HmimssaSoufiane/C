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

void derivePoly(double *p1,double *p2,int n)
{
	int i;
	
	for(i=1;i<n+1;i++)
		p2[i-1]=p1[i]*i;
	
}


int main()
{

	double *p1,*p2;
	int n1,n2;
	
	p1=saisirPoly(&n1);
	affichePoly(p1,n1);
	printf("\n\n");
	
	n2=n1-1;
	p2=(double*)malloc(n2*sizeof(double));
	
	derivePoly(p1,p2,n2);
	
	affichePoly(p2,n2);
	
	
	
	
	
	
	printf("\n\n");
	system("pause");
}
