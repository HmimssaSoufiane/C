#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

float Suit(float a,float X0, float eps){
	
	float Xn,Xn_1=X0,i=0;
	 
	do{
		
		Xn=Xn_1;
		
		Xn_1=((float)1/2)*(Xn+(a/Xn));
				
		printf("Xn_1=%f and Xn=%f and Xn_1-Xn=%f \n",Xn,Xn_1,Xn_1-Xn);
		
	}while(fabs(Xn-Xn_1)>=eps);
	return Xn_1;
}

float Suit_Rec(float a,float X0, float eps){
	
	float Xn=X0,Xn_1=((float)1/2)*(Xn+(a/Xn)); 
	
	if(fabs(Xn-Xn_1)<eps)
	
		return Xn_1 ;
		
	else {
				printf("Xn_1=%f and Xn=%f and Xn_1-Xn=%f \n",Xn,Xn_1,Xn_1-Xn);
				return Suit_Rec (a,Xn_1, eps );

	}
	 
	
	
}

 
int main(void)
{
      printf("%f\n",Suit(16,16,0.000001)) ;
      printf("%f",Suit_Rec(16,16,0.000001)) ;
}
