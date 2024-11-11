//numero de dias vividos ate o ultimo aniversario

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int idade;
    int diasVividos;
    printf("Calculo dos dias vividos ate o seu ultimo aniversario");
    printf("\nInforme a sua idade: ");
    scanf(" %i", &idade);
    
    diasVividos = idade * 365;
    
    printf("O número de dias vividos até o último aniversário é de: %i", diasVividos);
    
    return 0;
}