#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	printf("Digite 3 numeros: ");
	scanf("%d	%d 	%d", &a,&b,&c);
	if (a >= b)
		printf("O maior numero é: %d" , a);
	else if (b >= c)
		printf("O maior numero é: %d" , b);
	else
		printf("O maior numero é: %d" , c);
}