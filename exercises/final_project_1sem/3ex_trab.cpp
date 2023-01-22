/*
Em uma loja de sapatos, Ronaldo recebe uma remuneração fixa e
uma comissão. Considerando que Ronaldo recebe 10% de 
comissão sobre o valor total de suas vendas e um salário fixo, faça um algoritmo que receba o valor total das vendas,
 o salário fixo de Ronaldo e calcule quanto ele receberá de salário por mês.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	float salarioFixo, salarioTotal, vendas, comissao;
	
	printf("Digite o total em vendas realizadas por Ronaldo: R$");
	scanf("%f", &vendas);
	printf("Digite o salario de Ronaldo: R$");
	scanf("%f", &salarioFixo);
	
	comissao = vendas * 0.1;
	salarioTotal = salarioFixo + comissao;
	
	printf("Salario total de Ronaldo: %.2f", salarioTotal);
}
