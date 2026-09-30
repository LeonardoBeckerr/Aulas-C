#include <stdio.h>
#include <locale.h>
#include "Exe01_LeonardoBecker.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    int hora_inicio, minuto_inicio, hora_fim, minuto_fim, duracao;

    printf("Inicio do jogo: digite a hora e os minutos: ");
    scanf("%d %d%*c", &hora_inicio, &minuto_inicio);

    printf("Fim do jogo: digite a hora e os minutos: ");
    scanf("%d %d%*c", &hora_fim, &minuto_fim);

    duracao = duracao_jogo(hora_inicio, minuto_inicio, hora_fim, minuto_fim);

    printf("\nA duracao do jogo foi de %d minutos.\n", duracao);

    getchar();
    return 0;
}
