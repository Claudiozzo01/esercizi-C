#include <stdio.h>

int main()
    {
	int n;
	int sommapari = 0;
	int i;
	int arrey[n];
	int sommadispari = 0;
	
	
	printf("inserisci il numero che preferisci: \n");
	scanf("%d", &n);

	
		printf("inserisci  il numero che preferisci: \n");
	 for(i=0; i<n; i++)
	 {
	 scanf("%d", &arrey[i]);
     if(arrey[i]%2==0)
	 {
	 	sommapari++;
	 }
	 else
	 {
	 	sommadispari++;
	 } 
	 
	 }
     
     
     printf("la somma dei numeri pari e' : %d\n" , sommapari);
     printf("la somma dei numeri dispari e' : %d\n" , sommadispari);
     
	 }
	 
	
