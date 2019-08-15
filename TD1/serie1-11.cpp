#include<stdio.h>
#include<stdlib.h>


int main()
{
	
	int m,j;
	
	printf("donnee Mois  : ");scanf("%d",&m);
	printf("donnee Jour  : ");scanf("%d",&j);
	
 switch(m)
      {
         case 1: printf("l'hiver"); break;
         case 2: printf("l'hiver"); break;
         case 3:
            if(j >= 21)
                printf("le printemps");
            else  
				printf("l'hiver");
            break;
         case 4: printf("le printemps"); break;
         case 5: printf("le printemps"); break;
         case 6:
            if(j >= 21)
                printf("l'ete");
            else  
				printf("le printemps");
            break;
         case 7: printf("l'ete"); break;
         case 8: printf("l'ete"); break;
         case 9:
            if(j >= 23)
                printf("l'automne");
            else  
				printf("l'ete");
            break;
         case 10: printf("l'automne"); break;
         case 11:printf("l'automne"); break;
         case 12:
            if(j >= 22)
                printf("l'hiver");
            else  
				printf("l'automne");
            break;
      }
     
	 printf("\n\n"); 
 system("pause");     
}
