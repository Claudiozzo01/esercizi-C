#include <stdio.h>

float media (int m , int n)
{
    float somma = m+n;
	return somma/2;
}

int main()
{
	int a,b;

	printf("inserisci il valore di a: ");
	scanf("%d" , &a);
	printf("inserisci il valore di b: ");
	scanf("%d" , &b);
	
	media(a , b);
	printf("la media e': ");
	printf("%f" , media(a , b));
	
}


