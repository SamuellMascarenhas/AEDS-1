#include <stdio.h>      // Biblioteca padrão para entrada e saída
#include <stdlib.h>     // Biblioteca padrão C para funcionalidades adicionais
#include <string.h>     // Biblioteca para manipulação de strings, usada para a função `strcmp`

int main(){
    
    // Declara duas strings, `palavra1` inicializada com "ola" e `palavra2` inicializada com "oii"
    char palavra1[10] = {"ola"};
    char palavra2[10] = {"oii"};

    // Usa `strcmp` para comparar `palavra1` e `palavra2` e imprime o resultado da comparação
    printf("\nResultado: %d", strcmp(palavra1, palavra2));

    return 0;
}
