#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[18], matriz[3][6];
    int i, j, posicao;

    for(i = 0; i < 18; i++){
        printf("Digite o elemento %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    posicao = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            matriz[i][j] = vet[posicao];
            posicao = posicao + 1;
        }
    }

    printf("\nMatriz gerada:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
