/*Programando fatorial. Utilizando while.*/

#include <stdio.h>

int main(){

    int i, n;
    long fatrl = 1;

    printf("\n\nPrograma - Calculando fatorial.\n\n");
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);
    i = 1;

    while(i <= n){
        fatrl *= i;
        i++;
    }

    printf("\n\nO fatorial de %d equivale a: %d.\n\n", n, fatrl);

    return 0;
}