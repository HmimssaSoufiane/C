#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char string[]="hello world";
	int N=2;
	//int entiers[3];
	//entiers[3]=3;
	//printf("%s", entiers[3]);
	int *p=NULL;
	p=(int*)malloc(sizeof(int)*2);
 
	printf("%d\n",sizeof(string));
	free(p);
	printf("\n");
	return 0;
}
