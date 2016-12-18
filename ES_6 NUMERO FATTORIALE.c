/* 
    Titolo:Calcolo del fattoriale
    Nome:Lorenzo Gezzi   Classe:3INA
    Versione:1.0
    Data:15/12/2016
                                     */
#include<stdio.h>
main(){
	   int N;
	   int FAT;
	   int I;
	   printf("Inserisci il numero naturale");
	   scanf("%d",&N);
	   FAT=1;
	   I=0;
	   while(I<N){
                   FAT=FAT*(N-I);
                   I++;
                 }
	    printf("il numero fattoriale è:%d",FAT);
	    system("PAUSE");
	   }
