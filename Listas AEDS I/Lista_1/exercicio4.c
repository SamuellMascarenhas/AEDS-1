/*Calcular o seu peso ideal, sabendo que:
Peso Ideal de pessoas de gênero masculino: (72,7 x altura) – 58
Peso Ideal de pessoas de gênero feminino: (62,1 x altura) – 44,7*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float peso_ideal_feminino;
    float peso_ideal_masculino;
    float altura;
    char op;
    
    printf("Descubra seu peso ideal");
    printf("\nInforme sua altura: ");
    scanf(" %f", &altura);
    
    printf("\nInforme seu sexo, digite M para masculino e F para feminino: ");
    scanf(" %c", &op);
    
    peso_ideal_feminino = 62.1 * altura - 44.7;
    peso_ideal_masculino = 72.7 * altura - 58;
    
    if(op == 'M' || op == 'm'){
        printf("O seu peso ideal é de: %f", peso_ideal_masculino);
    }
    else if (op == 'F' || op == 'f'){
        printf("O seu peso ideal é de: %f", peso_ideal_feminino);
    }
    else{
        printf("Verifique o caractere informado.");
    }
    
    
    return 0;
}