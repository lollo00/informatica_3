/* Titolo: Dato un numero compreso fra 2 e 10 stampare la relativa tabellina
   Nome: Lorenzo Gezzi     Classe:3INA
   Versione: 1.0
   Data: 16/12/2016
                                                                             */
#include<stdio.h>
main(){
	    int N; //numero
	    int I; //contatore
	    int T; //tabellina 
	    do{
	    	printf("Inserire il numero");
	    	scanf("%d",&N);
	      } 
	    while(N<2||N>10);
		T=0;
	    for(I=1;I<=10;I++){ 
	                        T=T+N;
	                        printf("%d",T);
	    	              }
	    system("PAUSE");
      }

