/* Studente: Lorenzo Gezzi 
   Classe:3INA 
   Data:25/04/2017
   Versione: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int n;
	int i;
	int k;
	do{
		printf("Inserisci lato tra 2 e 20: ");
		scanf("%d",&n);
	}while((n<2)||(n>20));
    for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			printf("*");
		}
		printf("\n");
    }
}
