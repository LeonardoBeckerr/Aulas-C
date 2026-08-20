#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, codigo, veiculos, indice;
    int maior_indice = 0, cod_maior = 0;
    int menor_indice = 0, cod_menor = 0;
    int soma_veiculos = 0;
    int soma_acidentes_menos_2000 = 0;
    int qtd_menos_2000 = 0;
    float media_veiculos = 0.0;
    float media_acidentes_menos_2000 = 0.0;

    for (i = 1; i <= 5; i++) {
        printf("Digite o código da cidade: ");
        scanf("%d", &codigo);

        printf("Digite o número de veículos de passeio da cidade %d: ", codigo);
        scanf("%d", &veiculos);

        printf("Digite o número de acidentes de trânsito com vítimas da cidade %d: ", codigo);
        scanf("%d", &indice);
        printf("\n");

        soma_veiculos = soma_veiculos + veiculos;

        if (veiculos < 2000) {
            soma_acidentes_menos_2000 = soma_acidentes_menos_2000 + indice;
            qtd_menos_2000++;
        }

        if (i == 1) {
            maior_indice = indice;
            cod_maior = codigo;
            menor_indice = indice;
            cod_menor = codigo;
        } else {
            if (indice > maior_indice) {
                maior_indice = indice;
                cod_maior = codigo;
            }
            if (indice < menor_indice) {
                menor_indice = indice;
                cod_menor = codigo;
            }
        }
    }

    media_veiculos = (float)soma_veiculos / 5;

    printf("Maior índice de acidentes: %d (Cidade: %d)\n", maior_indice, cod_maior);
    printf("Menor índice de acidentes: %d (Cidade: %d)\n", menor_indice, cod_menor);
    printf("Média de veículos nas cinco cidades: %.2f\n", media_veiculos);

    if (qtd_menos_2000 > 0) {
        media_acidentes_menos_2000 = (float)soma_acidentes_menos_2000 / qtd_menos_2000;
        printf("Média de acidentes nas cidades com menos de 2000 veículos: %.2f\n", media_acidentes_menos_2000);
    } else {
        printf("Nenhuma cidade possui menos de 2000 veículos.\n");
    }
    
}