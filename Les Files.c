#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*                                                                                                                                           */ 
/*******************____ Les Files FIFO � First In First Out � ____***********************/ 
/*                                                                                                                                           */

//La d�claration d'une File  d'entiers :
//______________________________________
 typedef struct element2
  {
  	int v;
  	struct element2 *nxt;
  }element2,*file;
//______________________________________________________________________________________________________________________________________________  
//Fonction 1: Enfiler (ajouter en fin :
//______________________________________________________________________________________________________________________________________________
 file enfiler(file f,int n)
  {
  	file tmp=f;
  	file nf=(file)malloc(sizeof(element2));
  	 nf->v=n;
  	 nf->nxt=NULL;
  	  if(f==NULL)
  	   return nf;
  	  while(tmp->nxt!=NULL)
  	   tmp=tmp->nxt;
  	 nf->nxt=tmp;
  	return f;
  }
//______________________________________________________________________________________________________________________________________________
//Fonction 2: Defiler (supprimer en tete) :  
//______________________________________________________________________________________________________________________________________________   
 file defiler(file f)
  {
  	file tmp=f;
  	 if(f!=NULL)
  	  {
  	  	f=tmp->nxt;
  	  	free(tmp);
	  }
	return f;
  }  
//______________________________________________________________________________________________________________________________________________
//Fonction 3: Affichage :
//______________________________________________________________________________________________________________________________________________
 void afficher_file(file f)
  {
  	file tmp=f;
  	 while(tmp!=NULL)
  	  {
  	  	printf("%d\t",tmp->v);
  	  	tmp=tmp->nxt;
	  }
  }
//______________________________________________________________________________________________________________________________________________
//Fonction 4: Valeur de la t�te :
//______________________________________________________________________________________________________________________________________________ 
 int tete_file(file f)
  {
  	return f->v;
  }
//______________________________________________________________________________________________________________________________________________
//Fonction 5: Valeur de la queue :  
//______________________________________________________________________________________________________________________________________________    
 int queue_file(file f)
  {
  	while(f->nxt!=NULL)
  	 f=f->nxt;
  	return f->v;
  }
//______________________________________________________________________________________________________________________________________________
//Fonction 6:  Vider_file :
//______________________________________________________________________________________________________________________________________________ 
 file vider_file(file f) 
  {
  	while(f!=NULL)
  	 f=defiler(f);
  	return f;
  }
//______________________________________________________________________________________________________________________________________________
/**********************************************************************************************************************************************/  
