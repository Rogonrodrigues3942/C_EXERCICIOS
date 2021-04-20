#include <stdio.h>

int main(){
    int dia, mes, ano;

    /*Entrada de dados, inserindo data, com valores inteiros positivos, obedencendo seus respectivos intervalos.*/
    
    printf("Insira um dia (valor inteiro): ");
    scanf("%d", &dia);
    printf("Insira um mes (valor inteiro de 1 a 12): ");
    scanf("%d", &mes);
    printf("Insira um ano (valor inteiro > 0): ");
    scanf("%d", &ano);

    /*Processamento checando se o ano é bissexto e imprimindo a data*/
    if( ( dia > 0  && dia <= 31) && (mes > 0 && mes < 13) && ano >0 ){
        if(ano % 4 == 0 || ano % 400 == 0 && ano % 100 != 0){
            if( mes == 2){
                if( dia > 0 && dia < 30){
                    printf(" %02d %02d %04d\n", dia, mes, ano);
                }
            }
        }
        /*Processando e validando datas dos demais anos.*/
        else
            while(ano > 0){
                if( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
                printf ("%02d %02d %4d\n", dia, mes, ano);
            }
             else
                if(mes == 4 || mes == 6 || mes == 9 || mes ==11 && dia < 31){
                
                    printf("%02d %02d %4d\n", dia, mes, ano);
                }
            else{
                if(mes == 2 && dia < 29){
                    printf("%02d %02d %04d\n", dia, mes, ano);
                }
                else
                    if(dia > 28){
                        printf("Nao eh ano bissexto, fevereiro tem 28 dias.\n");
                    }                
            }
        }//fim de while
            
    }
    else
    {
        printf("\nAlgum dado esta fora dos parametros, para validar a data.");
        printf("\nPrograma encerrado!! Execute-o novamente, com parametros corretos!\n\n");    
    }
    
    return 0;
}