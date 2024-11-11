// soma de área e Perimetro de um quadrado:

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float lado;
    float area;
    float perimetro;
    
    printf("Soma de área e perímetro de um quadrado");
    
    printf("\nDigite o valor do lado: ");
    scanf(" %f", &lado);
    
    area = lado * lado;
    perimetro = lado * 4;
    
    printf("\nA área do quadrado é de %f", area);
    printf("\nE o perimetro é de %f", perimetro);
    
    return 0;
}