#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){
	
	int i, contador, categoria, opcao_ncs_refrigeracao, opcao_categoria;
	int qtd_barato, qtd_normal, qtd_caro;
	float preco_produto_uni, custo_estocagem, imposto, preco_final;
	float soma_adicionais, total_impostos, maior_preco, menor_preco;
	bool ncs_refrigeracao;
	
	i = 0;
	contador = 0;
	qtd_barato = 0;
	qtd_normal = 0;
	qtd_caro = 0;
	soma_adicionais = 0;
	total_impostos = 0;
	
	while(i != 12){
		
		ncs_refrigeracao = false;
		categoria = 0;
		
		printf("\n ================= Informe oque se pede sobre o produto %d =========================\n", contador + 1);
		
		printf("Informe o preco unitario do produto\n");
		scanf("%f", &preco_produto_uni);
		
		if(preco_produto_uni > 20){
			printf("O produto precisa de refrigeracao?\n");
			printf("1 ----- S\n");
			printf("2 ----- N\n");
			scanf("%d", &opcao_ncs_refrigeracao);
			
			switch(opcao_ncs_refrigeracao){
				case 1: ncs_refrigeracao = true;
				break;
				case 2: ncs_refrigeracao = false;
				break;
				default: printf("Informe Corretamente\n");
			}
		}
		
		if(preco_produto_uni <= 20 || preco_produto_uni > 50){
			printf("Selecione a categoria do produto\n");
			printf("1 ----- A (alimentacao)\n");
			printf("2 ----- L (limpeza)\n");
			printf("3 ----- V (vestuario)\n");
			scanf("%d", &opcao_categoria);
			
			switch(opcao_categoria){
				case 1: categoria = 1;
				break;
				case 2: categoria = 2;
				break;
				case 3: categoria = 3;
				break;
				default: printf("Informe Corretamente\n");
			}
		}
		
		if(preco_produto_uni <= 20){
			if(categoria == 1){
				custo_estocagem = 2.00;
			}
			else if(categoria == 2){
				custo_estocagem = 3.00;
			}
			else if(categoria == 3){
				custo_estocagem = 4.00;
			}
		}
		else if(preco_produto_uni > 20 && preco_produto_uni <= 50){
			if(ncs_refrigeracao == true){
				custo_estocagem = 6.00;
			}
			else{
				custo_estocagem = 0.00;
			}
		}
		else{
			if(ncs_refrigeracao == true){
				if(categoria == 1){
					custo_estocagem = 5.00;
				}
				else if(categoria == 2){
					custo_estocagem = 2.00;
				}
				else if(categoria == 3){
					custo_estocagem = 4.00;
				}
			}
			else{
				if(categoria == 1 || categoria == 3){
					custo_estocagem = 0.00;
				}
				else if(categoria == 2){
					custo_estocagem = 1.00;
				}
			}
		}
		
		if(categoria == 1 && ncs_refrigeracao == true){
			imposto = preco_produto_uni * 0.04;
		}
		else{
			imposto = preco_produto_uni * 0.02;
		}
		
		preco_final = preco_produto_uni + custo_estocagem + imposto;
		
		soma_adicionais = soma_adicionais + custo_estocagem + imposto;
		total_impostos = total_impostos + imposto;
		
		if(i == 0){
			maior_preco = preco_final;
			menor_preco = preco_final;
		}
		else{
			if(preco_final > maior_preco){
				maior_preco = preco_final;
			}
			if(preco_final < menor_preco){
				menor_preco = preco_final;
			}
		}
		
		if(preco_final <= 20){
			qtd_barato = qtd_barato + 1;
		}
		else if(preco_final > 20 && preco_final <= 100){
			qtd_normal = qtd_normal + 1;
		}
		else{
			qtd_caro = qtd_caro + 1;
		}
		
		i = i + 1;
		contador = contador + 1;
	}
	
	printf("\n================ RESULTADOS FINAIS ================\n");
	printf("Media dos valores adicionais (estocagem e impostos): %.2f\n", soma_adicionais / 12);
	printf("Maior preco final: %.2f\n", maior_preco);
	printf("Menor preco final: %.2f\n", menor_preco);
	printf("Total dos impostos: %.2f\n", total_impostos);
	printf("Quantidade de produtos com classificacao barato: %d\n", qtd_barato);
	printf("Quantidade de produtos com classificacao normal: %d\n", qtd_normal);
	printf("Quantidade de produtos com classificacao caro: %d\n", qtd_caro);
	
	return 0;
}