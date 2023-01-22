#include<stdio.h>
#include<stdlib.h>

int main(){
	float saldo, taxa, final;
	int tempo;
	
	printf("Digite o capital inicial: R$");
	scanf("%f",&saldo);
	printf("Digite a taxa em porcentagem(%%): ");
	scanf("%f",&taxa);
	printf("Digite os meses de aplicacao: ");
	scanf("%d",&tempo);
	taxa = (taxa/100) * tempo;
	final = (1 + taxa) * saldo;
	printf("Resultado ao final : R$%.2f ", final);
	return 0;
}
