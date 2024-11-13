#include <stdio.h>      // Biblioteca padrão para entrada e saída
#include <stdlib.h>     // Biblioteca padrão C para funcionalidades adicionais
#include <string.h>     // Biblioteca para manipulação de strings, utilizada para a função `strlen`

int main() {

    // Declara uma string `palavras` com capacidade para 50 caracteres, inicializada com "Hello World"
    char palavras[50] = {"Hello World"}; 

    // `strlen` calcula o número de caracteres em `palavras`, sem contar o caractere nulo '\0' que marca o fim da string
    printf("\nTamanho: %d", strlen(palavras)); 

    // Retorna 0, indicando que o programa foi executado com sucesso
    return 0;                        
}
