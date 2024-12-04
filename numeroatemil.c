#include <stdio.h>  

int main() {  
    int num = 0; 

    printf("Numeros de 0 a 100000:\n");  

    while(num<=100000){
        printf("%d\n", num);  
        num += 200;   
    }  

    return 0;  
} 