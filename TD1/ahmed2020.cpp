#include<stdio.h>
#include<stdlib.h>
#include <string.h>


typedef struct student{
	char *nom;
	char *pernom;
	int  age;	
}student;

typedef struct list{
	int id;
	student student;
	list *next;
}list;

//afficher une liste
void afficher(list *l){
	list *temp=l;
	if(temp==NULL)
	   printf("la lise est vide");
	else{
	 	while(temp != NULL){
	 	 	printf("la lise est not vide\n");	
	 		printf("id = %id \nnom est :%s \nle prenom :%s  \nage :%d  \n=========  \n",
	 	   	temp->id,
	 	   	temp->student.nom,
	 	   	temp->student.pernom,
	 	   	temp->student.age
			);
	 		temp=temp->next;
		}
	}  
}

//ajouter au debut 

list * AjoutAuDebut(list *l,student s,int id){
	list *np=(list*)malloc(sizeof(list));
	
   	np->id=id;
	np->student.nom=s.nom;
	np->student.pernom=s.pernom;
	np->student.age=s.age;
	
  	if(l==NULL)
  		np-> next=NULL;
  	else 
  		np-> next=l;
  	return np;
	
 
}

int main(){
	
	list *L=NULL;
	int n,i,j=1;
    student S={(char*)"soufiane",(char*)"Mimis",20 };

	
 
	L=AjoutAuDebut(L,S,1);
 
    afficher(L);
 
   
   
	return 0;
}
