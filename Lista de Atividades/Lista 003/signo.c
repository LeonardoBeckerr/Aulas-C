#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
int num1,num2;
	printf("Digite o mês e o dia do seu nascimento e veja seu signo \n");
	scanf("%d %d",&num1,&num2);
	
switch(num1)
	{
	case 1: 
		if (num2 >= 1 && num2 <= 19)
			printf("Você é do signo de Capricórnio");
		else if (num2 >= 20 && num2 <= 31)
			printf("Você é do signo de Aquário");
		else
			printf("Dia Invalido");
		break;

	case 2:
		if (num2 >= 1 && num2 <= 18)
			printf("Você é do signo de Aquário");
		else if (num2 >= 19 && num2 <= 29)
			printf("Você é do signo de Peixes");
		else
			printf("Dia Invalido");
		break;

	case 3:
		if (num2 >= 1 && num2 <= 20)
			printf("Você é do signo de Peixes");
		else if (num2 >= 21 && num2 <= 31)
			printf("Você é do signo de Áries");
		else
			printf("Dia Invalido");
		break;

	case 4:
		if (num2 >= 1 && num2 <= 19)
			printf("Você é do signo de Áries");
		else if (num2 >= 20 && num2 <= 30)
			printf("Você é do signo de Touro");
		else
			printf("Dia Invalido");
		break;

	case 5:
		if (num2 >= 1 && num2 <= 20)
			printf("Você é do signo de Touro");
		else if (num2 >= 21 && num2 <= 31)
			printf("Você é do signo de Gêmeos");
		else
			printf("Dia Invalido");
		break;

	case 6:
		if (num2 >= 1 && num2 <= 21)
			printf("Você é do signo de Gêmeos");
		else if (num2 >= 22 && num2 <= 30)
			printf("Você é do signo de Câncer");
		else
			printf("Dia Invalido");
		break;

	case 7:
		if (num2 >= 1 && num2 <= 22)
			printf("Você é do signo de Câncer");
		else if (num2 >= 23 && num2 <= 31)
			printf("Você é do signo de Leão");
		else
			printf("Dia Invalido");
		break;

	case 8:
		if (num2 >= 1 && num2 <= 22)
			printf("Você é do signo de Leão");
		else if (num2 >= 23 && num2 <= 31)
			printf("Você é do signo de Virgem");
		else
			printf("Dia Invalido");
		break;

	case 9:
		if (num2 >= 1 && num2 <= 22)
			printf("Você é do signo de Virgem");
		else if (num2 >= 23 && num2 <= 30)
			printf("Você é do signo de Libra");
		else
			printf("Dia Invalido");
		break;

	case 10:
		if (num2 >= 1 && num2 <= 22)
			printf("Você é do signo de Libra");
		else if (num2 >= 23 && num2 <= 31)
			printf("Você é do signo de Escorpião");
		else
			printf("Dia Invalido");
		break;

	case 11:
		if (num2 >= 1 && num2 <= 21)
			printf("Você é do signo de Escorpião");
		else if (num2 >= 22 && num2 <= 30)
			printf("Você é do signo de Sagitário");
		else
			printf("Dia Invalido");
		break;

	case 12:
		if (num2 >= 1 && num2 <= 21)
			printf("Você é do signo de Sagitário");
		else if (num2 >= 22 && num2 <= 31)
			printf("Você é do signo de Capricórnio");
		else
			printf("Dia Invalido");
		break;
		
	default: 
		printf("Mês Invalido");
	}
}
