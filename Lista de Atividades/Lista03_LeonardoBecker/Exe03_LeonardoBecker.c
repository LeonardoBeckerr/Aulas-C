#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
int op;
float salario;

	printf("Digite um numero e escolha sua opção\n");
	printf("1 --- Imposto \n");
	printf("2 --- Novo salário \n");
	printf("3 --- Classificação \n");
	printf("Escolha: ");
	scanf("%d", &op);
	
	switch(op)
	{
	case 1: 
	 	printf("Informe seu salario: ");
   		scanf("%f%*c", &salario);
   		if(salario < 500)
   			printf("O valor do seu imposto é: R$%.2f", salario * 0.05 );
   		else if(salario >= 500 && salario <= 850)
   			printf("O valor do seu imposto é: R$%.2f", salario * 0.10 );
   		else 
   			printf("O valor do seu imposto é: R$%.2f", salario * 0.15 );
   		
	break;
	
	case 2: 
	 	printf("Informe seu salario: ");
   		scanf("%f%*c", &salario);
   		if(salario < 450)
   			printf("Seu novo salario é: R$%.2f", salario + 100 );
   		else if(salario >= 450 && salario <= 749)
   			printf("Seu novo salario é: R$%.2f", salario + 75 );
   		else if(salario >= 750 && salario <= 1500)
   			printf("Seu novo salario é: R$%.2f", salario + 50 );
   		else
   			printf("Seu novo salario é: R$%.2f", salario + 25 );
   		
	break;	
	
	case 3: 
	 	printf("Informe seu salario: ");
   		scanf("%f%*c", &salario);
   		if(salario <= 700)
   			printf("Mal remunerado");
   		else
   			printf("Bem remunerado");
   		
	break;
	
	default: 
	printf("OPÇÃO INVALIDA");
    }
}
