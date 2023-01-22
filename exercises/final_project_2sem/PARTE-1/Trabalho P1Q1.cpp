/*
PARTE 1 - QUESTֳO 1 - Trabalho PROG1


Nomes:
Gabriel Ferreira de Menezes - RA: 22253284
Joדo Bizzo Brandt - RA: 22252028
Vitor Murgi Beloto - RA: 22252903

Data: 16/11/22



1 – Mostra a quantidade de nתmeros pares armazenados;
2 – Mostra a soma dos nתmeros םmpares armazenados;
3 – Mostra o maior e o menor nתmero armazenado;
4 – Mostra a mיdia dos nתmeros armazenados;
5 – Mostra a quantidade de nתmeros armazenados que sדo iguais a 10;
6 – Mostra a multiplicaחדo dos nתmeros armazenados na diagonal principal
(םndice da linha igual ao םndice da coluna);
7 – Mostra a soma dos nתmeros armazenados que sדo divisםveis por 5.
8 – Armazena num vetor todos os nתmeros menores que 8. Mostrar o vetor
resultante.
9 – Consulta um nתmero na matriz. O usuבrio deverב informar qual o nתmero
deseja procurar na matriz, caso encontre, informar o nתmero e qual a posiחדo(םndices)
na matriz.
10 – SAIR

repeticao padrao

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
		}	
	}

	printf("\n");
*/


#include<stdio.h>
#include<stdlib.h>

int main(void){
	//Declarando variבveis:
	static int mat[3][3];
	int j = 0, i = 0, par = 0, somaImpar = 0, maior = 0, menor = 0, soma = 0, nmrDez = 0, mult, somaCinco, c=0, consult;
	float media;
	
	
	//Preenchendo a matriz:
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%i][%i] = ", i + 1, j + 1);
			scanf("%i", &mat[j][i]);
		}
	}
	printf("\n");
	
	
	//1-Numeros pares na matriz
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[j][i] % 2 == 0)
			{
				par++;
			}
		}
	}
	printf("1 - Existem %i numeros pares\n", par);
	
	
	
	//2-Numeros impares
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[j][i] % 2 != 0)
			{
				somaImpar += mat[j][i];
			}
		}
	}
	printf("2 - Soma dos numeros impares = %i\n", somaImpar);
	
	
	
	//3-Maior e menor:
	menor = maior = mat[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[j][i] > maior)
			{
				maior = mat[j][i];
			}
			else if(mat[j][i] < menor)
			{
				mat[j][i] = menor;
			}
		}
	}
	printf("3 - Maior numero = %i\n", maior);
	printf("4 - Menor numero = %i\n", menor);

	
	
	
	//4-Media dos numeros:
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			soma += mat[j][i];
		}
	}
	media = soma/9;
	printf("5 - Media dos numeros armazenados = %.2f\n", media);
	
	
	//5-quantidade de nmrs = 10
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[j][i] == 10){
				nmrDez ++;
			}
		}
	}
	if(nmrDez != 0){
		printf("6 - Existe(m) %i numero(s) iguais a 10", nmrDez);
	}else
	{
		printf("6 - Nao ha numeros iguais a 10");
	}
	printf("\n");
	
	
	
	
	
	
	//6 – Mostra a multiplicaחדo dos nתmeros armazenados na diagonal principal
	
	mult = mat[0][0] * mat[1][1] * mat[2][2];
	printf("7 - Multiplicacao da diagonal principal: %d", mult);
	printf("\n");
	
	
	
	//7 – Mostra a soma dos nתmeros armazenados que sדo divisםveis por 5.
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[j][i] % 5 == 0){
				somaCinco += mat[j][i];
			}
		}	
	}
	
	if(somaCinco > 0){
		printf("8 - A soma dos numeros divisiveis por 5 eh: %d", somaCinco);
	}else{
		printf("8 - Nao ha numeros divisiveis por 5\n");
	}

	printf("\n");
	
	
	
	/*   INCOMPLETO - NAO SEI COMO FAZER O VETOR
	8 – Armazena num vetor todos os nתmeros menores que 8. Mostrar o vetor resultante.
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[j][i] < 8){
				somaOito[c] == mat[j][i];
				c++;
			}
		}	
	}

	printf("\n");
	*/
	
	
	
	//9 – Consulta um nתmero na matriz. O usuבrio deverב informar qual o nתmero deseja procurar na matriz, caso encontre, informar o nתmero e qual a posiחדo(םndices) na matriz.
	
	printf("\n\n\t|||  Consulta na matriz  |||\n");
	printf("Digite um numero que deseja procurar na matriz:");
	scanf("%d", &consult);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[j][i] == consult){
				printf("\n\nNumero encontrado na posicao [%d][%d] ~~!\n\n", i+1, j+1);
			}
		}	
	}

	printf("\n");
	
	//10- SAIR
	
	
	
	
	
	//FAZER O SWITCH
	// vvvvvvvvvv
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//Printando a matriz:
	printf("Matriz completa: \n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("[%i]", mat[j][i]);
			}
		}
	
	
}
