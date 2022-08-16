#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float mat[3][3];
    float *pont_vet = &mat[0][0];
    int i;

    srand(time(NULL));

    for(i = 0; i < 6; i++){
        *(pont_vet + i) = rand();
    }
    for(i = 0; i < 6; i++){
        printf("posicao: %d - conteudo: %.2f - endereco: %i\n", i, *(pont_vet + i), (pont_vet + i));

    }

    return 0;
}
