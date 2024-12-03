#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    for(;;){
    float nota1, nota2, nota3, total;
    
    printf("\nDigite a primeira nota \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota \n");
    scanf("%f", &nota3);
    total = ((nota1+nota2+nota3)/3);

    printf("Sua media: %.2f ", total);
    }
}