/*Looping while - usuário decidindo quando parar.*/

#include <stdio.h>

int main(){

    int a, b, r, resp = 1;

    while( resp == 1){
        printf("Digite um  numero para A: ");
        scanf("%d", &a);
        printf("Digite um numero para B: ");
        scanf("%d", &b);

        r = a + b;
        printf("\nA soma de %d e %d equivale a: %d\n\n", a, b, r );

        printf("Deseja continuar?");
        printf("Digite [1] para continuar ou [2] para encerrar: ");
        scanf("%d", &resp);
    }
    return 0;
}