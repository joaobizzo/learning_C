#include<stdio.h>
#include<stdlib.h>

int main(){
	float fitas, fitasFinal;
	float aluguel, faturamento, ganhoMultas, faturamentoFinal;
	
	printf("Digite a quantidade de fitas: ");
	scanf("%f",&fitas);
	printf("Preco do aluguel: R$");
	scanf("%f",&aluguel);
	
	
	faturamento = ((fitas/3) * aluguel) * 12;
	ganhoMultas = (fitas/10) * (aluguel * 0.1);
	fitasFinal = (fitas * 0.98) + (fitas * 0.1);
	
	faturamentoFinal = faturamento + (ganhoMultas * 12);
	
	
	printf("Faturamento anual: R$%.2f \n", faturamentoFinal);
	printf("Ganho com multas por mes: R$%2.f \n", ganhoMultas);
	printf("Fitas restantes ao fim do ano: %.f \n", fitasFinal);
}
