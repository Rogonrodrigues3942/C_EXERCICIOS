/*Faça um programa que leia 2 notas de um aluno, verifique se as notas 
são válidas e exiba na tela a média destas notas. Uma nota válida deve ser,
obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um
valor válido, este fato deve ser informado ao usuário e o programa termina.*/

#include <stdio.h>

int main(){

    float nota1, nota2, md;

    printf("\nCalculo de media\n\n");

    printf("Entre com a nota 1: ");
    scanf("%f", &nota1);
    printf("\nEntre com a nota 2: ");
    scanf("%f", &nota2);

    if (nota1 < 0 && nota1 > 10 ){
        printf("Nota 1 invalida, fim do programa");
        break;
    } else 
        if (nota2 < 0 && nota2 > 10){
            printf("Nota 2 invalida, fim do programa!! ");
            break;
        }
    else
    {
        md = (nota1 + nota2) / 2;
        printf("Notas 1 e 2 validas, a media eh: %7.3f\n\n", md);
    }


    return 0;
}