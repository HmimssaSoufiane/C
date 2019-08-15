#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float viete(int n,float r)
{
	if(n==0)
		return sqrt(2)/2;
	
	return (sqrt(2+r)/2) * viete ( n-1 , sqrt(2+r) );
	
}



int main()
{
	
	int n,i;
	float r = sqrt(2) ;
	
	printf("donne le nombre d'iteration : ");scanf("%d",&n);
	
	r=viete(n,r);
	
	r=2/r;
	
	printf("Pi = %f \n\n",r);
	
	system("pause");
	
	
	
}
