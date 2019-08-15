#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Q1
void triangle_rectangle(float hypotenuse,float cote_angle_droit){
	
	
	printf("le premetre est %f \nla surface est %f\n" , sqrt(pow(hypotenuse,2)-pow(cote_angle_droit,2))+hypotenuse+cote_angle_droit,(hypotenuse*cote_angle_droit)/2);
	
}


//Q2
void seconds_to_clock(int seconds){
	
	int heur=seconds/3600;	
	int min=(seconds%3600)/60;
	int sec=min%60;
	
	printf("%d h : %d m : %d s \n",heur,min,sec);


}
//Q3
int max(int a, int b, int c){	
	return (c>=((a>=b)?a:b))?c:((a>=b)?a:b );
}

//Q4
int somme(int n){
	if(n==0) return 0;
	else return n+somme(n-1);
}
//Q5
char* is_naturel_premier(int a){
	int i=0;
	if( a>=0 && a<=3 ){
		return (char*)"oui";
	}else{
		for(i=2;i<=a/2;i++){
			if( a%i ==0 ) 
				return (char*) "non" ;
		}
	    return (char*) "oui" ;
	}
}
//Q6
int PGCD(int a , int b){
	int i;
	int min=(a>b)?b:a;
	int pgcd=1;
	
	
	for(i=min;i>=2;i--){
			if( a%i==0 && b%i==0) 
				pgcd=i;
				break;
		}
	    return pgcd ;
	
}
//Q6 recusive 
int PGCD_rec(int a,int b)
{
	if((a%b)==0)
		return b;
	return PGCD_rec(b,a%b);
}
//Q6 recusive soustractive methode 

int PGCD_soustractive(int a, int b)
{
    if(a==b)
    {
            return a;        
    }     
    else
    {
        if(a>b)
           return PGCD(a-b, b);
        else
           return PGCD(a, b-a);
    }
}

//Q7
int puissance(int a,int b){
	return pow(a,b);
}
//Q8
int suite_(int n){
	int S1,S2=0;
	while (n>0){
		S1+=pow(n--,3);
		S2=n--;
	}
	return S1+pow(S2,2);
}

//Q9 methode iterative avec x0=a 

float racineCarre_1(float a ,float eps){
	
	float x0,xn=a;
	int i=0;
	
	do{
		
		x0=xn;
		xn=((float)1/2)*(x0+((float)a/x0));
		
	}while(fabs(xn-x0)>=eps);
	
	return xn;
}
//Q9  methode recursive 


float racineCarre_2(float eps ,float x0,float a){
	
	float xn=((float)1/2)*(x0+((float)a/x0));
	
	if(fabs(xn-x0)<eps) {	
  		return xn;		
	}	
	else 
		return racineCarre_2( eps , xn, a);			
}

// 

double racine_carree_3(int a, double x0,int n){
	
	if(n==0) return x0;
	else
		return racine_carree_3( a ,0.5*( x0 + ( a/x0 ) ),n-1 );
		
}
//Q10
int* multiparfaits(int n , int m){
		int i,j,test,cmpt=0;
		
		int *tab=(int*)malloc(sizeof(int));
		
		for(i=n-1;i>=1;i--){
			
			test=0;
			for (j=((i)/2);j>=1;j--){	
				if(i%j==0)test+=j;
				//printf("%d\n",test);
			}
			if( ((i+test)/i)==m && ((i+test)%i)==0){//
				tab=(int*)realloc(tab,sizeof(int)*(++cmpt));
				
				tab[cmpt-1]=i;//28
				printf("nombre i  %d  test %d \n",i,test);

			}
 					
		}
		
		return tab;		
}


int main(int argc, char *argv[]) {
	//Q1
	{
		triangle_rectangle(3,3);
	}
	//Q2
	{
		seconds_to_clock(3600);
	}
	//Q3
	{
		printf("max %d\n",max(1,3,4));
	}
	//Q4
	{
		printf("somme %d\n",somme(4));
	}
	//Q5
	{
		printf("naturel_premier %s\n",is_naturel_premier(4));
	}
	//Q6
	{
		int a=6,b=12;
		if(a>b)	
			printf("PGCD_rec %d\n",PGCD_rec(a,b));
		else
			printf("PGCD_rec %d\n",PGCD_rec(b,a));
		//
		printf("PGCD itirative %d\n",PGCD(6,12));
	}
	//Q7
	{
		printf("puissance %d\n",puissance(6,2));
	}
	//Q8
	{
		printf("\nsuite (1+2+3....n)^2 + (1^3  +2^3...n^3 )  = %d\n",suite_(15));
	}
	//Q9 test
	{		
		printf("\n%f\n",racineCarre_1(2,0.000000001));
		printf("\n%f\n",racineCarre_2(0.000000001,2,2));
	}
	//Q10
	{
		int *tab;
		int i;
		
		tab=multiparfaits(500,2);
		for (i=0;i<(sizeof(int)*strlen((char*)tab))/2;i++)
				printf("multiparfaits %d \n", tab[i]);
	}
  	return 0;
}
