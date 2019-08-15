#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int t[3],i=0,*p=&t[3];
	for(;i<3;i++)t[i]=1;*(t+1)=7;*(p-1)=4;
	printf("[%d%d%d]\n",t[0],t[i-1],*(p-1));

	printf("%f\n",pow(3,2/5));
	printf("%f\n",(2/5));
	printf("%f\n",(double)2/5);
	
	return 0;
}
