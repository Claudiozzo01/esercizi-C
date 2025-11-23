#include <stdio.h>

int main()
    {
	int n;
	int massimo = 0;
	int minimo = 1000;
	int i;
	
	
	printf("inserisci il numero che preferisci: \n");
	scanf("%d", &n);
	int arrey[n];

	
		printf("inserisci  il numero che preferisci: \n");
	 for(i=0; i<n; i++)
	 {
	 scanf("%d", &arrey[i]);
     }
     
     for(i=0; i<n; i++)
     {
     	if(arrey[i]>massimo)
		 {
		 massimo = arrey[i];
		 }
		 
		 if(arrey[i]<minimo)
		 {
		  minimo = arrey[i];
		 }
		 
	 }
     
     printf("%d" , massimo);
     printf("%d" , minimo);
     
}

