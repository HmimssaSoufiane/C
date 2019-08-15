#include<stdio.h>
#include<stdlib.h>


typedef struct pile{
	int e;
	struct pile *s;
}Pile;

Pile* emplier(pile *p,int b){
    
	Pile *np=(Pile*)malloc(sizeof(pile));
  	np-> e=b;
  	if(p==NULL)
  		np-> s=NULL;
  	else 
  	np-> s=p;
  	return np;
}

Pile* decimal2banrie(int n){
	pile *p=NULL;
	int res,i=0;

	if(n > 0){
     	do{
     	    res=n%2;
     		n=n/2;
     	     p=emplier(p,res);
     		i++;
	 	 }while(n != 0);
	  return p;
    }
}
/*
void binaire2(pile *debut){
	
	pile *temp;
	 if(debut == NULL)
	      printf("la list est vide");
	  else{
	  	while(temp != NULL){
	  		printf("%d",temp->e);
	  		temp=temp->s;
		  }
	  }    
}
*/
void binaire(int n){
	pile *l;
    l=decimal2banrie(n);
	 if(l == NULL)
	      printf("la list est vide");
	  else{
	  	while(l != NULL){
	  		printf("%d",l->e);
	  		l=l->s;
		  }
	  }    
}




int main(void){
	int nb;
    
	printf("value :");
	scanf("%d",&nb);
    binaire(nb);
    
	
	return 0;
}
