#include <stdio.h>  

int main() {  
    int num = 3; // Primeira múltiplo de 3  
    int i;  

    printf("Multiplos de 3:\n");  

    for(i = 1; i <= 5; i++) {  
        printf("Multiplo de 3: %d\n", num);  
        num += 3;  // Adiciona 3 para o próximo múltiplo  
    }  

    return 0;  
} 