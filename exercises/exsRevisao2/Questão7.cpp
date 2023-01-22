#include <stdio.h>
int main()
{
    int tabuada = 0;
    printf("Digite a tabuada que voce deseja: \n\t\t\t\n ");
    scanf("%i", &tabuada);
    for(int x = 1; x<=10; ++x){
           printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }
    return 0;
}


