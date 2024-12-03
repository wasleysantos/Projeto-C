#include <stdio.h>  
#include <stdlib.h>  

int main() {  
    float media;  

    printf("Digite a sua nota de media: \n");  
    scanf("%f", &media);  

    if (media >= 7.0) {  
        printf("Voce foi aprovado!\n");  
    } else {  
        printf("Voce foi reprovado.\n");  
    }  

    system("pause"); // Utilizado para pausar a saída no Windows  
    return 0;  
}

