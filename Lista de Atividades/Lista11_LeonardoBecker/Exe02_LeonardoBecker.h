float calcula_media(float nota1, float nota2, float nota3, char letra) {
    float media;

    if (letra == 'A' || letra == 'a') {
        media = (nota1 + nota2 + nota3) / 3;
    }
    else {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    }

    return media;
}
