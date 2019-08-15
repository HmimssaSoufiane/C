#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,n=0;
	scanf("%d",	&a);
	do{
		a=a/10;
		n++;
	}while(a!=0);
	printf("%d\n",n);





	
	return 0;
}
