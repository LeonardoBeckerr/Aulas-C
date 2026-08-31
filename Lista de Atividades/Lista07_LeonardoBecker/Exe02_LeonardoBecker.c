#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char modelos[5][50];
    float consumo[5], litros, maior_consumo;
    int i, posicao_economico;

    for(i = 0; i < 5; i++){
        printf("Digite o modelo do %d veiculo: ", i + 1);
        scanf("%49s", modelos[i]);
    }

    for(i = 0; i < 5; i++){
        printf("Digite quantos quilometros por litro o %d veiculo faz: ", i + 1);
        scanf("%f", &consumo[i]);

        litros = 1000 / consumo[i];
        printf("O veiculo %s consome %.2f litros de combustivel para percorrer 1000 km\n\n", modelos[i], litros);

        if(i == 0 || consumo[i] > maior_consumo){
            maior_consumo = consumo[i];
            posicao_economico = i;
        }
    }

    printf("O veiculo mais economico e o %s\n", modelos[posicao_economico]);

    return 0;
}
