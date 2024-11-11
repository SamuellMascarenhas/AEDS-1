/*Construa um algoritmo que verifique qual o segundo maior valor entre três números reais lidos*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float n1, n2, n3;
    
    printf("Verifique qual o segundo maior valor entre três números");
    printf("\nInforme o primeiro valor: ");
    scanf(" %f", &n1);
    
    printf("Informe o segundo valor: ");
    scanf(" %f", &n2);
    
    printf("Informe o terceiro valor: ");
    scanf(" %f", &n3);
    
    if((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)){
        printf("O valor %2.f é o segundo maior entre os três", n1);
    } else if((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3)){
        printf("o valor %2.f é o segundo maior entre os três", n2);
    }
    else{
        printf("o valor %2.f é o segundo maior entre os três", n3);
    }
    
    return 0;
}