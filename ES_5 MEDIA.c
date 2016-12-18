/* Titolo:Calcolo della media di n numeri
   Nome: Lorenzo Gezzi
   Classe:3INA      Data:24/11/2016
                                   */    
#include<stdio.h>
main(){
	    int N; // numero numeri
	    int I; //contatore
	    int Num; // numero
	    int Somma; // somma dei numeri
	    float Media; // media numeri
	    printf("Inserire il numero dei numeri");
	    scanf("%d",&N);
	    Somma=0;
		I=0;
		while(I<N){
			        printf("Inserire il numero");
			        scanf("%d",&Num);
			        Somma=Somma+Num;
			        I++;
		          }
	    Media=Somma/N;
	    printf("%f",Media);
	    system("PAUSE");
	   }
