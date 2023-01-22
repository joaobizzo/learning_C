/*
PARTE 2 - QUESTÃO 3 - Trabalho PROG1


Nomes:
Gabriel Ferreira de Menezes - RA: 22253284
João Bizzo Brandt - RA: 22252028
Vitor Murgi Beloto - RA: 22252903

Data: 16/11/22

3) Faça um programa que leia o nome, o time e a quantidade de gols de 3
jogadores de futebol. Após o cadastro informe:

a) A quantidade total de gols marcados;
b) Quantos jogadores jogam no FLAMENGO;
c) Todos os dados do artilheiro.

\n

*/


#include<stdio.h>
#include<ctype.h>
#include<string.h>  
#include<stdlib.h>
#include<conio.h> 
#define MAX 100
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	
	int gols[3], i, j, mengao = 0, totalGols = 0;
	char nome[3][MAX];
	int time[3];
	int posic[3];
	
	// PENSEI EM FAZER AQ O TREM --> char funcao[3][25] = "Atacante", "Zagueiro", "Artilheiro";

	
	for(i=0;i<3;i++){
		printf("\n");
		printf("|| Jogador %d ||\n", i+1);
		printf("\n--Nome: ");
		scanf("%40[0-9a-zA-Z ]", &nome[i]);
		
		fflush(stdin);
		
		printf("\nTIMES:\n")/
		printf("[1]Flamengo\n[2]Corinthians\n[3]Vasco da Gama\n\n--Time do jogador:");
		scanf("%d", &time[i]);
		
		fflush(stdin);
		
		printf("\nPOSIÇÃO:\n")/
		printf("[1]Artilheiro\n[2]Zagueiro\n[3]Atacante\n\n--Posição do Jogador:");
		scanf("%d", &posic[i]);
		
		fflush(stdin);
		
		printf("\n--Gols marcados pelo jogador: ");
		scanf("%d", &gols[i]);
		
		fflush(stdin);
		
	}
	
	for(i=0;i<3;i++){
		totalGols += gols[i];
		if(time[i] == 1){
			mengao ++;
		}
		
	
}

//Questoes A, B e C:
printf("\n\n||-----------------------------------------------------------||\n");
printf("A) Quantidade total de gols marcados = %d\n", totalGols);
printf("B) Jogadores que jogam no Flamengo = %d\n", mengao);
printf("C) ||Todos os dados do(s) Artilheiro(s)||\n\n");

if(posic[0]==1)
{
	printf("--Nome: %s\n", nome[0]);
	printf("Time: %d\n", time[0]);
	printf("Posição: %d\n", posic[0]);
	printf("Gols marcados: %d\n\n", gols[0]);
}

if(posic[1]==1)
{
	printf("--Nome: %s\n", nome[1]);
	printf("Time: %d\n", time[1]);
	printf("Posição: %d\n", posic[1]);
	printf("Gols marcados: %d\n\n", gols[1]);
}

if(posic[2]==1)
{
	printf("--Nome: %s\n", nome[2]);
	printf("Time: %d\n", time[2]);
	printf("Posição: %d\n", posic[2]);
	printf("Gols marcados: %d\n\n", gols[2]);
}




getch();
}
