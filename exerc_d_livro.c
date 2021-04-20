//Apresentar números divisíveis por 4, no intervalo 1 a 200.

#include <stdio.h>

int main(){

    int i = 1;

    while(i < 201){
        if(i % 4 == 0)
            printf("%3d ", i);
            
        if(i % 40 == 0)
            printf("\n");
        
        i++;
    }

    return 0;
}