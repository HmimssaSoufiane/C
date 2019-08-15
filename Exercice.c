
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 300+1

// Q1: La fonction teste si une chaine de caracteres est une chaine-chiffre
int testChiffre(char* ch)
{
	if(*ch=='\0')	return 0;	// Si la chaine est vide
    while (*ch)
	{
		if (*ch<'0' || '9'<*ch)
            return 0;
        ch++;
    }
    return 1;
}

// Q2: La fonction permet de saisir aleatoirement une chaine-chiffre
char * SaisirAl(int n)
{
	char *ch=malloc(n+1);
	int i;
	for(i=0; i<n; i++)
		ch[i]='0'+rand()%10;
	ch[i]='\0';
	return ch;
}

// Q2: La fonction transforme une chaine-chiffre non valide (commence par des '0') en une chaine-chiffre valide
void valider(char *ch)
{
	char *s=ch;
	int l=strlen(ch);
	while (*s=='0' && s<ch+l-1) // La 2eme condition pour eviter de transformer "00000" en chaine vide(Il faut la transformer en "0").
		s++;
	strcpy(ch,s);
}

// Q3: La fonction calcule la somme de deux grands entiers
char * somme(char *a, char *b)
{
	valider(a);
	valider(b);
	
	int la= strlen(a);
	int lb= strlen(b);
	
	int lc= (la>lb ? la : lb)+1;
	char *c= malloc(lc+1);
	int i, j, k, r=0;

	c[lc]='\0';
	i=la-1;	j=lb-1;	k=lc-1;

	while (0<=i && 0<=j)
	{
		r+= a[i--]-'0' + b[j--]-'0';
		c[k--]= '0'+ r%10;
		r/=10;
	}

	while (0<=i)
	{
		r+= a[i--]-'0';
		c[k--]= '0'+ r%10;
		r/=10;
	}

	while (0<=j)
	{
		r+= b[j--]-'0';
		c[k--]= '0'+ r%10;
		r/=10;
	}

	c[k]='0'+r;
	valider(c);
	return c;
}

// La fonction compare deux entiers (chaines-chiffres). On considere que les chaines-chiffres sont valides.
int compare(char *a, char *b)
{
	if(strlen(a)!=strlen(b))
		return strlen(a)-strlen(b);
	else
		return strcmp(a,b);
}

// Q4: La fonction calcule la soustraction de deux grands entiers
char * soustraction(char *a, char *b)
{
	valider(a);
	valider(b);
	int la= strlen(a);
	int lb= strlen(b);
	int lc= (la>lb ? la : lb);
	char *c= malloc(lc+2);	// + une case de signe
	char *t;
	int i, j, k, p, m, n=0;

	c[lc+1]='\0';	c[0]='0';
	i=la-1;	j=lb-1;	k=lc;

// Pour traiter la cas ou l'entier b est plus grand que l'entier a (permuter a et b avec un resultat negatif)
	if(compare(a,b)<0)
	{
		t=a;	p=i;
		a=b;	i=j;
		b=t;	j=p;
		c[0]='-';
	}

	while (0<=i && 0<=j)
	{
		if(a[i]<b[j]+n)
			m=10;
		else
			m=0;

		c[k--]='0'+ (a[i]+m) - (b[j]+n);

		if(a[i--]<b[j--]+n)
			n=1;
		else
			n=0;
	}

	if(0<=i)
		c[k--]= a[i--] - n;

	while (0<=i)
		c[k--]= a[i--];

	valider(c+1);
	if(c[0]!='-')	// Le cas ou le resultat est positif
		c++;
	return c;
// C'est pas le bon algorithme mais il marche comme meme.
}	// N'oubliez pas de me signaler si les fonctions ne marchent pas comme il faut.


// La fonction principale
main()
{
	char *ch1, *ch2;
	ch1=malloc(N);
	ch2=malloc(N);
    
	printf("\n\t+++ La somme de deux grands entiers +++\n");
	do
	{	printf("\tSaisir le 1er entier (chaine-chiffre) :\n\t");
		gets(ch1);
	} while (!testChiffre(ch1));
	do
	{	printf("\tSaisir le 2em entier (chaine-chiffre) :\n\t");
		gets(ch2);
	} while (!testChiffre(ch2));
	printf("\tLa somme des deux entiers est :\n\t");
	puts(somme(ch1,ch2));

	printf("\n\t--- La soustraction de deux grands entiers ---\n");
	do
	{	printf("\tSaisir le 1er entier (chaine-chiffre) :\n\t");
		gets(ch1);
	} while (!testChiffre(ch1));
	do
	{	printf("\tSaisir le 2em entier (chaine-chiffre) :\n\t");
		gets(ch2);
	} while (!testChiffre(ch2));
	printf("\tLa soustraction des deux entiers est :\n\t");
	puts(soustraction(ch1,ch2));
}
