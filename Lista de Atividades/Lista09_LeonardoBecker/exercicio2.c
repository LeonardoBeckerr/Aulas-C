#include <stdio.h>
#include <locale.h>
#include "C:\Users\leonardo_oliveira41\Documents\GitHub\Aulas-C\Lista de Atividades\Lista09_LeonardoBecker\exercicio2.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x, y, resultado;

    printf("\nDigite o valor de x: ");
    scanf("%d%*c", &x);

    printf("\nDigite o valor de y: ");
    scanf("%d%*c", &y);

    resultado = sub_rotina(x, y);

    printf("A soma dos numeros entre x e y e: %d\n", resultado);

    getchar();
    return 0;
}