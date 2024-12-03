#include <stdio.h>  
#include <stdlib.h> 

int main(){

    int calc;
    int num1, num2;

    printf("Qual operacao deseja realizar? \n");
    printf("1- Soma \n");
    printf("2- Subtracao \n");
    printf("3-multiplicacao \n");
    printf("4- divisao \n");
    scanf("%d", &calc);

    switch (calc){
        
        case 1:
            printf("Digite o primeiro numero \n");
            scanf("%d", &num1);
            printf("Digite o segundo numero \n");
            scanf("%d", &num2);
            printf("Resultado: %d \n", num1+num2);
            break;
        case 2:
            printf("Digite o primeiro numero \n");
            scanf("%d", &num1);
            printf("Digite o segundo numero \n");
            scanf("%d", &num2);
            printf("Resultado: %d \n", num1-num2);
            break;
        case 3:
             printf("Digite o primeiro numero \n");
            scanf("%d", &num1);
            printf("Digite o segundo numero \n");
            scanf("%d", &num2);
            printf("Resultado: %d \n", num1*num2);
            break;
        case 4:
            printf("Digite o primeiro numero \n");
            scanf("%d", &num1);
            printf("Digite o segundo numero \n");
            scanf("%d", &num2);
            if (num2 != 0) {  
                printf("Resultado: %d \n", num1 / num2);  
            } else {  
                printf("Erro: Divisao por zero!\n");  
            }  
            break;

         default:  
            printf("Erro: Opcao invalida!\n");  
            break; 
            return 0;
    }
    system("pause");
}