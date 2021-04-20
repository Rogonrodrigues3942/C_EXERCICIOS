/*Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles,
assim como a diferenca existente entre ambos.*/

#include <stdio.h>

int main(){

    int num1, num2;

    printf("\nMostre o maior numero e a diferença\n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2)
        printf("\nPrimeiro numero eh maior: %d\n", num1);
    else 
        printf("\nSegundo numero eh maior: %d\n", num2);

    printf("A dieferenca entre eles: %d\n", num1 - num2);
    return 0;
}