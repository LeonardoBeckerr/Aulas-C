#include <stdio.h>
int main()
{
// faça um programa que receba o valor de um deposito e o valor da taxa de juros
// calcule e mostre o valor do rendimento e o valor total depois do rendimento


   float deposito, rendimento, valorendimento, valordepoisrendimento; 
   printf("Informe seu deposito: ");
   scanf("%f%*c", &deposito);
   printf("Informe seu rendimento: ");
   scanf("%f%*c", &rendimento);
   valorendimento = deposito * rendimento/100;
   valordepoisrendimento = deposito + valorendimento;
   printf("Valor Rendimento : %.2f\n", valorendimento);
   printf("Valor Total apos o rendimento: %.2f\n", valordepoisrendimento);
   system("pause");
   return 0;
}
