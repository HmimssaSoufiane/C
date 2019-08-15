#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50

void MajToMin_MinToMaj(char *ch)
{
	while(*ch)
	{
		if(*ch >= 'A' && *ch <= 'Z')
		{
			*ch='a'+(*ch-'A');
			*ch++;
		}
		else{
			*ch='A'+(*ch-'a');
			*ch++;
		}
	}
	
}


int main()
{
	char *ch;
	
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	
	MajToMin_MinToMaj(ch);
	
	puts(ch);	
	
	
	printf("\n\n");
	system("pause");
}
