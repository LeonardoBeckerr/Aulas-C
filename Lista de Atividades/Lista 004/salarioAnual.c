#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ano, anoAtual;
    float salario, aumento,percentual; 
    
    salario = 1000.0;
    percentual = 0.015;
    anoAtual = 2026;
    for (ano = 2019; ano <= anoAtual; ano++) {
    	aumento = salario * percentual;
    	salario = salario + aumento;
        printf("Ano atual: %d | ", ano);
        printf("Salario atual: %.2f\n", salario); 
        printf("-----------------------------------\n");
        percentual = percentual * 2; 
    }
    
}