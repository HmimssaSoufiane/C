#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define N 50


void MaxMin(char *ch,char *min,char *max)
{

*min=*max=*ch++;
while(*ch)
{
	if(*ch>*max)
		*max=*ch;
	else if(*ch<*min)
		*min=*ch;
	*ch++;
}

	
}


int main()
{
	char *ch,min,max;
	int n;
	
	ch=(char *)malloc(N*sizeof(char));
	printf("donner une chaine de caracters : ");
	gets(ch);
	puts(ch);
	MaxMin(ch,&min,&max);
	
	printf("Min= %c \n Max= %c \n\n",min,max);	
	
	
	
	printf("\n\n");
	system("pause");
}
