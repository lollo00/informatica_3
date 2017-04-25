/* Studente: Lorenzo Gezzi 
   Classe:3INA 
   Data:25/04/2017
   Versione: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
    int num[10]={2,5,6,8,9};
    int n;
    int tot;
    int max;
    int trovato;
    int i;
    int x;
    printf("Inserire il numero da cercare: ");
    scanf("%d",&n);
    tot=5;
    max=10;
    if(tot<max){
        i=0;
        trovato=0;
        while((i<tot) && (trovato==0)){
            if(n<=num[i]){
                i++;
            }
            else {
                trovato==1;
            }
        }
    }
    else{
    }
    x=tot-1;
    while(i>=1){
        num[x+1]=num[x];
        x--;
    }
    num[i]=n;
    tot++;
}

    

