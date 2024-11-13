#include <stdio.h>      // Biblioteca padrão para entrada e saída
#include <stdlib.h>     // Biblioteca padrão C para funcionalidades adicionais
#include <string.h>     // Biblioteca para manipulação de strings, utilizada para a função `strcat`

int main(){

    // Declara uma string `palavras` com capacidade para 50 caracteres, inicializada com "Olá,"
    char palavras[50] = {"Olá,"};

    // `strcat` concatena (adiciona) a string "Bom dia" ao final da string `palavras`
    strcat(palavras, " Bom dia");

    // Exibe a string `palavras`, agora contendo "Olá, Bom dia"
    printf("\n%s", palavras);

    return 0;   // Retorna 0, indicando que o programa foi executado com sucesso
}
