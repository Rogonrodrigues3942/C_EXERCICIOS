/*Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário,
imprima o número ao quadrado.*/

#include <stdio.h>
#include <math.h>

int main(){

    float num;

    printf("\n\nCalculando a raiz quadrada ou potencia.\n\n");
    printf("Digite um numero real qualquer: ");
    scanf("%f", &num);
    if (num >= 0)
        printf("A raiz quadrada de %7.3f eh %7.3f\n\n", num, sqrt(num));
    else 
        printf("O quadrado de %7.3f eh %7.3f\n\n", num, pow(num,2));
        
    return 0;
}