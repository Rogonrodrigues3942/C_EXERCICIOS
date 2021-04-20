#include <stdio.h>

int main(){

    int mes;

    printf("Digite um mes (valor inteiro) valido:");
    scanf("%d", &mes);

    if (mes > 0 && mes < 13 )
        printf("Mes valido: %d", mes);
    else
        printf("mes invalido!! programa encerrado");

    return 0;
}