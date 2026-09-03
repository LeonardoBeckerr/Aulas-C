#include <stdio.h>
#include <locale.h>
#include "exercicio5.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    char sexo[5];
    char olhos[5];
    char cabelos[5];
    int idade[5];

    ler_dados(sexo, olhos, cabelos, idade);

    float media = media_idade_olhosC_cabelosP(olhos, cabelos, idade);
    printf("Média de idade com olhos castanhos e cabelos pretos: %.2f\n", media);

    int maior_idade = maior_idade_habitantes(idade);
    printf("Maior idade entre os habitantes: %d\n", maior_idade);

    int qtd_mulheres = quantidade_mulheres_especificas(sexo, olhos, cabelos, idade);
    printf("Quantidade de mulheres (18-35 anos, olhos azuis e cabelos louros): %d\n", qtd_mulheres);

    getchar();
    return 0;
}