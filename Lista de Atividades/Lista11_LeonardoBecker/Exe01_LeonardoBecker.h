int duracao_jogo(int hora_inicio, int minuto_inicio, int hora_fim, int minuto_fim) {
    int inicio, fim, duracao;

    inicio = hora_inicio * 60 + minuto_inicio;
    fim = hora_fim * 60 + minuto_fim;
    duracao = fim - inicio;

    if (duracao <= 0) {
        duracao = duracao + 1440;
    }

    return duracao;
}
