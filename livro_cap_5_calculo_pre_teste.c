/*Looping do tipo do ... while - página 90.*/

#include <stdio.h>

int main(){

    int a, b, r, i = 1;

    do{
        printf("\nDigite um numero para A: ");
        scanf("%d", &a);
        printf("Digite um numero para B: ");
        scanf("%d", &b);
         r = a + b;

         printf("\nO resultado da soma de %d e %d corresponde a: %d.\n\n", a, b, r);
         i++;
    }
    while ( i < 6);

    return 0;
}