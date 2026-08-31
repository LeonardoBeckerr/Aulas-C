#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome_lojas[8][50];
    char nome_produtos[4][50];
    float preco_produtos[8][4];
    int i, j;

    for(i = 0; i < 8; i++){
        printf("Digite o nome da loja %d: ", i + 1);
        scanf("%49s", nome_lojas[i]);
    }

    for(j = 0; j < 4; j++){
        printf("Digite o nome do produto %d: ", j + 1);
        scanf("%49s", nome_produtos[j]);
    }

    for(i = 0; i < 8; i++){
        printf("Digite para a loja %d:\n", i + 1);
        for(j = 0; j < 4; j++){
            printf("Preco do produto %d: ", j + 1);
            scanf("%f", &preco_produtos[i][j]);
        }
    }

    printf("\nProdutos com preco ate R$ 60.00:\n");
    for(i = 0; i < 8; i++){
        for(j = 0; j < 4; j++){
            if(preco_produtos[i][j] <= 60){
                printf("%s - %s: R$ %.2f\n", nome_produtos[j], nome_lojas[i], preco_produtos[i][j]);
            }
        }
    }

    return 0;
}
