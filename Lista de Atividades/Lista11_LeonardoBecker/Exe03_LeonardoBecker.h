float calcula_operacao(float num1, float num2, char simbolo) {
    float resultado;

    if (simbolo == '+') {
        resultado = num1 + num2;
    }
    else {
        resultado = num1 * num2;
    }

    return resultado;
}
