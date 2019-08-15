#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Element Element;
typedef struct Element* Arbre;

struct Element {
	int ID;
	struct Element * leftChild;
	struct Element * rightChild;

	
};

//---------------------
void padding ( char ch, int n );
void structure ( Arbre root, int level );
//---------------------
int is_empty(Element *A){
	
	return (A!=NULL);
}

//---------------------
Element*create(int ID){
	Element *e;
	e=(Element*)malloc(sizeof(Element));
 	e->ID=ID;
 	e->leftChild=NULL;
 	e->rightChild=NULL;

 	
 	return e;
}

//--------
void ajouterRecusive(Arbre *A, int ID){
 	
 	if(*A==NULL){		
	 	*A=create(ID);
		return;
	 }	
	if( ID > (*A)->ID)
		ajouterRecusive((&(*A)->rightChild),ID);
	else 
		ajouterRecusive((&(*A)->leftChild),ID);
	
 	
 }
 
 
//--------
Element* ajouter(Arbre A, int ID){
 	
 	Element *tmp=A;
 	
	Element *indice;
	


 	if(A==NULL)	
		return  create(ID);
 	else 
 		while(tmp!=NULL){
 			indice=tmp;
 			if(ID>tmp->ID) tmp=tmp->rightChild;
 			else tmp=tmp->leftChild;
		}
		
	if(ID>indice->ID)indice->rightChild=create(ID);
	else indice->leftChild=create(ID);
	
	return  A;
 	
 }
 
//--------
void prefixe(Arbre A)
{
    int i;
    if(A){    
		printf("[%d]\n", A->ID);
		prefixe(A->leftChild);
		prefixe(A->rightChild);
	}
}
//-----------------

//-----------------
int main(int argc, char *argv[]) {
	Element *Arbre;
	Arbre=NULL;
 
	/*
	Element *e_1=create(1);
	Element *e_2=create(2);
	Element *e_3=create(3);
	Element *e_4=create(4);
	Element *e_5=create(5);
	Element *e_6=create(6);
	Element *e_7=create(7);
	Element *e_8=create(8);
	Element *e_9=create(9);
	Element *e_10=create(10);
	
	Arbre=e_1;
	e_1->leftChild=e_2;
	e_1->rightChild=e_3;
	
	e_2->leftChild=e_4;
	e_2->rightChild=e_5;
	
	e_3->leftChild=e_6;
	e_3->rightChild=e_7;
	e_5->leftChild=e_8;
	e_7->leftChild=e_9;
	e_7->leftChild=e_10;
	*/
	Arbre=ajouter(Arbre,1);
	Arbre=ajouter(Arbre,2);
	Arbre=ajouter(Arbre,3);
	Arbre=ajouter(Arbre,0);
	Arbre=ajouter(Arbre,4);
	Arbre=ajouter(Arbre,7);
	Arbre=ajouter(Arbre,4);
	Arbre=ajouter(Arbre,8);

	
	//prefixe(Arbre);
	printf("\n");
	structure(Arbre,7);

 
	






	return 0;
}


void padding ( char ch, int n )
{
  int i;
  for ( i = 0; i < n; i++ )
    putchar ( ch );
}
void structure ( Arbre root, int level )
{
  int i;
  if ( root == NULL ) {
    padding ( '\t', level );
    puts ( "~" );
  }
  else {
    structure ( root->rightChild, level + 1 );
    padding ( '\t', level );
    printf ( "%d -----|\n", root->ID );
    structure ( root->leftChild, level + 1 );
  }
}
