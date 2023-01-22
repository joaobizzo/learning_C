/*
PARTE 1 - QUESTУO 3 - Trabalho PROG1


Nomes:
Gabriel Ferreira de Menezes - RA: 22253284
Joуo Bizzo Brandt - RA: 22252028
Vitor Murgi Beloto - RA: 22252903

Data: 16/11/22


3) Crie um programa em C que cadastre os dados de 5 alunos. Os dados a serem
cadastrados sуo: nome, matrэcula, endereчo, sexo, os nomes das 3 disciplinas e as 3
notas de cada disciplina que ele estс cursando.

Os dados devem ser cadastrados em um vetor e/ou matriz.

Apѓs o cadastro informe:
a)Os dados dos alunos cadastrados e a sua situaчуo ("aprovado" ou "reprovado") em cada disciplina.
b)Os dados do aluno com maior mщdia em "LPI".
c)A mщdia geral dos alunos na disciplina "Algoritmo".
d)A quantidade de alunos(as) reprovados em qualquer disciplina.


OBS.:
1) Usar uma estrutura switch para mostrar os resultados calculados.
2) Para o aluno ser aprovado a mщdia das notas deve ser >= 6

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
	setlocale(LC_ALL, "Portuguese");
	
	char nome[5][MAX];
	char mat[5][MAX];
	char end[5][MAX];
	char sex[5][1];
	char discA[5][MAX];
	char discB[5][MAX];
	char discC[5][MAX];
	float notaILP[5];
	float notaIILP[5];
	float notaIIILP[5];
	float notaIBD[5];
	float notaIIBD[5];
	float notaIIIBD[5];
	float notaIQAE[5];
	float notaIIQAE[5];
	float notaIIIQAE[5];
	float mediaLP1[5];
	float mediaBD1[5];
	float mediaQAE[5];
	float mediaGeral;
	int rep;
	int valor;
	
	int i=1;
	int n;
	
	
	do {
	
	// CADASTRO DE ALUNOS
	
	printf("\n\t||ALUNO %d|| \n",i);
	
	printf("Digite o nome do aluno %d: ",i);
	scanf("%40[0-9a-zA-Z ]", &nome[i]);
	
	fflush(stdin);
	
	printf("\nDigite a matrэcula do aluno %d: ",i);
	scanf("%40[0-9a-zA-Z ]", &mat[i]);
	
	fflush(stdin);
	
	printf("\nDigite o endereчo do aluno %d: ",i);
	scanf("%50[0-9a-zA-Z ]", &end[i]);
	
	fflush(stdin);
	
	printf("\nDigite o sexo do aluno %d (M/F): ",i);
	scanf("%s", &sex[i]);
	
	fflush(stdin);
	
	printf("\nDigite a primeira nota do aluno %d na disciplina LP1: ",i);
	scanf("%f", &notaILP[i]);
	
	printf("\nDigite a segunda nota do aluno %d na disciplina LP1: ",i);
	scanf("%f", &notaIILP[i]);
	
	printf("\nDigite a terceira nota do aluno %d na disciplina LP1: ",i);
	scanf("%f", &notaIIILP[i]);
	
	
	
	printf("\nDigite a primeira nota do aluno %d na disciplina BD1: ",i);
	scanf("%f", &notaIBD[i]);
	
	printf("\nDigite a segunda nota do aluno %d na disciplina BD1: ",i);
	scanf("%f", &notaIIBD[i]);
	printf("\nDigite a terceira nota do aluno %d na disciplina BD1: ",i);
	scanf("%f", &notaIIIBD[i]);
	
	
	
	printf("\nDigite a primeira nota do aluno %d na disciplina Algoritmo: ",i);
	scanf("%f", &notaIQAE[i]);
	
	printf("\nDigite a segunda nota do(a) aluno %d na disciplina Algoritmo: ",i);
	scanf("%f", &notaIIQAE[i]);
	
	printf("\nDigite a terceira nota do aluno %d na disciplina Algoritmo: ",i);
	scanf("%f", &notaIIIQAE[i]);
	
	fflush(stdin);
	
	
	//a) Os dados dos alunos cadastrados e a sua situaчуo ("aprovado" ou "reprovado") em cada disciplina.

	
			//Situacao na disciplina LP1
	
mediaLP1[i]=(notaILP[i]+notaIILP[i]+notaIIILP[i])/3;
mediaBD1[i]=(notaIBD[i]+notaIIBD[i]+notaIIIBD[i])/3;
mediaQAE[i]=(notaIQAE[i]+notaIIQAE[i]+notaIIIQAE[i])/3;

if(mediaLP1[i] < 6 || mediaBD1[i] < 6 || mediaQAE[i] < 6)
	{
	rep+=1;
	}
	
	i=i+1;
	
	
	
	
}

while(i<6);



do {
printf("\n----------------------------------------------------||");
printf("\n\n|||||MENU|||||");
printf("\n1 - Dados e situaчуo dos alunos cadastrados.");
printf("\n2 - Dados do aluno com maior mщdia em 'LPI'.");
printf("\n3 - Mщdia geral dos alunos na disciplina 'Algoritmo'.");
printf("\n4 - A quantidade de alunos reprovados em qualquer disciplina.");
printf("\n5 - SAIR");
printf ("\n\nDigite um valor de 1 a 5: ");
scanf("%d",&valor);
printf("\n");
	switch(valor)
{
	
case 1:
for(i=1;i<6;i++)
{
	printf("\n\n----------------------------------------------------||\n\n");
	fflush(stdin);
	printf("\n\n\t||DADOS DO ALUNO %d||\n\n",i);
	printf("Nome: %s", nome[i]);
	printf("\nMatrэcula: %s", mat[i]);
	printf("\nEndereчo: %s", end[i]);
	printf("\nSexo: %s", sex[i]);
	printf("\n\nNota 1 na disciplina LP1: %.1f", notaILP[i]);
	printf("\nNota 2 na disciplina LP1: %.1f", notaIILP[i]);
	printf("\nNota 3 na disciplina LP1: %.1f", notaIIILP[i]);


	printf("\n\n----------------------------------\n");
		
	printf("\nNota 1 na disciplina BD1: %.1f", notaIBD[i]);
	printf("\nNota 2 na disciplina BD1: %.1f", notaIIBD[i]);
	printf("\nNota 3 na disciplina BD1: %.1f", notaIIIBD[i]);
	
	printf("\n\n----------------------------------\n");
	
	printf("\nNota 1 na disciplina Algoritmo: %.1f", notaIQAE[i]);
	printf("\nNota 2 na disciplina Algoritmo: %.1f", notaIIQAE[i]);
	printf("\nNota 3 na disciplina Algoritmo: %.1f", notaIIIQAE[i]);

	if(mediaLP1[i]>= 6)
	{
	printf("\n\n--Aluno aprovado na disciplina LP1.");
	}
	else
	{
	printf("\n--Aluno reprovado na disciplina LP1.");
	}
	
			//Situacao na disciplina BD1


	if(mediaBD1[i]>= 6)
	{
	printf("\n--Aluno aprovado na disciplina BD1.");
	}
	else
	{
	printf("\n--Aluno reprovado na disciplina BD1.");
	}
	
			//Situacao na disciplina Algoritmo

	if(mediaQAE[i]>= 6)
	{
	printf("\n--Aluno aprovado na disciplina Algoritmo.");
	}
	else
	{
	printf("\n--Aluno reprovado na disciplina Algoritmo.");
	}
	
}
break;

//b)Os dados do aluno com maior mщdia em "LPI".
case 2:
 // Caso do aluno 1 possuir a maior mщdia
  if (mediaLP1[1] >= mediaLP1[2] && mediaLP1[1] >= mediaLP1[3] && mediaLP1[1] >= mediaLP1[4] && mediaLP1[1] >= mediaLP1[5])
    printf("--O Aluno 1 possui a maior mщdia em LP1: %.1f ", mediaLP1[1]);

  // Caso do aluno 2 possuir a maior mщdia
   if (mediaLP1[2] >= mediaLP1[1] && mediaLP1[2] >= mediaLP1[3] && mediaLP1[2] >= mediaLP1[4] && mediaLP1[2] >= mediaLP1[5])
    printf("--O Aluno 2 possui a maior mщdia em LP1: %.1f ", mediaLP1[2]);

  // Caso do aluno 3 possuir a maior mщdia
   if (mediaLP1[3] >= mediaLP1[1] && mediaLP1[3] >= mediaLP1[2] && mediaLP1[3] >= mediaLP1[4] && mediaLP1[3] >= mediaLP1[5])
    printf("--O Aluno 3 possui a maior mщdia em LP1: %.1f ", mediaLP1[3]);
    
  //Caso do aluno 4 possuir a maior mщdia
   if (mediaLP1[4] >= mediaLP1[1] && mediaLP1[4] >= mediaLP1[2] && mediaLP1[4] >= mediaLP1[3] && mediaLP1[4] >= mediaLP1[5])
    printf("--O Aluno 4 possui a maior mщdia em LP1: %.1f ", mediaLP1[4]);
    
  //Caso do aluno 5 possuir a maior mщdia
  if (mediaLP1[5] >= mediaLP1[1] && mediaLP1[5] >= mediaLP1[2] && mediaLP1[5] >= mediaLP1[3] && mediaLP1[5] >= mediaLP1[4])
    printf("--O Aluno 5 possui a maior mщdia em LP1: %.1f ", mediaLP1[5]);
    
break;


//c)A mщdia geral dos alunos na disciplina "Algoritmo".
case 3:
mediaGeral=(mediaQAE[1]+mediaQAE[2]+mediaQAE[3]+mediaQAE[4]+mediaQAE[5])/5;

printf("\n\n--A mщdia geral dos alunos na disciplina Algoritmo щ: %.1f", mediaGeral);
break;

//d)A quantidade de alunos reprovados em qualquer disciplina.
case 4:
printf("\n\n--%d alunos foram reprovados em alguma disciplina.", rep);
break;

case 5: // -SAIR
exit(0);

default :
    printf ("Valor invalido!\n");

}
}
while(valor!=5);
getch();
  return 0;

}
