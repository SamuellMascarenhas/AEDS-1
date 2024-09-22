/*Identificar se um ano lido é bissexto ou não. Pesquise o que deve ser observado para verificar se um ano
é bissexto*/

/*Divisibilidade por 4: Um ano é bissexto se ele for divisível por 4.

Exceção para anos múltiplos de 100: Se o ano for divisível por 100, ele não é bissexto, a menos que...

Divisibilidade por 400: Se o ano for divisível por 400, então ele é bissexto.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int ano;
    
    printf("Descubra se o ano é bissexto");
    printf("\nInforme o ano: ");
    scanf(" %i", &ano);
    
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        printf("O ano %i é bissexto", ano);
    } 
    else {
        printf("O ano %i não é bissexto", ano);
    }
   
    return 0;
}