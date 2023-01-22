
#include<stdio.h>
#include<math.h>

int main(){
	int num, quadrado;
	printf("Digite um numero: ");
	scanf("%d", &num);
	quadrado = pow(num, 2);
	printf("%d ao quadrado eh %.2f", num, quadrado);
	return 0;
}



