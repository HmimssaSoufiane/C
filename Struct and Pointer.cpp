#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct personne{
	char Nom[30];
 	struct personne *next;  
} p,*liste;

liste initialise_liste(){
	liste L=(liste)malloc(sizeof(p));
	printf("Donner la premier valeur: ");
	scanf("%s",&(L->Nom));//(*L).Nom
	L->next=NULL;
	retun L;
}
int main(int argc, char *argv[]) {

	liste L=initialise_liste();
	p *x=L;
	p *z=NULL;
	
	int i; 




	
	return 0;
}
