#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
	int a,b,c, p1,p2,p3;
	printf("Digite 3 notas para ver sua média: ");
	scanf("%d %d %d", &a,&b,&c);
	printf("Digite os 3 pesos: ");
	scanf("%d %d %d", &p1,&p2,&p3);
	printf("Média das notas: %d\n", (a*p1 + b*p2 + c*p3)/(p1 + p2 + p3));
}