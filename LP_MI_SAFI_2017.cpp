#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Exercice 1) Algorithmr de compression RLE 

char* RLE(char tab[]){

	
	int chaineLen=strlen(tab);
	char *Out=(char*)malloc(sizeof(char));
	int i=0,k=0,nbrOcc=0;
	for(i=0;i<chaineLen;i++){
			if(tab[i]==tab[i+1]){
				nbrOcc++;
			}else {
				k+=2;
				Out=(char*)realloc(Out,sizeof(char)*(k));
				Out[k-2]=tab[i];
				Out[k-1]=(nbrOcc+1)+'0';
				
				nbrOcc=0;
				continue;
			}
		}
	return  Out;
}





//Exercice 2) Conversion du decimal vers le binaire


 typedef struct pile
  {
  	int e;
  	struct pile *s;
  } Pile;
  
//Fonction 1: Empiler (ajouter en tete) :

Pile* empiler(Pile *p,int n)
  {
	Pile *np=(Pile*)malloc(sizeof(pile));
  	np-> e=n;
  	if(p==NULL)
  		np-> s=NULL;
  	else 
  	np-> s=p;
  	return np;
  }
  
Pile* decimal2binaire(int n){
	if(n>0){
		Pile *tmp=NULL;
		while (n>0){
			tmp=empiler(tmp,n%2);
			n/=2;
 		}
 
		return tmp;
	}
}
//Fonction 3 Affichage :
 void binaire(int n)
  {
  		Pile *tmp=decimal2binaire(n);
	  	while(tmp!=NULL )
	  	  	{
	  	  		printf(" %d ",tmp->e);
	  	  		tmp=tmp->s;
		  	}
  }

int main(int argc, char *argv[]) {
	//Ex 1 test
	char *Out=RLE((char*)"EEEEEAAACCCCAAX");//
	printf("%s\n",Out);
	//------------------
	
	
	binaire(34);
	return 0;
}
