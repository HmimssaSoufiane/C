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
		if(t[i]!=0)
		{
			if(t[i]!=1 || (i==0 && t[i]==1))
				printf("%+.2f  ",t[i]);
						
			if(i!=0)
			{
			if(i==1)
			 	printf("x");
			else 
				printf("x^%d",i);
			}
			
			printf("\t");
			
		}
	}

}

void soustractionPoly(double *p1,int *n1,double *p4,int n4)
{
	
	int i,j;
	i=j=0;
	while(i<*n1)
		p1[i]=p1[i++]-p4[j++];
	
   (*n1)--;
	
}

void produitPolyParMonome(double *p2,int n2,double *p4,int n4,double coeff,int deg)
{
	
	int i;
	for(i=0;i<n2;i++)
		p4[ i +deg]=coeff*p2[i];

	for(i=0;i<deg;i++)
		p4[i]=0;
	
}

void divisioneuclidiennePoly(double *p1,int *n1,double *p2,int n2,double *p3,int n3)
{
	
	double *p4;
	int n4 , i=*n1-1 ,  j=n2-1 , k=n3-1 ;
	
	p4=(double*)malloc((*n1)*sizeof(double));
	
	while( j<=i )
	{
		p3[k]=p1[i--]/p2[j];
		n4=j+k;
		produitPolyParMonome(p2,n2,p4,n4,p3[k],k);
		soustractionPoly(p1,n1,p4,n4);
		k--;
		
	} 
	
}





int main()
{

	double *p1,*p2,*p3;
	int n1,n2,n3;
	
	printf("saisi poly 1 : \n");p1=saisirPoly(&n1);
	printf("saisi poly 2 : \n");p2=saisirPoly(&n2);
	
	printf("Affiche  poly 1 : \n");affichePoly(p1,n1);printf("\n\n");
	printf("Affiche  poly 2 : \n");affichePoly(p2,n2);printf("\n\n");
	

	n3=n1-n2+1;
	p3=(double*)malloc(n3*sizeof(double));
	
	printf("la division euclidienne de Poly 1 sur Poly 2 est  : \n");
	divisioneuclidiennePoly(p1,&n1,p2,n2,p3,n3);
	affichePoly(p3,n3);printf("\n\n");
	
	printf("et le reste est :  \n");
	
	affichePoly(p1,n1);printf("\n\n");
	
	
	
	printf("\n\n");
	system("pause");
}
