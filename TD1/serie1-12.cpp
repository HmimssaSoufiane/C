#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	
	int n,i;
	float r = sqrt(2)/2 , t = sqrt(2);
	
	printf("donne le nombre d'iteration : ");scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		
		t=sqrt(2+t);
		r=r*t/2;
	}
	
	r=2/r;
	
	printf("Pi = %f \n\n",r);
	
	system("pause");
	
	
	
}
