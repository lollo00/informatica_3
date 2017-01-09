/*  Titolo: Costante di Nepero
    Studente: Lorenzo Gezzi  Classe:3INA
    Data: 09/01/2017
    Versione: 1.0
                         */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
       float N;
       float Fat;
       float E;
       float K;
       float I;
       do{ 
           printf("Inserire la quantita dei numeri");
           scanf("%f",&N);
          }
       while((N>10)||(N<=0));
       E=1;
       I=1;
       while(I<=N){
                  Fat=1;
                  K=I;
                  while(K>0){
                             Fat=Fat*(K--);
                             }
                  E=E+(1/Fat);
                  I++;
                  }
       printf("%f",E);
       system("PAUSE");
       }
                  
