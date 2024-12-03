#include <stdio.h>

int main(){

    int numeros[6];
    int i, soma;
    

    numeros[0]=1;
    numeros[1]=0;
    numeros[2]=5;
    numeros[3]=-2;
    numeros[4]=-5;
    numeros[5]=7;
    scanf("Mude o valor da matriz 4: %d", &numeros[4]);

    soma= numeros[0]+numeros[1]+numeros[5];

    printf("O calculo das matrizes: %d \n", soma);

    for(i=0; i<6; i++){
        soma = numeros[i];
        printf("valor da matriz %d: %d \n", i, numeros[i]);
    }

}

