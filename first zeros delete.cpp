#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t[10]={0,0,0,3,5,4,0,0,5,0},flag=0,i=0,cmp=0;
	do{
		if(t[0]==0){
			for(i=0;i<10-cmp;i++){
				t[i]=t[1+i];
			}
			cmp++;
		}else{
			flag=1;
		}
	}while(flag==0);
	for(i=0;i<10-cmp;i++){
		printf("%d,",t[i]);
	}





	
	return 0;
}
