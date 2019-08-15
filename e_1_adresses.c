#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Element {
	int contenu;
	struct Element * suivant;
};
typedef struct Element Element;

//---------------------
Element*create(int a){
	Element *e;
	e=(Element*)malloc(sizeof(Element));
 	e->contenu=a;
 	e->suivant=NULL;
 	return e;
}
int est_vide(Element *L){
	if (L!=NULL){
    return 1;
  }return  0;
}
//---------------------
void display_element(Element *e){
		printf(
		"sa adresse est %p | s\'il pointer sur= %p  | ->contenu =%d  | ->next= %p |\n",
		&e,
		e,
		e->contenu,
		e->suivant	
	);
}
void display_elements(Element *L){
 	while(L!=NULL){
		display_element(L);
		L=L->suivant;
	}
}
//--------
Element* ajouter_entet(int contenu, Element *L){
	
	Element *nouveau;
	nouveau=(Element*)malloc(sizeof(Element));
	nouveau->contenu=contenu;
	nouveau->suivant=L;	
	return nouveau;
}
//--------
Element* ajouter_enfin(int contenu, Element *L){


	Element *tmp;
	Element *indice;
	Element *nouveau;
	
	nouveau=(Element*)malloc(sizeof(Element));
	nouveau->contenu=contenu;
	nouveau->suivant=NULL;
	
	// 2 si la liste est vide, alors le nouveau va representer ma liste L
	
  	int testvide=est_vide(L);

	if(testvide==0){
		printf("\n%d\n",testvide);
		return nouveau;
	}else{
	// 3 attacher le nouveau element a ma liste L
		tmp=L;
		while(tmp!=NULL){
			indice=tmp;
			tmp=tmp->suivant;
		}
		indice->suivant=nouveau;
	// parcourer la liste ou dernier element
		testvide=est_vide(L);
		printf("\n%d\n",testvide);
	}	
  return L;
}
//-----------------
int main(int argc, char *argv[]) {
	Element *L;
	L=NULL;
	L=ajouter_enfin(1, L);
	L=ajouter_enfin(2, L);
	L=ajouter_enfin(3, L);
	L=ajouter_enfin(4, L);
	L=ajouter_entet(0, L);
	display_elements(L);





	return 0;
}
