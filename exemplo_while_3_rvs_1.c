
/*Exemplo digitando 1 para sim - página 86 - versão 2.*/

#include <stdio.h>

int main(){

    printf("\nPrograma loop determinado pelo usuario.\n\n");

    int resp, r, a, b;
    resp = 1;

    while(resp == 1){
        printf("\nDigite o 1.o numero: ");
        scanf("%d", &a);
        printf("Digite o 2.o numero: ");
        scanf("%d", &b);
        r = a + b;

        printf("O resultado da soma: %d", r);
        printf("\nDeseja continuar?");
        printf("\nDigite [1] para sim ou [2] para encerrar o processamento: ");
        scanf("%d", &resp);
    }

    return 0;
}