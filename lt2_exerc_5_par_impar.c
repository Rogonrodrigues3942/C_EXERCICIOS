/*Faça um programa que receba um número inteiro e verifique se este número é
 par ou ímpar.*/

#include <stdio.h>

int main(){

    int num;

    printf("\nClassifique par ou impar\n\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if(num % 2 ==0)
        printf("Numero eh par: %d", num);
    else printf("Numero eh impar: %d", num);

    return 0;
}
