#include <stdio.h>
#include <locale.h>

void converte_tempo(int total_segundos, int *horas, int *minutos, int *segundos) {
    *horas = total_segundos / 3600;
    *minutos = (total_segundos % 3600) / 60;
    *segundos = total_segundos % 60;
}
