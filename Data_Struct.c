#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//typedef struct Person :also work 
typedef struct {
	int id;
	char*name;
}Person;
struct Animals{
	int id;
	char*name;
	
}animal_1={578,"Dogy"},
	animal_2={875,"Roky"},
	animal_3={984,"Mely"};
	
struct Things{
	int id;
	char name[];
}thing_1={65,"Rock"};

int main(int argc, char *argv[]) {
	
	Person persone_1={
		548,
		"soufiane"
	};
	printf("person ID %d and name %s\n",persone_1.id,persone_1.name);
	printf("animal ID %d and name %s\n",animal_1.id,animal_1.name);
	
	animal_3.id=30;
	animal_3.name="Moly";
	
	printf("animal ID %d and name %s\n",animal_3.id,animal_3.name);
	// errur thing_1.name="Rocket";
	// fixed
	strcpy(thing_1.name,"Rocket");
	printf("thing ID %d and name %s\n",thing_1.id,thing_1.name);


	
	// errur int tab[];
	// errur int *tab={0,1};
	// correct char *tab="soufiane";

	
	int *tab=0;
	return 0;
}
