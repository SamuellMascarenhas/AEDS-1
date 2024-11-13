#include <stdio.h>      // Biblioteca padrão para entrada e saída
#include <stdlib.h>     // Biblioteca padrão C para funcionalidades adicionais
#include <string.h>     // Biblioteca para manipulação de strings, usada para a função `strchr`

int main (){
    // Declara uma string `palavras` com capacidade para 50 caracteres, inicializada com "hello"
    char palavras[50] = {"hello"};
    char *letra; // Declara um ponteiro `letra` para armazenar o endereço de uma letra específica em `palavras`

    // Usa `strchr` para procurar a primeira ocorrência do caractere 'a' na string `palavras`
    letra = strchr(palavras, 'h');

    // Verifica se o caractere 'a' foi encontrado na string
    if (letra != NULL) {
        // Se encontrado, imprime o caractere
        printf("\n%c", *letra);
    } else {
        // Se não encontrado, exibe uma mensagem informando que o caractere não está presente
        printf("\nCaractere 'a' não encontrado na string.");
    }

    return 0;
}
