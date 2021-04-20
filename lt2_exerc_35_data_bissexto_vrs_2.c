#include <stdio.h>

int main(){
    int dia, mes, ano;

    /*Entrada de dados, inserindo data, com valores inteiros positivos, obedencendo seus respectivos intervalos.*/
    
    printf("Insira um dia (valor inteiro): ");
    scanf("%d", &dia);
    printf("Insira um mes (valor inteiro de 1 a 12): ");
    scanf("%d", &mes);
    printf("Insira um ano (valor inteiro > 0): ");
    scanf("%d\n", &ano);

    /*Processamento checando se o ano é bissexto e imprimindo a data*/

    if(ano % 4 == 0 || ano % 400 == 0 && ano % 100 != 0 && ano > 0){
        if( mes == 2){
            if( dia >0 && dia < 30){
                printf(" %2d %2d %4d\n", dia, mes, ano);
            }
        }
    }
    else{
             if( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && (dia > 0 && dia <= 31)){
                printf ("%2d %2d %4d\n", dia, mes, ano);
            }
             else
                if(mes == 4 || mes ==6 || mes == 9 || mes ==11 &&( dia > 0 && dia < 31)){
                
                    printf("%2d %2d %4d\n", dia, mes, ano);
                }
            else{
                if(mes == 2 && (dia > 0 && dia <= 28)){
                    printf("%2d %2d %4d\n", dia, mes, ano);
                }
                else
                    if(dia > 28){
                        printf("Nao eh ano bissexto, fevereiro tem 28 dias.\n");
                    }
                 else
                    if(dia < 1 || dia > 31 || ano < 1 ){
                        printf("Algum dado esta invalido para calcular data valida!! Fim do Programa!!");
                    }           
            }
       
    }


    return 0;
}