#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
	int a,b,c,d;
	printf("Digite 4 numeros inteiros para somar todos: ");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	printf("Soma dos números: %d\n", a + b + c + d);
}