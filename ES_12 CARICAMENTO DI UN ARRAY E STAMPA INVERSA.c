/* Studente: Lorenzo Gezzi 
   Classe:3INA 
   Data:10/04/2017
   Versione: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
              int x,num[10];
              for(x=0;x<10;x++){
			  					printf("Inserire il numero dell'array ");
			  					scanf("%d",&num[x]);
               }
              for(x=9;x>=0;x--){
			  					if(num[x]!=0){
											  printf("\nIl numero dell'array e' %d\n",num[x]);
								  }
               }
               system("PAUSE");
}
