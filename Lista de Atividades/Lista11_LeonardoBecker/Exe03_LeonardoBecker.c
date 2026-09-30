#include <stdio.h>
#include <locale.h>
#include "Exe03_LeonardoBecker.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, resultado;
    char simbolo;

    printf("Digite o primeiro numero: ");
    scanf("%f%*c", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f%*c", &num2);

    printf("Digite o simbolo da operacao desejada (+ ou *): ");
    scanf(" %c%*c", &simbolo);

    while (simbolo != '+' && simbolo != '*') {
        printf("Operacao invalida. Digite + ou *: ");
        scanf(" %c%*c", &simbolo);
    }

    resultado = calcula_operacao(num1, num2, simbolo);
    printf("\nResultado = %.2f\n", resultado);

    getchar();
    return 0;
}
