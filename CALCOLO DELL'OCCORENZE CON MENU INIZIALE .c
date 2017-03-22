/* 
   Titolo: Scrivere un programma in pseudo e in codifica c che consenta l'input di una stringa di lunghezza massima stabilita dall'utente che calcoli le occorenze di ogni singolo carattere con menù iniziale.
   Studente: Lorenzo Gezzi
   Classe:3INA
   Data:19/03/2017
   Versione: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	char nome[100]; //variabile stringa del nome
	int scelta; //variabile scelta
	int lung; //variabile lunghezza della stringa
    int i;  //prima variabile contatore
	int k; //seconda variabile contatore
	int cont; //terza variabile contatore
	do{ //menu'
	printf("\nCALCOLO OCCORRENZE \n"); 
	printf("Parti del programma da svolgere:\n");
	printf("1-Inserisci il nome \n");
	printf("2-Lunghezza del nome\n");
	printf("3-Calcolo dell'occorrenze del nome\n");
	printf("0-EXIT \n");
		do{
        printf("Scegli la parte di programma da eseguire(0-3)");
		scanf("%d",&scelta); //input della scelta della parte del programma da eseguire
		}while((scelta<0)||(scelta>3)); //controllo della scelta
		switch(scelta){  
			case 1:
				printf("\nInserisci il tuo nome (Massimo 100 caratteri): ");
				scanf("%s",nome); //input del nome(stringa) 
				printf("\nIl nome inserito e': %s\n",nome); //output del nome 
				break;
			case 2:
				lung=0; //inizializzazione della lunghezza della stringa
				while(nome[lung]!='\0'){
					lung++; //incremento della lunghezza della stringa
				}
				printf("\nIl tuo nome e' lungo %d caratteri \n",lung); //output della lunghezza della stringa
				break;
			case 3:
				lung=0; // inizializzazione della lunghezza della stringa
				while(nome[lung]!='\0'){
					lung++; //incremento della lunghezza della stringa
				}
				for(i=0;i<lung;i++){
					cont=1; //inizializzazione della terza variabile contatore
					if(nome[i]!=0){
						for(k=i+1;k<lung;k++){
							if(nome[i]==nome[k]){
								cont++; //incremento della terza vaaraibile contatore
								nome[k]=0;
							}							
						}
					}
					if(nome[i]!=0){
						printf("\nIl carattere %c si ripete %d volte\n",nome[i],cont); //output dell'occorenze cioè quante volte viene ripetuto un determinato carattere
					}
				}
				break;
		}
	}while(scelta !=0);
	system("PAUSE");
	system("PAUSE");
}
