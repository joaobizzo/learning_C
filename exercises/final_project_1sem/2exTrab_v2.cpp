#include<stdio.h>
#include<conio.h>
int main(){
	int a, b, aux;
	float soma;
	char letra;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	b = a * 2;
	soma = a + b;
	a = 10;
	if(soma >= 15 && a > b){
		aux = a;
		letra = 'M';
	}else{
		aux = b;
		letra = 'f';
	}
	printf("O valor de aux = %d\n", aux);
	printf("O valor de letra %c", letra);
	getch();
}
