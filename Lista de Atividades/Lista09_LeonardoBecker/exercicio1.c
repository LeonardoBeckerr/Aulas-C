#include <stdio.h>
#include <locale.h>
#include "C:\Users\leonardo_oliveira41\Documents\GitHub\Aulas-C\Lista de Atividades\Lista09_LeonardoBecker\exercicio1.h"

int main(){
	setlocale(LC_ALL,"portuguese");
	int x;
	
	printf("\nDigite o valor de a: ");
	scanf("%d%*c", &x);
	
	sub_rotina(x);

		
	getchar();
	return 0;
}