#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	printf("Digite 3 notas para ver sua média: ");
	scanf("%d %d %d", &a,&b,&c);
	printf("Média das notas: %d\n", (a + b + c)/3);
}