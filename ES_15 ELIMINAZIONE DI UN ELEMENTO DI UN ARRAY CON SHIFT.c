#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
    int i;
    int pos;
    int v[10]={1,2,3,4,5,6,7,8,9,10};
    int tot;
    tot=10;
    printf("Inserire la posizione  ");
    scanf("%d",&pos);
    for(i=pos;i<(tot-1);i++){
        v[i]=v[i]+1;
    }
    tot--;
    for(i=0;i<tot;i++){
        printf("%d",v[i]);
    }
    printf("\n");
}

