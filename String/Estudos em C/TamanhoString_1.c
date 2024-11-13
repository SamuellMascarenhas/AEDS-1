#include <stdio.h>      // Biblioteca padrão para entrada e saída
#include <stdlib.h>     // Biblioteca padrão C para funcionalidades adicionais

int main() {

    int i, tam = 0;                 // Declara variáveis: `i` para controle de loop e `tam` para armazenar o tamanho da string
    char palavras[50] = {"Hello World"}; // Declara uma string `palavras` com capacidade para 50 caracteres, inicializada com "Hello World"

    i = 0;                           // Inicializa `i` com zero, para começar a percorrer a string desde o início
    while (palavras[i] != '\0') {    // Loop até encontrar o caractere nulo `\0`, que marca o fim da string
        tam++;                       // Incrementa `tam` a cada caractere encontrado para contar o tamanho da string
        i++;                         // Avança para o próximo caractere
    }

    printf("\nTamanho: %d", tam);    // Exibe o tamanho da string contada
    return 0;                        // Retorna 0, indicando que o programa executou com sucesso

}
