#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//in questa posizione definisco il mio sottoprogramma
int input_n(int min,int max){
	int n;
	if(min>max){
		int temp;
		temp=min;
		min=max;
		max=temp;
	}
	do{
		printf("Inserire un numero (%d,%d): ",min,max);
	    scanf("%d",&n);
	}while((n<min)||(n>max));
	return n;
}

int main(){
	        int n1;
	        int n2;
	        int max;
	        
	        //in questo punto richiamo il mio sottoprogramma
	        n1=input_n(0,200); //invocazione della funzione input_n
            n2=input_n(0,150);
			max=0;
			if(n1>n2){
				max=n1;
			}
			else{
				 max=n2;
			}
			printf("il numero maggiore e' %d",max);
			printf("\n");
			system("PAUSE");
}

