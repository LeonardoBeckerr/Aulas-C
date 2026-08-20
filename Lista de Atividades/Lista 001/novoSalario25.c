#include <stdio.h>
int main()
{
   // Faça um programa que receba o salario de um funcionario, calcule e mostre: Salario atual, O valor aumentado e o 
   //novo salario sabendo que este sofreu um aumento de 25% 
   
   float salario, salarionovo, valoraumentado;
   printf("Informe seu salario: ");
   scanf("%f%*c", &salario);
   salarionovo = salario * 1.25;
   valoraumentado = salario * 0.25;
   printf("Salario Atual: %.2f\n", salario);
   printf("Salario Novo: %.2f\n", salarionovo);
   printf("Valor Aumentado: %.2f\n", valoraumentado);
   system("pause");
   return 0;
}
