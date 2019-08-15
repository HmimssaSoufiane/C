#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Animal{
	int id;
	char *name;
	struct Animal *next;
	 
}Animal;
Animal* Insert_on_header(Animal *first_animal ){ 
	Animal *ele;
	
	ele=(Animal*)malloc(sizeof(Animal)); 

	printf("Entrer animal name ");
	gets(ele->name);// scanf("%s",&&ele->name); not work
	printf("Entrer animal ID ");
	scanf("%d",&ele->id);
	ele->next=first_animal;
	first_animal=ele;
	
	printf("animal ID %d and name %s affichage by Pointer\n",
			ele->id,
			ele->name
		);
	
	return ele;
	
}

Animal* Insert_on_queue(Animal *new_animal ){ 
		Animal *ele,*currant;  
	
	ele=(Animal*)malloc(sizeof(Animal)); 

	printf("Entrer animal name ");
	gets(ele->name);// scanf("%s",&&ele->name); not work
	printf("Entrer animal ID ");
	scanf("%d",&ele->id);
	ele->next=first_animal;
	first_animal=ele;
	
	printf("animal ID %d and name %s affichage by Pointer\n",
			ele->id,
			ele->name
		);
	
	return ele;
	
}

int main(int argc, char *argv[]) { 
	int *Animal=Insert_on_header();
	return 0;
}
