#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


// Q1
 int ChaineChiffres(char S[]){
 	
 	int i=0;
 	while(i<strlen(S))
 	{
 		if(S[i] >='0' && S[i] <='9') i++ ;
		 else return 0 ;			
	}
	return 1;
 }
 


//Q2
 void supprimer_zero(char S[]){
 	
 	int flag=0,i=0,cmp=0;
 	do{
		if(S[0]=='0'){
			for(i=0;i<strlen(S)-cmp;i++){
				S[i]=S[1+i];
			}
			cmp++;
		}else{
			flag=1;
		}
	}while(flag==0);
	S[strlen(S)+1-cmp]='\0';
  } 
  
 
  
//Q3 
void additioner(char S1[],char S2[],char SOM[]){
		int i=0,le_reste=0;
		
		int lS1= strlen(S1);
		int lS2= strlen(S2);
	
		int len=(lS1>= lS2)?lS1:lS2;
		
		SOM=(char*)realloc(SOM,sizeof(char)*len);
		 		
		for(i=len;i>=0 ;i--){
			
 				int LS_1_case =((lS1)<0)?0:S1[lS1--]-'0';
 				int LS_2_case =((lS2)<0)?0:S2[lS2--]-'0';
 				
				int tmp=LS_1_case+LS_2_case+le_reste;
								
				if(tmp<10){
				
						SOM[i]=tmp + '0';
						le_reste=0;					
					}		
				else{ 					
					
					SOM[i]=(tmp%10)+ '0';		
					le_reste=(tmp/10);			
				}
		}
			
		SOM[len]='\0';		
}

int main(int argc, char *argv[]) {
	
	char a='4';
	int b=a-'0';
	printf("%d--%c\n",b,a);
	printf("%d\n",'2'+'2');
//Q1

	char S[]="000012345678900001";
	printf ("%d\n",ChaineChiffres(S));
	
//Q2
 	supprimer_zero(S);
	printf ("%s\n",S);
	
//Q3

	char S1[]="1100000000129782004977";
	char S2[]="754022234930";
	
	char *SOM=(char*)malloc(sizeof(char));
 
	additioner(S1,S2,SOM);
	printf("\n%s",SOM);
	
 	return 0;
}
