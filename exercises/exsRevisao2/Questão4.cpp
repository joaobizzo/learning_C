#include <stdio.h>
int main()
{
    int numFilhos, qtd = 0, qtdAbaixoCem = 0; 
    float percentual, salario, mediaSalario = 0, mediaFilhos = 0, maiorSalario = 0;
    
    printf("Tecle um SALARIO NEGATIVO para ENCERRAR o programa\n");
    printf("Informe o salario: ");
    scanf("%f", &salario);
    
    while(salario > 0){
        printf("Informe o numero de filhos: ");
        scanf("%d", &numFilhos);
        
        mediaSalario += salario;
        mediaFilhos += numFilhos;
        qtd++;
        
        if(salario < 100)
        qtdAbaixoCem++;
        
        if(salario > maiorSalario);
        maiorSalario = salario;
        
        printf("Informe o salario: ");
        scanf("%f", &salario);
    }
    mediaSalario = mediaSalario/qtd;
    mediaFilhos = mediaFilhos/qtd;
    percentual = ((float)qtdAbaixoCem/qtd) * 100;

    printf("A media salarial eh R$%.2f\n", mediaSalario); 
    printf("A media de filhos eh %.2f\n", mediaFilhos);
    printf("O maior salario eh %.2f\n", maiorSalario);
    printf("O percentual de salarios abaixo de R$100,00 eh %.2f%%\n", percentual);
}

