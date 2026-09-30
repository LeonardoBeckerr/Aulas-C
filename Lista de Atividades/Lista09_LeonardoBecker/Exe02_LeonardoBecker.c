#include <stdio.h>
#include <locale.h>
#include "Exe02_LeonardoBecker.h"

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
