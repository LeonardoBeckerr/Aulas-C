#include <stdio.h>
#include <locale.h>
#include "Exe02_LeonardoBecker.h"

int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, media;
    char letra;

    printf("Digite a 1a nota: ");
    scanf("%f%*c", &nota1);
    printf("Digite a 2a nota: ");
    scanf("%f%*c", &nota2);
    printf("Digite a 3a nota: ");
    scanf("%f%*c", &nota3);

    printf("Digite uma letra (A - Media aritmetica, P - Media ponderada): ");
    scanf(" %c%*c", &letra);

    if (letra == 'A' || letra == 'a' || letra == 'P' || letra == 'p') {
        media = calcula_media(nota1, nota2, nota3, letra);
        printf("\nMedia = %.2f\n", media);
    }
    else {
        printf("\nOpcao invalida.\n");
    }

    getchar();
    return 0;
}
