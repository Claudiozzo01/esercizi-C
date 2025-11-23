#include <stdio.h>

int main()
{
    int voto;

    printf("Inserisci il voto: ");
    scanf("%d", &voto);

    while (voto < 0 || voto > 10)
    {
        printf("Valore non valido, reinserisci un voto tra 0 e 10: ");
        scanf("%d", &voto);
    }

    if (voto >= 6)
    {
        printf("Lo studente è promosso: %d\n", voto);
    }
    else
    {
        printf("Lo studente è bocciato: %d\n", voto);
    }

    return 0;
}
