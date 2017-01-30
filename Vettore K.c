/* Titolo: Scrivere un programma in pseudocodifica e successivamente in linguaggio c che dato un vettore di K elementi
           con K compreso fra n1 e n2 con n2 minore di mille e dispari e uno scalare num intero effutui
           il prodotto tra lo scalare e il vettore.
    Studente:Lorenzo Gezzi        Classe:3INA
	Data: 30/01/2017           */
main(){
	     int  N2;
	     int  N1;
	     int  K;
	     int  Num;
	     int  vett[999];
		 int  I;
	     do { 
	            printf("Inserisci il valore di N2");
	            scanf("%d",&N2);
	        }
	    while(N2>1000 || N2%2==0);
	    do {
	    	   printf("Inserisci il valore di N1");
	    	   scanf("%d",&N1);
		   }
		while(N1<0 || N1>N2);
	    do {
	    	   printf("Inserisci il valore di K"),
	    	   scanf("%d",&K);
		   }
		while(K<N1 || K>N2);
		printf("Inserire lo scalare");
		scanf("%d",&Num);
		for(I=0;I<K;I++){
			               printf("Inserire il vettore ");
			               scanf("%d",&vett[I]);
			            }
	    for(I=0;I<K;I++){
	    	              vett[I]=vett[I]*Num;
	    	              printf("%d",vett[I]);
		                }
		system("PAUSE");
		
}
