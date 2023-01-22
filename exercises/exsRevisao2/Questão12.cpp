#include<stdio.h>
#include<stdlib.h>

int n, n1, n2, n3, invertido, resultado;

int main()
{
printf("Digite o numero: ");
scanf("%d",&n);

n1 = n / 100;
n2 = n % 100;
n2 = n2 / 10;
n3 = n % 100;
n3 = n3 % 10;
n3 = n3 * 100;
n2 = n2 * 10;

invertido = n1 + n2 + n3;
resultado = n + invertido;

n1 = resultado / 100;
n2 = resultado % 100;
n2 = n2 / 10;
n3 = resultado % 100;
n3 = n3 % 10;
n1 = n1 * 1;
n2 = n2 * 2;
n3 = n3 * 3;

resultado = n1 + n2 + n3;
resultado = resultado % 10;

printf("O digito verificador eh %d", resultado);

getchar();
}

