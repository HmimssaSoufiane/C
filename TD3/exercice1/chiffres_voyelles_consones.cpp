#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50



void nombres(char *ch,int *chiffres,int *voyelles_m,int *consonnes_M)
{
	*chiffres=*voyelles_m=*consonnes_M=0;
	while(*ch)
	{
		if( *ch >='0' && *ch<= '9')
			(*chiffres)++;
		else if( *ch =='a' || *ch=='e' || *ch=='y' || *ch=='u'|| *ch=='i' || *ch=='o')
			(*voyelles_m)++;
		else if(*ch >='A' && *ch <= 'Z' )
		{
			if(*ch != 'A' && *ch != 'E' &&*ch != 'Y' &&*ch != 'U' &&*ch != 'I' &&*ch != 'O' )
				(*consonnes_M)++;
		}
	*ch++;
		
	}
	
	
}


int main()
{
	char *ch;
	int chiffres,voyelles_m,consonnes_M;
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	nombres(ch,&chiffres,&voyelles_m,&consonnes_M);
	printf(" chiffres : %d \n voyelles minuscules : %d\n consonnes majuscules : %d \n",chiffres,voyelles_m,consonnes_M);
	
	
	
	printf("\n\n");
	system("pause");
}
