/*Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
número é inválido. */

#include <stdio.h>
#include <math.h>

int main(){

    float num;

    printf("\n\nCalculando raiz quadrada\n\n");
    printf("Insira um numero para calcular a raiz quadrada:  ");
    scanf("%f", &num);

    if(num >= 0)
        printf("\nA raiz quadrada de %7.3f eh: %7.3f\n", num, sqrt(num));
    else
        printf("\nNumero menor que zero, invalido!\n");

    return 0;
}