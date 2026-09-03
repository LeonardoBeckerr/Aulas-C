#include <stdio.h>
#include <locale.h>
#include <C:\Users\leonardo_oliveira41\Documents\GitHub\Aulas-C\rotinas.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int num1,num2,res;
		sub_rotina1();
		sub_rotina2();
		
		printf("\nDigite um numero: ");
		scanf("%d%*c",&num1);
		
		printf("\nDigite outro numero: ");
		scanf("%d%*c",&num2);	
		
		res = sub_rotina3(num1,num2);
		printf("\nresultado = %d",res);
	
	getchar();
	return 0;
}