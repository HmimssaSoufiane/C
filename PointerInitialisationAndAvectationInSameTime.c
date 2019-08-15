#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p,a=12;
	//p=&a;
	int *i=(int*)10; 
	//if(i==NULL)	printf("NULL\n");
	*i=300;
	printf("%d\n",i);
	printf("%d",*i);



	
	return 0;
}

