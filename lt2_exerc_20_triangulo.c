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

    float a, b, c;

    printf("\n\n******\nLados de tringulo\n*********\n");
    printf("Digite um valor para o lado A: ");
    scanf("%f", &a);
    printf("Digite um valor para o lado B: ");
    scanf("%f", &b);
    printf("Digite um valor para o lado C: ");
    scanf("%f", &c);

//Comparando lados para determinar se é triangulo ou não. Caso não seja, encerra processamento.
    if(a < b + c)
        printf("\nEh um triangulo! A soma dos lados B e C, eh maior que o valor do lado A.");
    else 
        if(a > b+ c){
             printf("\nNao eh um triangulo! A soma dos lados B e C, eh menor que o valor do lado A.");
             return 0;
        }
    else 
        if( b < a + c)
            printf("\nEh um triangulo! A soma dos lados A e C, eh maior que o valor do lado B.");
     else
        if( b > a + c){
             printf("\nNão eh um triangulo! A soma dos lados A e C, eh menor que o valor do lado B.");
             return 0;
        }
    else 
        if(c < a + b)
            printf("\nEh um trinagulo! A soma dos lados A e B, eh maior que o valor do lado C.");
    else{
        printf("\nNao eh um trinagulo! A soma dos lados A e B, eh menor que o valor do lado C.");
        return 0;
    }

//Caso seja um triangulo, determinando o tipo.
    if( a == b && b == c){
        printf("\nTriangulo equilatero, possui tres lados iguais");
    }
    else 
        if(a == b || a == c || b == c)
            printf("\nTriangulo Isosceles, tem 2 lados iguais.");
    else
        printf("\nEh triangulo Escaleno, tem 3 lados diferentes. ");    

    return 0;
}