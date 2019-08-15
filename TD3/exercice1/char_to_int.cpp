#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


int char_to_int(char *ch)
{
	int i,s=0;
	
	for( i=0 ; i<strlen(ch) ; i++ )
		s+=( ch[i]-'0' )*pow(10,strlen(ch)-1-i);
	return s;
}


int main()
{
	char *ch;
	int nbr;
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	
	nbr=char_to_int(ch);	
	printf("%d",nbr);
	
	printf("\n\n");
	system("pause");
}
