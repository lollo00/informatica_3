/* Studente: Lorenzo Gezzi 
   Classe:3INA 
   Data:25/04/2017
   Versione: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i;
    int v[10]={10,1,5,4,3,6,2,8,7,9};
    int n;
    int trovato;
    int pos;
    printf("Inserire il numero da cercare: ");
    scanf("%d",&n);
    i=0;
    trovato=0;
    while(i<10 && !trovato){
        if(n==v[i]){
            pos=i;
            trovato=1;
        }
        i++;
    }
    if(trovato==1){
        printf("numero trovato in posizione: %d",pos);
    }
    else{
        printf("numero non trovato");
    }
    printf("\n");
}

