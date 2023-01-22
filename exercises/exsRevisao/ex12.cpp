#include<stdio.h>
#include<stdlib.h>
int main(){
	int numero, inverso, soma, digitoV;
	int u,d,c;
	int u2, d2, c2;
	
	printf("Numero da conta corrente[3 digitos]: ");
	scanf("%d",&numero);
	
	//pegar inverso [fiz esses calculos usando matematica, e a divizao exata por ser numeros ints]
	u = (numero/100);
	d = ((numero/10) - (u * 10));
	c = (numero - ((u * 100) + (d * 10)));
	inverso = u + (d * 10) + (c * 100);
	
	soma = numero + inverso;
	
	//pegar posicao
	c2 = (soma/100);
	d2 = ((soma/10) - (c2 * 10));
	u2 = (soma - ((c2 * 100) + (d2 * 10)));

	digitoV = c2 + (2 * d2) + (3 * u2);
	
	printf("%d", digitoV);
}
