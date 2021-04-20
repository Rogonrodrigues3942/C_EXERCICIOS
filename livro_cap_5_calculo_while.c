/*Loping do tipo while versao 1A - página 84.*/

#include <stdio.h>

int main(){

    int a, b, r, i = 1;

    while(i < 6){
        printf("Entre com um numero para A: ");
        scanf("%d", &a);
        printf("Entre com um numero para B: ");
        scanf("%d", &b);

        r = a + b;
        printf("\n\nO resultado da soma de %d e %d equivale a: %d.\n\n", a, b, r);

        i++;
    }

    return 0;
}