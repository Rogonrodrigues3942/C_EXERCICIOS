/*Apresentar o somatório dos cem primeiros inteiros.*/
#include <stdio.h>

int main(){

    int soma = 0, i = 1;

    while(i < 101){
        soma += i;
        printf("soma %d equivale a %d\n", i, soma);
        i++;
    }

    printf("\nSomatorio = %d. \n", soma);

    return 0;
}