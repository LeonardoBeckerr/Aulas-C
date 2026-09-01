#include <stdio.h>
#include <string.h>
#include <locale.h>


int soma_dobro(int *a, int *b); // prototipo da funcao

int main()
{
setlocale(LC_ALL, "portuguese");
int x,y,res;

	printf("\nDigite o primeiro numero: ");
	scanf("%d%*c", &x);
		
	printf("\nDigite o segundo numero: ");
	scanf("%d%*c", &y);
	
	res = soma_dobro(&x,&y);
	printf("\nA soma do dobro dos numeros %d e %d = %d",x,y,res);
	getchar();

return 0;

}

int soma_dobro(int *a, int *b)
{		
	int soma;
	*a = 2 * (*a);
	*b = 2 * (*b);
	soma = *a + *b;
	return soma;
}
