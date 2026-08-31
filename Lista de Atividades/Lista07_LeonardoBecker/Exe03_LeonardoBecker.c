#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[10], i, encontrou;

    encontrou = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros superiores a cinquenta:\n");
    for(i = 0; i < 10; i++){
        if(numeros[i] > 50){
            printf("Numero %d na posicao %d\n", numeros[i], i);
            encontrou = 1;
        }
    }

    if(encontrou == 0){
        printf("Nao existe nenhum numero superior a cinquenta.\n");
    }

    return 0;
}
