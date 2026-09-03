#include <stdio.h>
#include <string.h>
#include <locale.h>

int sub_rotina(int x, int y) {
    int soma = 0;
    
    x = x + 1;
    while (x < y) {
        soma = soma + x;
        x++;
    }
    
    return soma;
}