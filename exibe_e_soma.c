//exibe e mostar a soma dos valores de 1 a 100 com while.

#include <stdio.h>

int main(){

    int num = 1, soma = 0;

    while(num <= 100){

        printf("%d ", num);
        soma += num;
        num++;
    }

    printf("\n\nsoma = %d.\n\n", soma);
    return 0;
}