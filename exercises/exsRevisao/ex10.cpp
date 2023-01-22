#include<stdio.h>
#include<stdlib.h>
int main(){
	float potenciaA, tempoA, custoAhora, custoAdia, custoAmes; 
	float potenciaB, tempoB, custoBhora, custoBdia, custoBmes;
	
	
	printf("Aparelho A\n");
	printf("-----------------\n");
	printf("Potencia[kWatts]: ");
	scanf("%f", &potenciaA);
	printf("Tempo de uso[horas]: ");
	scanf("%f", &tempoA);
	
	printf("Aparelho B\n");
	printf("-----------------\n");
	printf("Potencia[kWatts]: ");
	scanf("%f",	 &potenciaB);
	printf("Tempo de uso[horas]: ");
	scanf("%f", &tempoA);
	
	custoAhora = (potenciaA * 0.642) / 1000;
	custoAdia = custoAhora * tempoA;
	custoAmes = custoAdia * 31;
	
	custoBhora = (potenciaB * 0.642) / 1000;
	custoBdia = custoBhora * tempoB;
	custoBmes = custoBdia * 31;
	
	printf("Custo do aparelho A:\n Por hora: %.2f\n Por dia: %.2f\n Por mes: %.2f\n", custoAhora, custoAdia, custoAmes);
	printf("Custo do aparelho B:\n Por hora: %.2f\n Por dia: %.2f\n Por mes: %.2f\n", custoBhora, custoBdia, custoBmes);
}

