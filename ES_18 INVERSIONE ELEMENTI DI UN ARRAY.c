/* Studente: Lorenzo Gezzi 
   Classe:3INA 
   Data:25/04/2017
   Versione: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n[10];
    int a;
    int i;
    int x;
    for(x=0;x<=9;x++){
    printf("Inserire il numero ");
    scanf("%d",&n[x]);
    }
    x=0;
    for(i=9;i>x;i--){
        a=n[i];
        n[i]=n[x];
        n[x]=a;
        x++;
    }
    printf("\n");
    for(x=0;x<=9;x++){
        printf("%d",n[x]);
    }
    printf("\n");
}
