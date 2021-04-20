/*Faca um programa que receba dois numeros e mostre o maior.
Se por acaso, os dois numeros forem iguais, imprima a mensagem. Numeros iguais.*/

#include <stdio.h>

int main(){
    
    int num1, num2;

    printf("\n\nComparacao de numeros\n\n");
    printf("Duigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2)
        printf("\nPrimeiro numero eh maior: %d\n", num1);
    else if(num1 == num2)
        printf("\nNumeros iguais: %d\n", num1);
    else 
        printf("\nSegundo numero eh maior: %d\n", num2);



    return 0;
}