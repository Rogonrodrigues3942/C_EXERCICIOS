/*Fatorial - pre-teste - do .... while*/

#include <stdio.h>

int main(){

    int i = 1, n;
    long fatrl = 1;

    printf("Calculando fatorial\n\n");
    printf("Digite um numero para o fatorial: ");
    scanf("%d", &n);

    do{
        fatrl *= i;
        i++;
    }
    while( i <= n);

    printf("\nO fatorial de %d equivale a %d.\n\n", n, fatrl);

    return 0;
}