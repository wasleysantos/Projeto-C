#include <stdio.h>  
#include <stdlib.h> 
#include <locale.h>
#include <string.h>

int main(){

setlocale(LC_ALL,"Portuguese");

    int numero;

    printf("Digite um numero de 1 a 12 correspondente ao mes \n");
    scanf("%d", &numero);

    switch (numero){
        
        case 1:
            printf("Mês de janeiro \n");
            break;
        case 2:
            printf("Mes de fevereiro \n");
            break;
        case 3:
            printf("Mes de marco \n");
            break;
        case 4:
            printf("Mes de abril \n");
            break;
        case 5:
            printf("Mes de maio \n");
            break;
        case 6:
            printf("Mes de junho \n");
            break;
        case 7:
            printf("Mes de julho \n");
            break;
        case 8:
            printf("Mes de agosto \n");
            break;
        case 9:
            printf("Mes de setembro \n");
            break;
        case 10:
            printf("Mes de outubro \n");
            break;
        case 11:
            printf("Mes de novembro \n");
            break;
        case 12:
            printf("Mes é dezembro \n");
            break;
        
        default:
        printf("numero de mes invalido \n");
            break;
            system("pause");
    }
}