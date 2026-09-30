#include <stdio.h>
#include <locale.h>
#include "Exe01_LeonardoBecker.h"

int main(){
	setlocale(LC_ALL,"portuguese");
	int x;
	
	printf("\nDigite o valor de a: ");
	scanf("%d%*c", &x);
	
	sub_rotina(x);

		
	getchar();
	return 0;
}
