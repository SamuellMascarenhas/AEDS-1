/*Calcular o perímetro de um quadrado*/

#include <stdio.h>

float PerimetroQuadrado (float lado){
    return lado * 4;
}

int main(){
    
    float valorLado, resultado;
    
    printf("Informe o valor do lado: ");
    scanf(" %f", &valorLado);
    
    resultado = PerimetroQuadrado(valorLado);
    
    printf("O perimetro é de %2.f", resultado);
    
    return 0;
    
}