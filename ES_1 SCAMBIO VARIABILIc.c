//Es1:Scambio di valori tra due variabili//
//Nome:Lorenzo Gezzi Classe:3INA Data:14/11/2016//
#include<stdio.h>
main(){ 
       int A,B,K ; //variabile che contiene A,B,K
       printf("Inserisci il valore di A"); //chiedi a video misura A
       scanf("%d",&A); //valore A
       printf("Inserisci il valore di B"); //chiedi a video misura B
       scanf("%d",&B); //valore B
       K=A;
       A=B;
       B=K;
       printf("%d",&A);
       printf("%d",&B);
        system("PAUSE");
}
