#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


int NbrEgal(char *ch,char x,char y)
{

	int i=0,j=0;
	while(*ch)
	{
		if(*ch==x)
			i++;
		if(*ch==y)
			j++;
	*ch++;
	}
	if(i==j)
		return 1;
	return 0;


	
}


int main()
{
	char *ch,x,y;
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	printf("donner x : ");scanf(" %c",&x);
	printf("donner y : ");scanf(" %c",&y);
	puts(ch);
		
	if(NbrEgal(ch,x,y))
		printf("votre chaine de caracters contient %c et %c en nombre egal !!\n ",x,y);
	else
		printf("votre chaine de caracters contient %c et %c en nombre diffirent !!\n ",x,y);
	
	printf("\n\n");
	system("pause");
}
