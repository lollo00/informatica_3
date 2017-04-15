/* Studente: Lorenzo Gezzi 
   Classe:3INA 
   Data:15/04/2017
   Versione: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
            int cont;
            int i;
            char parola[100];
            printf("Inserire la parola ");
            scanf("%s",parola);
            cont=0;
            while(parola[cont]!='\0'){
                cont++;
            }
            cont--;
            i=0;
            while(parola[cont]==parola[i] && cont>i){
                i++;
                cont--;
            }
            if(cont>i){
                printf("La parola non e' palindroma");
            }
            else{
                printf("La parola e' palindroma");
            }
            printf("\n");
            system("PAUSE");
}
            
