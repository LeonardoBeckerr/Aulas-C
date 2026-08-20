#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
	float a,b,c;
	printf("Digite 3 notas para ver sua média: ");
	scanf("%f %f %f", &a,&b,&c);
	printf("Media das notas: %.2f\n", (a + b + c)/3);
}