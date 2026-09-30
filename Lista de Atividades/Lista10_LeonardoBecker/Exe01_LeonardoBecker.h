#include <stdio.h>
#include <locale.h>

void ler_dados(char sexo[], char olhos[], char cabelos[], int idade[]) {
    for (int i = 0; i < 5; i++) {
        printf("Dados da %dª pessoa\n", i + 1);
        
        printf("Digite o sexo (M ou F): ");
        scanf(" %c%*c", &sexo[i]);

        printf("Digite a cor dos olhos (C-castanhos ou A-azuis): ");
        scanf(" %c%*c", &olhos[i]);

        printf("Digite a cor dos cabelos (C-castanhos, L-louros ou P-pretos): ");
        scanf(" %c%*c", &cabelos[i]);

        printf("Digite a idade: ");
        scanf("%d%*c", &idade[i]);
        printf("\n");
    }
}

float media_idade_olhosC_cabelosP(char olhos[], char cabelos[], int idade[]) {
    int soma = 0;
    int qtd = 0;

    for (int i = 0; i < 5; i++) {
        if ((olhos[i] == 'C' || olhos[i] == 'c') && (cabelos[i] == 'P' || cabelos[i] == 'p')) {
            soma += idade[i];
            qtd++;
        }
    }

    if (qtd > 0) {
        return (float)soma / qtd;
    }
    return 0.0;
}

int maior_idade_habitantes(int idade[]) {
    int maior = idade[0];
    for (int i = 1; i < 5; i++) {
        if (idade[i] > maior) {
            maior = idade[i];
        }
    }
    return maior;
}

int quantidade_mulheres_especificas(char sexo[], char olhos[], char cabelos[], int idade[]) {
    int qtd = 0;
    for (int i = 0; i < 5; i++) {
        if ((sexo[i] == 'F' || sexo[i] == 'f') && 
            idade[i] >= 18 && idade[i] <= 35 && 
            (olhos[i] == 'A' || olhos[i] == 'a') && 
            (cabelos[i] == 'L' || cabelos[i] == 'l')) {
            qtd++;
        }
    }
    return qtd;
}
