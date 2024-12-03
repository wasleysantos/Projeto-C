#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, soma, subt, multi, divi;

    printf("Digite o primeiro valor:\n");
    printf("Digite o primeiro valor:\n");
    scanf("%d", &num1);
    printf("Digite o segundo valor:\n");
    scanf("%d", &num2);

    soma = num1+num2;
    subt = num1-num2;
    multi = num1*num2;
    divi = num1/num2;

    printf("O reultado da soma: %d. \n", soma);
    printf("O reultado da subtracao: %d. \n", subt);
    printf("O reultado da multiplicacao: %d. \n", multi);
    printf("O reultado da divisao: %d. \n", divi);

    system("pause");

}
