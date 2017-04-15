/* Studente: Lorenzo Gezzi 
   Classe:3INA 
   Data:15/04/2017
   Versione: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
            char parola1[100];
            char parola2[100];
            int i;
            int uguali;
            printf("Inserire la prima parola ");
            scanf("%s",parola1);
            printf("\nInserire la seconda parola ");
            scanf("%s",parola2);
            i=0;
            uguali=1;
            while((uguali==1)&&(parola1[i]!='\0'||parola2[i]!='\0')){
            	if(parola1[i]!=parola2[i]){
            		uguali=0;
				}
			i++;
			}
			if(uguali==1){
				printf("\nLe due parole sono uguali");
			}
			else{
				printf("\nLe due parole sono diverse");
            }
            printf("\n");
            system("PAUSE");
}
