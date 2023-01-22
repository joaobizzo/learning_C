/* 
PARTE 2 - QUESTÃO 1 - Trabalho PROG1


Nomes:
Gabriel Ferreira de Menezes - RA: 22253284
João Bizzo Brandt - RA: 22252028
Vitor Murgi Beloto - RA: 22252903

Data: 16/11/22

1) Faça um programa que leia o nome, sexo e o valor da mensalidade de 3
alunos. Após a leitura dos dados informe:
a) O valor da menor mensalidade;
b) A quantidade de alunos do sexo masculino ('M');
c) A média das mensalidades;
d) O nome e a idade do aluno mais velho.
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>  
#include<stdlib.h>
#include<conio.h> 
#define MAX 100
#include <locale.h>

int main()
{
	int i=1;
	char nome[3][MAX];
	int sex[3];
	float mensalidade[3];
	int masc=0;
	float media;
	int idade[3];
	
	setlocale(LC_ALL, "Portuguese");
	
	do {
	
	// o nome, sexo e o valor da mensalidade de 3 alunos.
	
	printf("\n\t||ALUNO %d|| \n",i);
	
	printf("Digite o nome do aluno %d: ",i);
	scanf("%40[0-9a-zA-Z ]", &nome[i]);
	
	fflush(stdin);
	
	printf("\nSelecione o sexo do aluno %d (Escolha 1 ou 2). \n1. M\n2. F\nSexo: ",i);
	scanf("%d", &sex[i]);
	
	fflush(stdin);
	
	printf("\nDigite a idade do aluno %d: ",i);
	scanf("%d", &idade[i]);
	
	fflush(stdin);
	
	printf("\nDigite a mensalidade do aluno %d: ",i);
	scanf("%f", &mensalidade[i]);
	
	fflush(stdin);
	
	i=i+1;
}
while(i<4);


printf("\n\n");
//a)O valor da menor mensalidade;
 // Caso do aluno 1 menor mensalidade
  if (mensalidade[1] <= mensalidade[2] && mensalidade[1] <= mensalidade[3])
    printf("--O valor da menor mensalidade é: %.1f R$ ", mensalidade[1]);

  // Caso do aluno 2 menor mensalidade
   if (mensalidade[2] <= mensalidade[1] && mensalidade[2] <= mensalidade[3])
    printf("--O valor da menor mensalidade é: %.1f R$ ", mensalidade[2]);

  // Caso do aluno 3 possuir a menor mensalidade
   if (mensalidade[3] <= mensalidade[1] && mensalidade[3] <= mensalidade[2])
    printf("--O valor da menor mensalidade é: %.1f R$ ", mensalidade[3]);
    
//b) A quantidade de alunos do sexo masculino ('M');

if(sex[1]==1){
masc+=1;
}

if(sex[2]==1){
masc+=1;
}

if(sex[3]==1){
masc+=1;
}
printf("\n--Quantidade de alunos do sexo masculino: %d", masc);

//c) A média das mensalidades;

media = (mensalidade[1]+mensalidade[2]+mensalidade[3])/3;

printf("\n--A média das mensalidades é: %.1f R$\n", media);

//d) O nome e a idade do aluno mais velho.
    
    // Caso do aluno 1 mais velho
 	if(idade[1] >= idade[2] && idade[1] >= idade[3])
    printf("\n--O Aluno 1 é o mais velho. \n-Idade do aluno mais velho: %i\n-Nome do aluno mais velho: %s ", idade[1], nome[1]);

  // Caso do aluno 2 mais velho
   if (idade[2] >= idade[1] && idade[2] >= idade[3])
     printf("\n--O Aluno 2 é o mais velho. \n-Idade do aluno mais velho: %i\n-Nome do aluno mais velho: %s ", idade[2], nome[2]);

  // Caso do aluno 3 mais velho
   if (idade[3] >= idade[1] && idade[3] >= idade[2])
    printf("\n--O Aluno 3 é o mais velho. \n-Idade do aluno mais velho: %i\n-Nome do aluno mais velho: %s", idade[3], nome[3]);


}
