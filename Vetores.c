#include <stdio.h>  
#include <string.h>   

int main() {  
    int i;  
    
    // Declarando um array de strings  
    char numeros[5][20]; // 5 strings de até 19 caracteres (1 para o terminador null)  
    char valores[5][20]; // Mesma estrutura para valores  

    // Atribuindo strings a numeros  
    strcpy(numeros[0], "Wasley");  
    strcpy(numeros[1], "Laura");  
    strcpy(numeros[2], "Paulo");  
    strcpy(numeros[3], "Otavio");  

    // Copiando strings de numeros para valores  
    for (i = 0; i < 4; i++) { // Copiando os 4 elementos válidos  
        strcpy(valores[i], numeros[i]);  
    }  

    // Imprimindo a lista de aprovados  
    printf("Lista de aprovados:\n");  
    for (i = 0; i < 4; i++) {  
        printf("%s\n", valores[i]); // Usando %s para imprimir strings  
    }  

    return 0;  
}