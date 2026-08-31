#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz_m[2][2], matriz_r[2][2];
    int i, j, maior;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o elemento da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz_m[i][j]);

            if(i == 0 && j == 0){
                maior = matriz_m[i][j];
            }
            else if(matriz_m[i][j] > maior){
                maior = matriz_m[i][j];
            }
        }
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("\nMatriz resultante:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            matriz_r[i][j] = matriz_m[i][j] * maior;
            printf("%d | ", matriz_r[i][j]);
        }
        printf("\n");
    }

    return 0;
}
