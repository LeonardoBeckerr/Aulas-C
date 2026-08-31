#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float precos[10], total_objeto, total_vendas, comissao, salario;
    int quantidades[10], i, posicao_mais_vendido;

    total_vendas = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o valor unitario do objeto %d: ", i + 1);
        scanf("%f", &precos[i]);
        printf("Digite a quantidade vendida do objeto %d: ", i + 1);
        scanf("%d", &quantidades[i]);

        if(i == 0 || quantidades[i] > quantidades[posicao_mais_vendido]){
            posicao_mais_vendido = i;
        }
    }

    printf("\n================ RELATORIO ================\n");
    for(i = 0; i < 10; i++){
        total_objeto = precos[i] * quantidades[i];
        total_vendas = total_vendas + total_objeto;
        printf("Objeto %d | Quantidade: %d | Valor unitario: R$ %.2f | Valor total: R$ %.2f\n", i + 1, quantidades[i], precos[i], total_objeto);
    }

    comissao = total_vendas * 0.05;
    salario = 545 + comissao;

    printf("\nValor geral das vendas: R$ %.2f\n", total_vendas);
    printf("Valor da comissao: R$ %.2f\n", comissao);
    printf("Salario total do vendedor: R$ %.2f\n", salario);
    printf("Objeto mais vendido: objeto %d\n", posicao_mais_vendido + 1);
    printf("Quantidade vendida: %d\n", quantidades[posicao_mais_vendido]);
    printf("Posicao no vetor: %d\n", posicao_mais_vendido);

    return 0;
}
