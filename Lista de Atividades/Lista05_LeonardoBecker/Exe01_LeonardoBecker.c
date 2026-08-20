#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int total_criancas, tempo_vida, i;
    int mortas_f = 0, mortas_m = 0, mortas_24 = 0;
    char sexo;

    printf("Digite o número de crianças: ");
    scanf("%d", &total_criancas);

    if (total_criancas <= 0) {
        printf("Número de crianças deve ser maior que zero.\n");
        return 0;
    }

    i = 1;
    while (i <= total_criancas) {
        printf("\n--- Criança %d de %d ---\n", i, total_criancas);

        printf("Digite o sexo da criança (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'F' || sexo == 'f') {
            mortas_f++;
        } else if (sexo == 'M' || sexo == 'm') {
            mortas_m++;
        }

        printf("Digite o tempo de vida (em meses): ");
        scanf("%d", &tempo_vida);

        if (tempo_vida <= 24) {
            mortas_24++;
        }

        i++;
    }

    float perc_f = ((float)mortas_f / total_criancas) * 100;
    float perc_m = ((float)mortas_m / total_criancas) * 100;
    float perc_24 = ((float)mortas_24 / total_criancas) * 100;

    printf("\n=== RESULTADOS ===\n");
    printf("Porcentagem de crianças do sexo feminino mortas: %.2f%%\n", perc_f);
    printf("Porcentagem de crianças do sexo masculino mortas: %.2f%%\n", perc_m);
    printf("Porcentagem de crianças que viveram 24 meses ou menos: %.2f%%\n", perc_24);

}