#include <stdio.h>

int main(){

    int valor;

    printf("Digite o valor desejado: \n");
    scanf("%d", &valor);

        switch (valor)
        {
        case 1:
        printf("valor um \n");
            break;
        case 2:
        printf("valor d0is \n");
            break;
        case 3:
        printf("valor tres \n");
            break;

        default:
        printf("Valor invalido \n");
            break;
    }
    return 0;

}
