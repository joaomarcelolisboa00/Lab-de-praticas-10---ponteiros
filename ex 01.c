#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro = 13;
    float real = 20.22;
    char letra = 'L';

    int *pont_int;
    float *pont_real;
    char *pont_char;

    pont_int = &inteiro;
    pont_real = &real;
    pont_char = &letra;

    printf("O valor atual da variavel inteiro e: %d\n", inteiro);
    printf("O valor atual da variavel real e: %.2f\n", real);
    printf("O valor atual da variavel char e: %c\n\n", letra);

    printf("\t***MODIFICANDO COM PONTEIROS***\n\n");

    *pont_int = 16;
    *pont_real = 20.00;
    *pont_char = 'J';

    printf("O valor apos a modificacao da variavel inteiro e: %d\n", *pont_int);
    printf("O valor apos a modificacao da variavel real e: %.2f\n", *pont_real);
    printf("O valor apos a modificacao da variavel char e: %c\n\n", *pont_char);


    return 0;
}
