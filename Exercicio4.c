#include <stdio.h>
int main()
{
// faça um programa que receba medida em pés e faça as conversoes a seguir 
// pe = 12 polegadas, 1 jarda = 3 pe, 1 milha = 1760 jardas


   float pes;
   printf("Informe a medida em Pes: ");
   scanf("%f%*c", &pes);
   printf("Valor em polegadas : %.2f\n", pes * 12);
   printf("Valor em jardas : %.2f\n", pes / 3);
   printf("Valor em milhas : %.2f\n", pes / 5280);
   system("pause");
   return 0;
}
