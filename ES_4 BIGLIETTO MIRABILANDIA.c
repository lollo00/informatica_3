/* Es_4 Biglietto Mirabilandia
   Autore:Lorenzo Gezzi Classe:3INA
   Data:21/11/2016
   Versione:1.0 */
#include<stdio.h>

main(){
	    int Dis; //variabile disabile 
	    int Acc; //variabile accompagnatore
		int Eta; //variabile età
		int Alt; //variabile altezza
		float Prezzo; //variabile prezzo
		float PrezzoSupplemento;
		int Supplemento;
		printf("La persona è disabile?(0.SI,1.NO)");
		scanf("%f",&Dis);
		if(Dis==0){
			       Prezzo=0 ;
			      }
	    else{
	          printf("La persona è un accompagnatore?(0.SI,1.No)");
		      scanf("%d",&Acc);
			  if(Acc==0){
			 	         Prezzo=25.50;
			 	          }        
	            else{  
				      printf("Qual'é l'età della persona?");
	                  scanf("%d",&Eta);
	                  if(Eta>60){
	          	                	 Prezzo=25.00;
			                     }
			         	else{
								printf("Quale'è l'altezza della persona?");
								scanf("%d",&Alt);
								if(Alt<100){
									         Prezzo=0;
								            }
						        else{ 
						              if(Alt>=100 && Alt<=140){
						              	                        Prezzo=28.00;
									                           }
								      else{
									        if(Alt>140){
									        	          Prezzo=34.90;
											            }
									       }
									}
	                        }
		            }	 
		            	printf("Vuole anche il supplemento per Mirabeach?(0.SI,1.No)");
						scanf("%d", &Supplemento);
						if (Supplemento==0) {
								 				if (Prezzo == 34.90) {
																		Prezzo = Prezzo + 9.50;
																		}
												else{ 
								     						Prezzo=Prezzo + 7.50;
								     				}
									
											}
		 		}
	
		printf("Il biglietto ha il prezzo di: %.2f", Prezzo);
	}
