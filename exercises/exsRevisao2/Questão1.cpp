#include<stdio.h>
#include<stdlib.h>

int main(){
	int cont, cont2 = 1;
	float nota, media, valor_nota;
	char quebra;
	quebra ='c';
	
	while(quebra!='F'){
		printf("Aluno %d\n", cont2);
			for(cont = 1; cont <= 4; cont++){
				printf("Digite a nota %d: ", cont);
				scanf("%f", &nota);
				valor_nota += nota;	
			}
		media = valor_nota/4;
		printf("Nota media do aluno %d = %.2f\n", cont2, media);
		nota = 0;
		valor_nota = 0;
		printf("Deseja continuar? (qualquer tecla para continuar, 'F'' para interromper)\n");	
		quebra =getchar();
		cont2++;
		
	}
	return 0;
}

