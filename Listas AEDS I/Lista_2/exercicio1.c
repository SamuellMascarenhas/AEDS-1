/*Construa um algoritmo que identifique qual o maior valor entre dois números reais lidos*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float numero1, numero2;
    
    printf("Descubra qual maior valor entre dois números");
    printf("\nInforme o primeiro valor: ");
    scanf(" %f", &numero1);
    printf("Informe o segundo valor: ");
    scanf(" %f", &numero2);
    
    if(numero1 > numero2){
        printf("o valor %2.f é maior que o valor %2.f", numero1, numero2);
    }
    else{
        printf("o valor %2.f é maior que o valor %2.f", numero2, numero1);
    }
    return 0;
}