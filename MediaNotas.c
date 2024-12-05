#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  

int main() {  
    float nota1, nota2, nota3, total;  

    printf("\nDigite a primeira nota: ");  
    scanf("%f", &nota1);  
    printf("Digite a segunda nota: ");  
    scanf("%f", &nota2);  
    printf("Digite a terceira nota: ");  
    scanf("%f", &nota3);  

    total = (nota1 + nota2 + nota3) / 3;  

    printf("Sua média: %.2f\n", total); 

    return 0; 

}