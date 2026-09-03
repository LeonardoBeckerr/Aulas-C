#include <stdio.h>
#include <locale.h>
#include "exercicio4.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    int maior, menor;

    determina_maior_menor(&maior, &menor);

    printf("\nO maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n", menor);

    getchar();
    return 0;
}