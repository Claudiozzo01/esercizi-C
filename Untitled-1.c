
#include <stdio.h>

int main() 
{
    int numero;
    int contatore = 0;
    int somma = 0;
    int massimo;
    int minimo;
    int pari = 0;
    int dispari = 0;

    printf("---Inserisci una serie di numeri interi ma puoi terminare solo con 0---:\n");

    while 
    {
        scanf("%d", &numero);

        if (numero == 0) 
        {
            break;  
        }
        if (contatore == 0) 
        {
            massimo = numero;
            minimo = numero;
        } 
        else 
        {
            if (numero > massimo) 
            {
                massimo = numero;
            }
            if (numero < minimo) 
            {
                minimo = numero;
            }
        }
        if (numero % 2 == 0) 
        {
            pari++;
        } 
        else 
        {
            dispari++;
        }

        somma += numero;
        contatore++;
    }
    if (contatore == 0) 
    {
        printf("---Nessun numero valido inserito---\n");
    } 
    else 
    {
        float media = (float)somma / contatore;

        printf("\n---Risultati:---\n");
        printf("Numeri inseriti: %d\n", contatore);
        printf("Somma: %d\n", somma);
        printf("Media: %.2f\n", media);
        printf("Valore massimo: %d\n", massimo);
        printf("Valore minimo: %d\n", minimo);
        printf("Numeri pari: %d\n", pari);
        printf("Numeri dispari: %d\n", dispari);
    }

    return 0;
}