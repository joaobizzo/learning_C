#include<stdio.h>
#include<stdlib.h>
int main(){
	float potA, tA, custoAh, custoAd, custoAm; 
	float potB, tB, custoBh, custoBd, custoBm;
	
	
	printf("Aparelho A\n");
	printf("Potencia(kWatts):");
	scanf("%f", &potA);
	printf("Tempo de uso(horas): ");
	scanf("%f", &tA);
	
	printf("Aparelho B\n");
	printf("Potencia(kWatts): ");
	scanf("%f",	 &potB);
	printf("Tempo de uso(horas): ");
	scanf("%f", &tB);
	
	custoAh = (potA * 0.642) / 1000;
	custoAd = custoAh * tA;
	custoAm = custoAd * 30;
	
	custoBh = (potB * 0.642) / 1000;
	custoBd = custoBh * tB;
	custoBm = custoBd * 30;
	
	printf("Custo APARELHO A\n por hora: R$%.2f\n por dia: R$%.2f\n por mes: R$%.2f\n",custoAh,custoAd,custoAm);
	printf("Custo APARELHO B\n por hora: R$%.2f\n por dia: R$%.2f\n por mes: R$%.2f\n",custoBh,custoBd,custoBm);
}

