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

void sommePoly(double *p1,int n1,double *p2,int n2,double *p3,int n3)
{
	
	int i,j,k;
	i=j=k=0;
	while(k<n3)
	{
		if(i==n1)
			p3[k++]=p2[j++];
		else if(j==n2)
			p3[k++]=p1[i++];
		else 
			p3[k++]=p1[i++]+p2[j++];
	}
}





int main()
{

	double *p1,*p2,*p3;
	int n1,n2,n3;
	
	printf("saisi poly1:\n");p1=saisirPoly(&n1);
	printf("saisi poly2:\n");p2=saisirPoly(&n2);
	
	
	printf("poly1:");affichePoly(p1,n1);printf("\n\n");
	printf("poly2:");affichePoly(p2,n2);printf("\n\n");
	
	n3=n1>n2?n1:n2;
	p3=(double*)malloc(n3*sizeof(double));
	
	sommePoly(p1,n1,p2,n2,p3,n3);
	
	printf("poly1+poly2:");affichePoly(p3,n3);printf("\n\n");
	
	
	
	printf("\n\n");
	system("pause");
}
