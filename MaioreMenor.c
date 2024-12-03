#include <stdio.h>  

int main() {  
    int i, numero, maior, menor=0;

    for (i = 0; i < 10; i++)
    {
      printf("informe o valor de %d de 10 \n", i+1);
      scanf("%d", &numero);

      if (i==0){
        maior=numero;
        menor=numero;
      }

      if (numero > maior){
        maior=numero;
      }
      if (numero<menor){
        menor=numero;
      }
    }
    printf("O maior numero %d e o menor %d", maior, menor);
    return 0;  
} 