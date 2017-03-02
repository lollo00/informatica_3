/* Studente: Lorenzo Gezzi 
   Classe:3INA 
   Data:02/03/2017
   Versione: 1.0
   */
#include<stdio.h>
int main(){
    int num[]={8,10,14,16,20,25,31,37,40,50}; //array numeri
    int n;  //numero da trovare
    int min; //la posizione minore dell'array
    int max; //la posizione maggiore dell'array
    int trovato; // variabile trovato
    int centro; //centro dell'array
    printf("Inserire il numero da trovare");
    scanf("%d",&n); //input del numero da trovare
    min=0; //inizializzazione del minore 
    max=9; //inizializzazione del maggiore
    trovato=0; //inizializzazione del flag trovato 
    while((trovato==0) && (min<=max)) {
    	 centro=(min+max)/2;
    	 if(n==num[centro]){
    	 	trovato=1;
		 }
		 else{
		 	if(n>num[centro]){
		 		min=centro+1;
			 }
			 else {
			 	max=centro-1;
			 }
		 }
	}
   if(trovato==1){
   	printf("Hai trovato il numero");  //output hai trovato il numero
   }  
   else {
   	printf("Non hai trovato il numero\n"); //output non hai trovato il numero
   }
system("PAUSE");
}
