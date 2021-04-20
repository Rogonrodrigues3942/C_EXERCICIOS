#include <stdio.h>

int main(){

    int dia;

    printf("Digite um dia: ");
    scanf("%d", &dia);

    if(dia > 0 && dia <=31){
        printf("%d eh um dia valido.\n", dia);
    }
    else{
        printf("Dia invalido!! Fora do intervalo de 31 dias. Fim do programa!!!");
    }
    
    return 0;
}