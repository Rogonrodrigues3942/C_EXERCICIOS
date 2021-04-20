#include <stdio.h>
#include <stdlib.h>
int main(void){
 int p_mes[]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};   
 int dia=0, mes=0, ano=0, num_dias=0, i, resp;
 
 //pede os dados
 do{
  system("cls");
  printf("\nInforme o dia:");
  scanf("%d%c", &dia);
  printf("\nInforme o mes:");
  scanf("%d%c", &mes);
  printf("\nInforme o ano:");
  scanf("%d%c", &ano);
 
  //testa se o ano é bisexto
  if (ano%4 == 0 && !(ano%100 == 0 && ano%400 != 0))
   p_mes[1]=29;
  else
   p_mes[1]=28; 
  //calcula a quantidade de dias decorridos
  for (i=0; i<(mes - 1); i++)
   num_dias += p_mes[i]; 
  
  num_dias += dia;  
  printf("\nA data especificada equivale ao [%d] dia do ano.\n", num_dias);
  num_dias=0;
  printf("\nPara terminar digite [ 0 ] zero: ");
  scanf("%d%c",&resp);
 }while(resp);
 
 return 0;
}