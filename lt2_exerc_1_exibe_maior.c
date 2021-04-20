/*Faça um programa que receba dois números e mostre qual deles é o maior.*/
#include <stdio.h>

int main (){

    int n1, n2;
    
    printf("\nMostre o maior numero.\n\n");
    printf("\nInsira o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nInsira o segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2)
        printf("\n\nMaior numero eh: %d.\n", n1);
    else
        printf("\n\nMaior numero eh: %d.\n", n2);

    return 0;
}