/* Titolo: Stampare le tabelline di tutti i numeri naturali compresi tra 2 e 10
   Nome: Lorenzo Gezzi    Classe:3INA
   Versione:1.0
   Data 16/12/2016
                                                                           */
#include<stdio.h>
main(){
	    int N; //numero
        int I; //contatore
        int T; //tabellina
	    for(N=2;N<=10;N++){
	    	                T=0;
	    	                for(I=1;I<=10;I++){
	    	                	                 T=T+N;
	    	                	                 printf("%d",T);
							                  }
							printf("\n");
		                  }
         system("PAUSE");
}
