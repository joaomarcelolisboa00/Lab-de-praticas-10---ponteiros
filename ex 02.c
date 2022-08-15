#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    int *p1, *p2;

    p1 = &n1;
    p2 = &n2;

    printf("\nInforme o valor de n1: ");
    scanf("%d", &n1);
    printf("\n Informe o valor de n2: ");
    scanf("%d", &n2);

    if(p1 > p2){
        printf("\n n1 tem o maior endereco sendo ele %p e seu conteudo e: %d \n", p1, *p1);
    }else{
        printf("\n n2 tem o maior endereco sendo ele %p e seu conteudo e: %d\n", p2, *p2);
    }
  
    return 0;
}
