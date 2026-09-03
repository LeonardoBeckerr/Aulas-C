#include <stdio.h>
#include <locale.h>
#include "exercicio3.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    int seg_total, h, m, s;

    printf("Digite o valor em segundos: ");
    scanf("%d%*c", &seg_total);

    converte_tempo(seg_total, &h, &m, &s);

    printf("\n%d segundos equivalem a: %d horas, %d minutos e %d segundos.\n", seg_total, h, m, s);

    getchar();
    return 0;
}