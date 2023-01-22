#include <stdio.h>
#include <stdlib.h>

int main() {
    float c = 1.5, z = 1.1;
    int ano = 0;

    while(c >= z){
    
        c += 0.02;
        z += 0.03;
        ano++;
        
        printf("Chico: %.2f\tZe: %.2f\tAno: %d\n", c, z, ano);
    }
    printf("Sao necessarios %d anos!\n\n", ano);
}
