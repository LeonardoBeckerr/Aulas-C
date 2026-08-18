#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Acumulador

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i,num,soma;
	soma = 0;
		for (i = 1; i <=5; i++){
			printf("Digite um numero: ");
			scanf("%d%*c",&num);
			soma = soma + num;
		}
			printf("Soma = %d",soma);
}