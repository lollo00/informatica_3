/* Titolo:Numero Minimo
   Nome: Lorenzo Gezzi    Data 06/01/2017
   Versione: 1.2
                         */
#include<stdio.h>
main()
{
	int I;
	int Num;
	int N;
	int Min;
	printf("inserire la quantita dei numeri");
	scanf("%d",&N);
	I=1;
	printf("inserisci un  il numero ");
	scanf("%d",&Min);
	while(I<N){
	              	printf("inserisci un numero");
		            scanf("%d",&Num);
		            if(Num<Min){
			                       Num=Min;
		                       }
		            I++;
	          }
	printf("il numero minore è: %d",Min);
	system("PAUSE");
}
