#include<stdio.h>

	main()
{
		int A, B, AUX;
float SOMA;
  		char LETRA;
		printf( “Digite um numero: “);
scanf(“%d”, &A);
		B = A * 2;
		SOMA = A + B;
		A = 10;
		if  ( (SOMA >= 15 ) && ( A < B ) )
           		{ 
AUX = A;
LETRA = ‘M’;
		}
	     	else
{
AUX = B;
LETRA = ‘F’;
		}
printf ( “O valor de Aux e: %d “, AUX);
getch();
	}
