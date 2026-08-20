#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
	int numero;
	printf("Digite sua idade: \n");
	scanf("%d", &numero);
	if (numero >= 0 && numero <= 11.)
		printf("Você é criança");
	else if (numero >= 12 && numero <= 18)
		printf("Você é adolescente");
	else if (numero >= 19 && numero <= 24)
		printf("Você é jovem");
	else if (numero >= 25 && numero <= 59)
		printf("Você é adulto");
	else if (numero >= 60)
		printf("Você é idoso");	
	else 
		printf("Numero Invalido");
}