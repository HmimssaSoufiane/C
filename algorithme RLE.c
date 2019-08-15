#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>




/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char tab[30],i,nbrOcc=0;
	printf("Ecrire votre chaine : ");
	scanf("%s",&tab);
	
	int chaineLen=strlen(tab);

	for(i=0;i<chaineLen;i++){
			if(tab[i]==tab[i+1]){
				nbrOcc++;
			}else {
				printf("%c%d",tab[i],nbrOcc+1);
				nbrOcc=0;
				continue;
			}
	}
		
	
	
	
	return 0;

}
