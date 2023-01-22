#include<stdio.h>
#include<stdlib.h>

int main(){
	int numero, cont = 1, mult;
	
	printf("========Tabuada========\n");
	printf("Digite o algorismo para carregar a tabuada: ");
	scanf("%d", &numero);
	
	while(cont<=10){
		mult = numero * cont;
		printf("[%d] x [%d] =  [%d]\n", numero, cont, mult);
		cont++;
	}
}
