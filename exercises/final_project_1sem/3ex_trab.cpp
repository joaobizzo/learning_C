/*
Em uma loja de sapatos, Ronaldo recebe uma remunera��o fixa e
uma comiss�o. Considerando que Ronaldo recebe 10% de 
comiss�o sobre o valor total de suas vendas e um sal�rio fixo, fa�a um algoritmo que receba o valor total das vendas,
 o sal�rio fixo de Ronaldo e calcule quanto ele receber� de sal�rio por m�s.
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
