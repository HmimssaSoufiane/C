#include<stdio.h>
#include<stdlib.h>
#include<Math.h>
#include<string.h>



void affichage(char *t)
{

	int i;
	for(i=strlen(t)-1;i>=0;i--)
		printf("%c",t[i]);
	
	printf("\n\n");
}

int baseAtobase10(int baseA,char *nbr)
{
	int nbr10=0,l,i;
	l=strlen(nbr);
	
	for(i=l-1;i>=0;i--)
	{
		if(nbr[i] >= 'A' && nbr[i] <= 'Z')
		{
			nbr10+=pow(baseA,l-1-i)*(nbr[i]-'A'+10);
		}
		else if(nbr[i] >= 'a' && nbr[i] <= 'z')
		{
			nbr10+=pow(baseA,l-1-i)*(nbr[i]-'a'+10);
		}
		else{
			nbr10+=pow(baseA,l-1-i)*(nbr[i]-'0');
		}
	}
	return nbr10;
	
	
	
}

void base10tobaseB(int baseB,char *t,int nbr)
{
	int n=0;	
	while(nbr!=0)
	{
		if(nbr%baseB<=9)
			t[n++]='0'+ nbr%baseB;
		else
			t[n++]='A'+(nbr%baseB-10);
		nbr/=baseB;
		
		
	}
	t[n]='\0';
	
	
	
}








int main()
{
	int NN=50;
	int n,baseA,baseB;
	char *t;
	char *nbr;
	
	do{

	printf("donner la base A  : ");scanf("%d",&baseA);
	printf("donner la base B  : ");scanf("%d",&baseB);
	}while(baseA > 36 || baseB > 36);
	
	nbr=(char*)malloc( NN*sizeof(char));
	t=(char*)malloc( NN*sizeof(char));
	printf("donner le nombre a converti  : ");scanf("%s",nbr);
	
	
	printf("\n");
	n=baseAtobase10(baseA,nbr);
	
	
	printf("base 10 : %d\n",n);
	printf("base %d : ",baseB);
	
	base10tobaseB(baseB,t,n);
		
	affichage(t);
	
	
	
	
	
	printf("\n\n");
	system("pause");
}
