#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int*A,*B;
	/*
	A=(int*)malloc(sizeof(int)*3);
	printf("Adresse de A %p",A);
	printf("\nAdresse de B %p",B);
	B=(int*)realloc(A,sizeof(int)*3);
	printf("\nAdresse de B %p",B);
	printf("\nAdresse de A %p",A);
	*/
	A=malloc(sizeof(int)*-);
	printf("Adresse de A %p\n",A);
	printf("Adresse de A %p\n",&A);

	printf("Adresse de B %p",B);
	B=calloc(3,sizeof(int));
	printf("\nAdresse de B %p",B);
	printf("\nAdresse de A %p",A);
	
	free(A);
	free(B); 


	
	
	return 0;
}
