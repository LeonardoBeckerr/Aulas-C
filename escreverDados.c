#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[100], endereco[150], telefone[30], cidade[50], cep[20];

    printf("Digite o Nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o Endereço: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Digite o Telefone: ");
    fgets(telefone, sizeof(telefone), stdin);

    printf("Digite a Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite o CEP: ");
    fgets(cep, sizeof(cep), stdin);

    printf("\n=== DADOS CADASTRADOS ===\n");
    printf("Nome: %s", nome);
    printf("Endereço: %s", endereco);
    printf("Telefone: %s", telefone);
    printf("Cidade: %s", cidade);
    printf("CEP: %s", cep);

}