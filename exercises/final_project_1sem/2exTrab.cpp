//Considerando que o valor lido para a variável A foi 5, Quais os valores armazenados nas variáveis AUX e LETRA.
#include <stdio.h>
int main(){
int A, B, AUX;
float SOMA;
char LETRA;
printf("Digite um numero: ");
scanf("%D", &A);
B = A * 2;
SOMA = A + B;
A = 10;
if((SOMA >= 15 ) && ( A < B ) ){ 
	AUX = A;
	LETRA = 'M';
	}else{
AUX = B;
LETRA = 'F';}
printf ( "O valor de Aux e: %d ", AUX);
printf("%d", A);
getch();
	}


