#include <stdio.h>

struct Persona
{
    int eta;
    char sesso;
};

int main()
{
    struct Persona p;
    printf("inserisci eta e sesso per entrare:\n");
    printf("Quanti anni hai?\n");
    scanf("%d", &p.eta);
    printf("Indicare il proprio sesso m/f\n");
    scanf(" %c", &p.sesso);
    while (getchar()!='\n'); 
    
    if(p.eta>=18 || p.sesso == 'f')
    {
        printf("Accesso consentito");
    }
    else
    {
        printf("Accesso negato");
    }

    return 0;    
}
