/*Looping cálculo - pré-teste - página 91*/

#include <stdio.h>

int main(){

    int a, b, r, resp = 1;

    do{
        printf("\n\nInsira um valor para A: ");
        scanf("%d", &a);
        printf("Insira um valor para B: ");
        scanf("%d", &b);

        r = a + b;

        printf("\nO resultado da soma de %d e %d equivale: %d.\n\n", a, b, r);
        printf("\nDeseja  continuar?");
        printf("\nDighite [1] para continuar ou [2] para encerrar: ");
        scanf("%d", &resp);
    }
    while(resp ==1);

    return 0;
}