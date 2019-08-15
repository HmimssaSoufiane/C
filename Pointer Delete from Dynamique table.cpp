#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *Tab,N;
	int i;
	printf("Donner la taille initiale : ");
	scanf("%d",&N);
	Tab=(int*)calloc(N,sizeof(int));
	for( i=0;i<N;i++){
		printf("T[%d]= ",i+1);
		scanf("%d",(Tab+i));
	}
	printf("\ntable taille I=%d\n",i+1);
	for(i=0;i<N;i++){
		printf("T[%d]=%d ",i+1,*(Tab+i));
	}
	int Addmore=0;
	printf("\nsi vous voulez saisie une autre valeur taper votre valeur si non taper cette 00 : ");
	scanf("%d",&Addmore);
	
	if(Addmore!=00){
		N=N+1;
		Tab=(int*)realloc(Tab,N*sizeof(int));
		*(Tab+(i++))=Addmore;
		
		for(i=0;i<N;i++){
		printf("T[%d]=%d ",i+1,*(Tab+i));}
	}
	Int yes=00;
	printf("\nsi vous voulez saisie une autre valeur taper votre valeur avec ca position si non taper cette 00 : ");
	scanf("%d",&yes);
	if(yes!=00){
		N=N+1;
		Tab=(int*)realloc(Tab,N*sizeof(int));
		printf("\nsi vous voulez saisie ca position : ");
		scanf("%d",&yes);
		if(yes<N){
			int cell;
			for(i=yes;i>=yes;i--){
				cell=T[i];
				T[i-1]=Case;
			}
			
			for(i=0;i<N;i++){
			printf("T[%d]=%d ",i+1,*(Tab+i));}
		}else{
			printf("Error");
		}
	}

	
	return 0;
}
