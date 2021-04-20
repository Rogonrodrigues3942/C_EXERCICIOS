/*Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se
for divisívvel por 400 ou se for divisível por 4 e n˜ao for divis´ıvel por 100. Por exemplo:
1988, 1992, 1996.*/

#include <stdio.h>

int main(){

    int ano;
    
    printf("\n*****\nVerificacao de ano bissexto\n**********\n");
    printf("Insira o ano: ");
    scanf("%d", &ano);

    /*Verificação de ano bissexto, processamento e saida da informação.*/

    if((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0))
        printf("\nO ano de %d eh bissexto.\n", ano);
    else
        printf("\nO ano de %d nao eh bissexto.\n", ano); 

    return 0;
}