#include<stdio.h>
#include<stdlib.h>

int main(){
	int nmrFilhos, pessoa;
	float salario, mediaSalario, mediaFilhos, totalFilhos, totalSalario, totalSalario2, percSalario;
	int maiorSalario = 0;
	
	while(salario > 0){
		printf("===-------------Cidadao %d ----------===\n", pessoa);
		printf("Salario: ");
		scanf("%f", &salario);
		printf("Quantidade de filhos: ");
		scanf("%d", &nmrFilhos);
		totalSalario += salario;
		if(salario < 100){
			totalSalario2 += salario;
		}
		if(salario > maiorSalario){
			maiorSalario = salario;
		}
		totalFilhos += filhos;
		pessoa ++;
		
	}
	mediaSalario = totalSalario/pessoa;
	mediaFilhos =  totalFilhos/pessoa;
	percSalario = (totalSalario2*100)/pessoa;
	printf("Media salarial : %.2f\n", mediaSalario);
	printf("Media filhos: %.2f\n", mediaFilhos);
	printf("Maior salario: %.2f\n", maiorSalario);
	printf("Percentual de salarios maior que R$100: %.2f\n", percSalario);
	
}
