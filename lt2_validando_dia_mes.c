#include <stdio.h>

int main(){

    int dia = 31, mes;

    printf("Digite um dia: ");
    scanf("%d", &dia);
    printf("Digite um mes (inteiro de 1 a 12): ");
    scanf("%d", &mes);

   
        if( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
             printf ("%2d %2d", dia, mes);
        }
        else
            if(mes == 4 || mes ==6 || mes == 9 || mes ==11){
                printf("%2d %2d", dia - 1, mes);
            }
        else
            printf("%2d %2d", dia-3, mes); 
    return 0;
}