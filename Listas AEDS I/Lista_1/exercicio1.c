//Soma de dois números reais

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Soma de dois números reais\n");

    float a;
    float b;
    float soma;

    printf("Digite o primeiro valor: ");
    scanf(" %f", &a);
    printf("Digite o segundo valor: ");
    scanf(" %f", &b);

    soma = a + b;

    printf("A soma do valor %f + o valor %f é = %f", a, b, soma);
    
    return 0;
}
