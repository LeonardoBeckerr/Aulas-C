#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[9], i, j, divisores;

    for(i = 0; i < 9; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros primos e suas posicoes:\n");
    for(i = 0; i < 9; i++){
        divisores = 0;
        for(j = 1; j <= numeros[i]; j++){
            if(numeros[i] % j == 0){
                divisores = divisores + 1;
            }
        }
        if(numeros[i] > 1 && divisores == 2){
            printf("Numero %d na posicao %d\n", numeros[i], i);
        }
    }

    return 0;
}
