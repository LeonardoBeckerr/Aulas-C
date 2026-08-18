#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Contador

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i,num,cont;
	cont = 0;
		for (i = 1; i <=5; i++){
			printf("Digite um numero: ");
			scanf("%d%*c",&num);
			if(num>5)
			cont = cont+1;
		}
			printf("Quantidade de Numeros maiores que 5 = %d",cont);
}