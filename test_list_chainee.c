#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Element Element;

struct Element {
	int contenu;
	Element * suivant;
};
//---------------------
Element*create(int a){
	Element *e;
	e=(Element*)malloc(sizeof(Element));
 	e->contenu=a;
 	e->suivant=NULL;
 	return e;
}
int est_vide(Element *L){
	return (L!=NULL);
}
//---------------------
void display_element(Element **e){
	printf(
		"sa adresse est %p | s\'il pointer sur= %p  | ->contenu =%d  | ->next= %p |\n",
		&(*e),
		*e,
		(*e)->contenu,
		(*e)->suivant	
	);
}
void display_elements(Element **L){
 	while(*L!=NULL){
		display_element(L);
		*L=(*L)->suivant;
	}
}

//--------
Element*ajouter_enfin(int contenu, Element *L){
	
	
}
int main(int argc, char *argv[]) {
	Element *e_1,*e_2,*e_3,*e_4;
	
	e_1=create(1);
	display_element(&e_1);
	
	e_2=create(2);
	display_element(&e_2);

	e_3=create(5);
	display_element(&e_3);
	
	e_4=create(7);
	display_element(&e_4);
	
	
	e_1->suivant=e_2;
	e_2->suivant=e_3;
	e_3->suivant=e_4;
	   
	printf("------1--------\n");
	
	Element *L ;
	L=e_1;
	
	printf("------2--------\n");
	display_elements(&L);
	printf("------3--------\n");
	display_element(&L);
	
	printf("\n");
	printf(
		"sa adresse est %p | s\'il pointer sur= %p  | ->contenu =%d  | ->next= %p |\n",
		&L,
		L,
		L->contenu,
		L->suivant	
	);
	
	//display_elements(&L);	
	//printf("------2--------\n");
	//display_element(L);
	//printf("------3--------\n");	
	//display_elements(&L);



	return 0;
}
