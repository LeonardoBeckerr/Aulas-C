#include <stdio.h>

int main(){
	
int i, j,x[2][3];

	for(i=0;i<3;i++){
		printf("\nElemetnos da linha %d ",i);
		printf("= ");
		for(j=0;j<4;j++){
			printf("%d |",x[j,i]);		
		}
	}	
}