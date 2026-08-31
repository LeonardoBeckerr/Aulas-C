#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float matriz[5][3];
    float total_armazem, menor_estoque, custo_total;
    int i, j, armazem_maior_produto2, armazem_menor_estoque;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o estoque do produto %d no armazem %d: ", j + 1, i + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for(j = 0; j < 3; j++){
        printf("Digite o custo do produto %d: ", j + 1);
        scanf("%f", &matriz[4][j]);
    }

    armazem_maior_produto2 = 0;
    for(i = 1; i < 4; i++){
        if(matriz[i][1] > matriz[armazem_maior_produto2][1]){
            armazem_maior_produto2 = i;
        }
    }

    for(i = 0; i < 4; i++){
        total_armazem = 0;
        for(j = 0; j < 3; j++){
            total_armazem = total_armazem + matriz[i][j];
        }

        printf("O total de itens no armazem %d e %.2f\n", i + 1, total_armazem);

        if(i == 0 || total_armazem < menor_estoque){
            menor_estoque = total_armazem;
            armazem_menor_estoque = i;
        }
    }

    printf("Armazem com menor estoque: %d\n", armazem_menor_estoque + 1);
    printf("O maior estoque do produto 2 esta no armazem %d\n", armazem_maior_produto2 + 1);

    for(j = 0; j < 3; j++){
        custo_total = 0;
        for(i = 0; i < 4; i++){
            custo_total = custo_total + matriz[i][j] * matriz[4][j];
        }
        printf("O custo total do produto %d: R$ %.2f\n", j + 1, custo_total);
    }

    for(i = 0; i < 4; i++){
        custo_total = 0;
        for(j = 0; j < 3; j++){
            custo_total = custo_total + matriz[i][j] * matriz[4][j];
        }
        printf("O custo total do armazem %d e R$ %.2f\n", i + 1, custo_total);
    }

    return 0;
}
