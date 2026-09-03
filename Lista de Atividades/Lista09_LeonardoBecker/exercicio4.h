#include <stdio.h>
#include <locale.h>

void determina_maior_menor(int *maior, int *menor) {
    int num;

    printf("Digite o 1º número: ");
    scanf("%d%*c", &num);
    
    *maior = num;
    *menor = num;

    for (int i = 2; i <= 4; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d%*c", &num);

        if (num > *maior) {
            *maior = num;
        }
        if (num < *menor) {
            *menor = num;
        }
    }
}