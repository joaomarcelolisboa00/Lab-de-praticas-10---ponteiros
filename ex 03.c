#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  float vet[10];
    float *pont_vet;
    int i;

    srand(time(NULL));

    for(i = 0; i < 10; i++){
        vet[i] = rand();
    }
    for(i = 0; i < 10; i++){
        printf("posicao: %i - conteudo: %.2f - endereco: %i\n",i+1, vet[i], (pont_vet + i));
    }



    return 0;
}
