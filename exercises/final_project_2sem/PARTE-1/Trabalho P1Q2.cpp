/*
PARTE 1 - QUESTÃO 2 - Trabalho PROG1


Nomes:
Gabriel Ferreira de Menezes - RA: 22253284
João Bizzo Brandt - RA: 22252028
Vitor Murgi Beloto - RA: 22252903

Data: 16/11/22




2) Crie um programa que armazene 3 nomes numa matriz de strings. Após o
cadastro, você deverá criar um MENU que informe:

1 – Mostra os nomes cadastrados em maiúsculo e na ordem inversa, ou seja,
mostra do último ao primeiro nome cadastrado;
2 – Mostra quantas pessoas com o nome “PAULO” foram cadastradas;
3 - Mostra quantas letras ‘A’ foram cadastradas na matriz de strings;
4 – Mostra quantas letras ‘C’ o segundo nome cadastrado possui.
5 – SAIR

Obs.:
(1) O programa só poderá ser finalizado quando a opção SAIR for

escolhida pelo usuário!

(2) Aproveite a estrutura de repetição da leitura dos dados, para
calcular as informações a serem apresentadas na estrutura switch
(Menu).
*/


#include<stdio.h>
#include <ctype.h>
#include<string.h>  
#include<stdlib.h>
#include<conio.h> 
#define MAX 100
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char str1[MAX]={0}, str2[MAX]={0}, str3[MAX]={0};
	char * pch1;	
	char * pch2;	
	char * pch3;
	char * pa1;	
	char * pa2;	
	char * pa3;	
	int valor;
	char chc;
	int i, j, k, cont=0, contA=0, contC=0;
	
	printf("Escreva o primeiro nome (apenas minusculas!): ");
	scanf("%s",&str1);
	
	printf("Escreva o segundo nome (apenas minusculas!): ");
	scanf("%s",&str2);
	
	printf("Escreva o terceiro nome (apenas minusculas!): ");
	scanf("%s",&str3);
	
	for(i=0; i<strlen(str1); i++)
	{
	
		   if(str1[i]>='a' && str1[i]<='z'){
            str1[i] = str1[i] - 32;
        }
        else if(str1[i]>='A' && str1[i]<='Z'){
            str1[i] = str1[i] + 32;
        }
    }
	
	for(i=0; i<strlen(str2); i++)
	{
	
		   if(str2[i]>='a' && str2[i]<='z'){
            str2[i] = str2[i] - 32;
        }
        else if(str2[i]>='A' && str2[i]<='Z'){
            str2[i] = str2[i] + 32;
        }
    }
	
	for(i=0; i<strlen(str3); i++)
	{
	
		   if(str3[i]>='a' && str3[i]<='z'){
            str3[i] = str3[i] - 32;
        }
        else if(str3[i]>='A' && str3[i]<='Z'){
            str3[i] = str3[i] + 32;
        }
    }



printf("|||||MENU|||||");
printf("\n\n1 - Nomes cadastrados em maíusculo na ordem inversa");
printf("\n2 - Número de pessoas com o nome 'PAULO' cadastradas");
printf("\n3 - Quantas letras 'A' foram cadastradas na matriz de strings");
printf("\n4 - Quantas letras 'C' o segundo nome cadastrado possui");
printf("\n5 - SAIR");


do {
	
printf ("\n\nDigite um valor de 1 a 5: ");
scanf("%d",&valor);

switch(valor) 
{
	
case 1: //1 – Mostra os nomes cadastrados em maiúsculo e na ordem inversa, ou seja, mostra do último ao primeiro nome cadastrado;
	printf("\n\n1 - OS NOMES APRESENTADOS EM ORDEM INVERSA SÃO: '%s', '%s' e '%s'.",str3, str2, str1);
break;

case 2: //2 – Mostra quantas pessoas com o nome “PAULO” foram cadastradas;
pch1 = strstr (str1,"PAULO");
 pch2 = strstr (str2,"PAULO");
 pch3 = strstr (str3,"PAULO");
 
  if (pch1 != NULL){
    cont=cont+1;}

  if (pch2 != NULL){
    cont=cont+1;}

  if (pch3 != NULL){
  	cont=cont+1;
  }
  
	
printf("\n2- %d PESSOA(S) SE CHAMA(M) PAULO.", cont);
break;

case 3: //3 - Mostra quantas letras ‘A’ foram cadastradas na matriz de strings;
 pa1 = strchr(str1,'A');
 pa2 = strchr(str2,'A');
 pa3 = strchr(str3,'A');
 
  if (pa1 != NULL){
    contA=contA+1;}

  if (pa2 != NULL){
    contA=contA+1;}

  if (pa3 != NULL){
  	contA=contA+1;
  }

printf("\n3- %d LETRA(S) A OCORRE(M) NA MATRIZ DE STRINGS.", contA);
break;

case 4: //4– Mostra quantas letras ‘C’ o segundo nome cadastrado possui.
chc='C';
for(j = 0; j <= strlen(str2); j++)
  	{
  		if(str2[j] == chc)  
		{
  			contC++;
 		}
	}
     
printf("\n4- O SEGUNDO NOME CADASTRADO POSSUI %d LETRA(S) 'C' CADASTRADA(S).", contC);
break;

case 5: //5-SAIR
exit(0);

default :
    printf ("Valor invalido!\n");
}
} 
while(valor!=5);
  getch();
  return 0;

}
