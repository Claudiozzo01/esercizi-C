#include <stdio.h>

int main()
{
    int voto, condotta;
    
    printf("---Scrutini di fine anno---\n");
    printf("Inserisci il voto finale dell'alunno: \n");
    scanf("%d", &voto);
    printf("Inserisci il voto di condotta dell'alunno: \n");
    scanf("%d", &condotta);

    if(voto>=6 && condotta >6)
    {
        printf(" l'alunno e' prommosso \n");
    }
    else
    {
        printf(" l'alunno e' rimandato \n");
    }

}
