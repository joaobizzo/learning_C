#include<stdio.h>
#include<stdlib.h>

float saldo, total;
int main()
{
printf("Digite o valor do saldo = R$");
scanf("%f", &saldo);
total=(saldo + 0.05*saldo);
printf ("O rendimento eh = R$%.2f", total);
getchar();
}


