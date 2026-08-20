#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
float num1,num2;
int op;
	printf("Digite dois numeros: ");
	scanf("%f %f", &num1,&num2);
	
	printf("Escolha uma opcao\n");
	printf("1 --- Soma \n");
	printf("2 --- Subtracao \n");
	printf("3 --- Multiplicacao \n");
	printf("4 --- Divisao \n");
	printf("Escolha: ");
	scanf("%d", &op);
	
	switch(op)
	{
	case 1:
		printf("Resultado: %.2f", num1 + num2);
	break;
	
	case 2:
		printf("Resultado: %.2f", num1 - num2);
	break;
	
	case 3:
		printf("Resultado: %.2f", num1 * num2);
	break;
	
	case 4:
		if(num2 != 0)
			printf("Resultado: %.2f", num1 / num2);
		else
			printf("Nao e possivel dividir por zero");
	break;
	
	default:
		printf("OPCAO INVALIDA");
	}
}
