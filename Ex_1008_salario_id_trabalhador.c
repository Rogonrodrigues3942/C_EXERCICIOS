/*Escreva um programa que leia o número de um funcionário, 
seu número de horas trabalhadas, o valor que recebe por hora e 
calcula o salário desse funcionário. A seguir, 
mostre o número e o salário do funcionário, com duas casas decimais.*/

#include <stdio.h>

int main(){

    int idfunc, hora, valor;
    float salario = 0;

    printf("Insira o identificacao: ");
    scanf("%d", &idfunc);
    printf("Quantas horas trabalhadas no mes: ");
    scanf("%d", &hora);
    printf("Qual o valor da hora trabalhada: ");
    scanf("%d", &valor);

    salario = (float)hora * valor;

    printf("\n\nO colaborador: %d, salario: %8.2f\n", idfunc, salario);    

    return 0;
}