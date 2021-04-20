/*11. Preencher um vetor de 20 posições com os 20 primeiros números primos.*/

#include <stdio.h>
#include <stdlib.h>

#define tam 4

int main(){


    int vetor[tam] = {0};
    int cont, num, primo = 0, div = 0;

    printf("Digite um numero qualaquer: ");
    scanf("%d", &num);

  
        
            for (int i = 1; i <= num; i++){
                div = num % i;
                if(div == 0)
                    cont++;
            }
           if(cont == 2){
                printf("numero primo");
            }
            

    return 0;

}