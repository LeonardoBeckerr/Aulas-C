#include <stdio.h>
#include <string.h>
#include <locale.h>

int sub_rotina(int x){

	if (x>0){
		printf("O numero %d é positivo",x);
		return 1;
	}
		
	else if (x==0){
		printf("O numero %d é neutro",x);
		return 0;
	}
		
	else{
		printf("O numero %d é negativo",x);
		return 0;
	}	

}

