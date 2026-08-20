#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
	float a,b,c, p1,p2,p3;
	printf("Digite 3 notas para ver sua média: ");
	scanf("%f %f %f", &a,&b,&c);
	printf("Digite os 3 pesos: ");
	scanf("%f %f %f", &p1,&p2,&p3);
	printf("Media das notas: %.2f\n", (a*p1 + b*p2 + c*p3)/(p1 + p2 + p3));
}