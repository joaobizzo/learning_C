#include<stdio.h>
#include<stdlib.h>

int main(){
	float chico = 1.5, ze = 1.1;
	int ano = 0;
	
	while(chico > ze){
		if(ano < 100){
			chico += 0.02;
			ze += 0.03;
		}
		printf("Chico: %.2f Ze: %.2f Ano: %d\n",chico, ze, ano);
		ano++;
	}
	printf("Total de anos : %d", ano);
	return 0;
}

