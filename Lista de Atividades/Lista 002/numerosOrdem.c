#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"Portuguese");
	int a,b;
	printf("Digite 2 numeros: ");
	scanf("%d	%d", &a,&b);
	if (a <= b){
	
		printf("%d" , a);
		printf(" e %d" , b);
	}
	else{

		printf("%d" , b);
		printf(" e %d" , a);
	}
}