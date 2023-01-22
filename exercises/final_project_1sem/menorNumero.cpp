#include<stdio.h>
#include <conio.h> 
 int main(){
 	int n1, n2, n3;
 	printf("Digite o numero 1: ");
 	scanf("%d", &n1);
 	printf("Digite o numero 2: ");
 	scanf("%d", &n2);
 	printf("Digite o numero 3: ");
 	scanf("%d", &n3);
 	
 	if(n1<n2 && n1<n3){
 		printf("O menor numero : %d\n", n1);
	 }else{
	 	if(n2<n3){
	 		printf("O menor numero: %d\n", n2);
		 }else{
		 	printf("O menor numero: %d\n", n3);
		 }
	 }
	 getch();
}

