#include <stdio.h>

float media(int quanti) 
{
    float somma = 0, n;

    for (int i = 0; i < quanti; i++) 
	{
        printf("Inserisci il numero %d: ", i + 1);

        if (scanf("%f", &n) != 1) 
		{
            printf("Input non valido!\n");
            return 0;
        }
        somma += n;
    }

    return somma / quanti;
}

int main() 
{
    int n;
    printf("Quanti numeri vuoi inserire? ");

    if (scanf("%d", &n) != 1 || n <= 0) 
	{
        printf("Numero non valido!\n");
        return 1;
    }

    float risultato = media(n);
    printf("La media e': %.2f\n", risultato);

    return 0;
}
