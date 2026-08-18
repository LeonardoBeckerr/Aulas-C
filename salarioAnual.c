#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, anosAver, ano;
    float salario, aumento,percentual; 
    
    salario = 1000.0;
    percentual = 0.015;
    ano = 2018;
        
    printf("Digite quantos anos de aumento salarial deseja ver (Desde 2018): ");
    scanf("%d", &anosAver); 
    printf("\n");
        
    for (i = 1; i <= anosAver + 1; i++) {
    	aumento = salario * percentual;
    	salario = salario + aumento;
        printf("Ano atual: %d | ", ano + 1);
        printf("Salario atual: %.2f\n", salario); 
        printf("-----------------------------------\n");
        
        ano = ano + 1;
        percentual = percentual * 2; 
    }
    
}