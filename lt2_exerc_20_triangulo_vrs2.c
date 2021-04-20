/*Dados tr ˆes valores, A, B, C, verificar se eles podem ser valores dos lados de um tri ˆangulo
e, se forem, se ´e um tri ˆangulo escaleno, equil ´atero ou is ´oscele, considerando os seguintes
conceitos:
 O comprimento de cada lado de um tri ˆangulo ´e menor do que a soma dos outros
dois lados.
 Chama-se equil ´atero o tri ˆangulo que tem tr ˆes lados iguais.
 Denominam-se is ´osceles o tri ˆangulo que tem o comprimento de dois lados iguais.
 Recebe o nome de escaleno o tri ˆangulo que tem os tr ˆes lados diferentes.*/

#include <stdio.h>

int main(){
    //Declaração de variávies.
    float a, b, c;

    //Entrada de dados
    printf("\n\n******\nLados de tringulo\n*********\n");
    printf("Digite um valor para o lado A: ");
    scanf("%f", &a);
    printf("Digite um valor para o lado B: ");
    scanf("%f", &b);
    printf("Digite um valor para o lado C: ");
    scanf("%f", &c);

    /*Processamento de dados: Comparando lados para determinar se é triangulo ou não. 
    Caso não seja, encerra processamento, finalizando o programa.*/
    
    if(a > 0 && b > 0 && c > 0){
        if(a < b + c && b < c + a  && c < a + b)
             printf("\nEh um triangulo!");
        else{
            printf("\nNao eh um triangulo! Fim do programa!\n");
            return 0;
        } 
    }
    else{
        printf("\nNao eh um triangulo. Todos os lados devem ser maiores que zero!! Valores invalidos, fim do programa!\n\n");
        return 0;
    }
           
//Caso seja um triangulo, determinando o tipo.
    if( a == b && b == c){
        printf("\nTriangulo equilatero, possui tres lados iguais.\n");
    }
    else 
        if(a == b || a == c || b == c)
            printf("\nTriangulo Isosceles, tem 2 lados iguais.\n");
    else
        printf("\nEh triangulo Escaleno, tem 3 lados diferentes.\n");    

    return 0;
}