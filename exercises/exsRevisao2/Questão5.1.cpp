#include<stdio.h>
#include<stdlib.h>
int main (){
    
float al1, al2, maior, menor, ma, mn;

int anos;
anos = 0;

	printf("Digite a primeira altura(em cm): ");
	scanf("%f", &al1);
	printf("Digite a segunda altura(em cm): ");
	scanf("%f", &al2);
	
	if (al1 >= al2){
		maior = al1;
	}
	else	
	{
		maior = al2;
	}		
	
	if (al1 < al2)
	{
		menor = al1;
	}
	else
	{
		menor = al2;
	}
for ( maior = maior; maior > menor;) 
{
	maior = maior + 2;
	menor = menor + 3;
	anos++;
	if (anos == 100)
	{
		printf("Impossivel\n");
	}	
}
printf("A altura do primeiro eh %.2f e a do segundo eh %.2f\n", maior, menor );
printf("O numero de anos eh %d", anos);
}

