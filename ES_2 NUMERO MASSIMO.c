
//Dati i 3 numeri trovare il numero massimo //
//Nome:Lorenzo Gezzi Classe:3INA Data:14/11/2016//
#include<stdio.h>
main(){
	   int N1,N2,N3,MAX;//variabile che contiene N1,N2,N3
	   printf("Inserisci il valore di N1");
	   scanf("%d",&N1);
	   printf("Inserisci il valore di N2");
	   scanf("%d",&N2);
	   printf("Inserisci il valore di N3");
	   scanf("%d",&N3);
	   if(N1>N2){
	   	          MAX=N1;
	   }
	    else {
		   
	              MAX=N2;
	          }
	   
	   if(N3>MAX){ 
	              MAX=N3;      
				  } 
	         printf("\n il nuemro maggiore =%d",&MAX);
	        system("PAUSE");
         }
