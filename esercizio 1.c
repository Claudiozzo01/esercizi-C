#include <stdio.h>

int main()
    {
	int n;
	int somma = 0;
	int i;
	int arrey[n];
	
	
	printf("inserisci il numero che preferisci: \n");
	scanf("%d", &n);

	
		printf("inserisci  il numero che preferisci: \n");
	 for(i=0; i<n; i++)
	 {
	 scanf("%d", &arrey[i]);
     }
     
     for(i=0; i<n; i++)
     {
     	somma += arrey[i];
	 }
     
     printf("la somma dei numeri e' : %d\n" , somma);
	 }
	 
	
