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
    int pos;
    printf("Inserire il numero da cercare: ");
    scanf("%d",&n);
    v[10]=n;
    i=0;
    while(v[i]!=n){
        i++;
    }
    pos=i;
    if(pos<10){
        printf("numero trovato in posizione: %d",pos);
    }
    else{
        printf("numero non trovato");
    }
    printf("\n");
}

