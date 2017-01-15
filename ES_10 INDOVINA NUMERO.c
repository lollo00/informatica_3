/* 
    Titolo: Indovina Numero
    Studente: Lorenzo Gezzi    Classe: 3INA
    Data:12/01/2017
    Versione: 1.0
                               */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
	int Dif;
	int T;
	int Num_c;
	int N;
	printf("Che difficoltà vuoi?(0-Easy,1-Hard)");
	scanf("%d",&Dif);
	if(Dif==1){
		T=2;
	}else{
		T=5;
	}
	Num_c= rand();
	while(T!=0){
		            printf("Inserire il numero");
		            scanf("%d",&N);
		            if(N==Num_c){
			                    T--;
			                    printf(" \n Hai vinto con ancora %d tentativi!",T);
			                    T=0;			
	             	          }
                    else{
			              T--;
			              if(Dif==0){
				          if(N>Num_c){
					                  printf(" \n Hai sbagliato, il numero e' maggiore del numero da indovinare. Ti rimangono ancora %d tentativi.  ",T);
				                   } 
                          else{
					              printf(" \n Hai sbagliato, il numero e' minore del numero da indovinare. Ti rimangono ancora %d tentativi.  ",T);
				              }
			                         } 
                          else{
				                printf(" \n Hai sbagliato, hai ancora %d tentativi.  ",T);
			                  }
		                }
	          }
    system("PAUSE");
    }
