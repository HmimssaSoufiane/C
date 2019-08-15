#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Animal{
	int id;
	char *name;
	 
}Animal;
int main(int argc, char *argv[]) {
	Animal *animal_pointer,animal_1;
	
	animal_pointer=&animal_1;
	animal_pointer->id=17;
	animal_pointer->name="Rockey";
	animal_pointer->name="Moley";

	
	printf("animal ID %d and name %s\n",animal_1.id,animal_1.name);
	printf("animal ID %d and name %s affichage by Pointer\n",
			animal_pointer->id,
			animal_pointer->name
		);
	



	
	
	
	return 0;
}
