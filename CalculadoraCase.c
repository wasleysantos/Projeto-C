#include <stdio.h>

int main(){

int calculo;
int num1, num2, total;

switch (calculo){

    printf("Calculadora, escolha uma opção para calcular");
    printf("Soma /n Subtracao /n Multiplicacao /n Divisao ");
    scanf("Digite a opcaoo: %d", &calculo);
case 1:
    scanf("Digite o primeiro numero: %d", &num1);
    scanf("Digite o primeiro numero: %d", &num2);
    total=num1+num2;
    printf("Resultado %d", total);
break;

default:
    break;
}
}