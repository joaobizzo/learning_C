#include <stdio.h>
#include <string.h>
int main(int a, char const*b[])
{
 char nome[100];
 int cont = 0;
  printf("Digite um nome: \n");
 fgets(nome,100,stdin);
  cont = strlen(nome)-1;
 printf("Esse nome tem %d letras.\n",cont);
  return 0;
} 

