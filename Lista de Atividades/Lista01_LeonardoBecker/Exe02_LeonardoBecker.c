#include <stdio.h>
int main()
{
// faça um programa que receba o salario base de um funcionario. calcule e mostre o salario a receber
// sabendo que o funcionario tem gratificação de 5% sobre o salario base e paga 7% de imposto sobre o salario base
// faça exibir o valor da gratificação, valor do imposto e o salario a receber

   float salario, valorgratificacao, valorimposto, novosalario; 
   printf("Informe seu salario: ");
   scanf("%f%*c", &salario);
   valorgratificacao = salario * 0.05;
   valorimposto = salario * 0.07;
   novosalario = salario + valorgratificacao - valorimposto;
   printf("Salario a receber : %.2f\n", novosalario);
   printf("Valor Gratificação: %.2f\n", valorgratificacao);
   printf("Valor Imposto: %.2f\n", valorimposto);
   system("pause");
   return 0;
}
