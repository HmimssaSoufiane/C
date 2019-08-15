#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	{
		int *m,i=-3;
		m=&i;
		i*=i++;
		printf("m=%d\n",*m);
	}
	{
		printf("%f\n",pow(3,2/5));
		printf("%d\n",pow(3,2/5));		
	}
	
	
	return 0;
}
