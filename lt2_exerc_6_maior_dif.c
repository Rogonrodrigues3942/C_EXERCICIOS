/*6) Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles, ´
assim como a diferenca existente entre ambos. */

#include <stdio.h>

int main(){

    int num1, num2, dif = 0;

    printf("Digite o 1.o numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o 2.o numero inteiro: ");
    scanf("%d", &num2);

    dif = num1 - num2;

    if(num1 > num2)
        printf("\n\nO 1.o numero eh o maior: %d\n", num1);
    else
        printf("\n\nO 2.o numero eh o maior: %d\n", num2);
    
    printf("A diferenca entre os numeros eh: %d", dif);
    

    return 0;
}