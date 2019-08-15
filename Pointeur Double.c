#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=3,*p1,**p2,***p3;
	p1=&a;
	p2=&p1;
	p3=&p2;
	
	printf("   &a=%d\n",&a);
	printf("   p1=%d\n",p1);
	
	printf("   &p=%d\n",&p1);
	printf("   p2=%d\n",p2);
	printf("  *p2=%d\n",*p2);
	printf(" **p2=%d\n",**p2);
	printf("***p3=%d\n",***p3);




	
	return 0;
}
