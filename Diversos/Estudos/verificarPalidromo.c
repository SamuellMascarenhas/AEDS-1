#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Função para verificar se uma palavra é um palíndromo
bool verificarPalindromo(char str[]) {
    // Inicializa duas variáveis: 'inicio' e 'fim' para as extremidades da string
    int inicio = 0;
    int fim = strlen(str) - 1;  // 'fim' é o índice do último caractere da string
    
    // Laço que percorre a string verificando se os caracteres nas extremidades são iguais
    while (inicio < fim) {
        // Se os caracteres nas extremidades não forem iguais, retorna 'false' (não é palíndromo)
        if (str[inicio] != str[fim]) {
            return false;  // Se algum caractere for diferente, não é palíndromo
        }
        // Se os caracteres forem iguais, move os ponteiros para o centro da string
        inicio++;  // Move para a direita (próximo caractere)
        fim--;     // Move para a esquerda (caractere anterior)
    }
    
    // Se o laço passar por todas as comparações sem encontrar caracteres diferentes, retorna 'true'
    return true;  // Se a comparação passou por todas as posições, é palíndromo
}

int main() {
    char palavra[100];  // Declara um array de caracteres (string) para armazenar a palavra inserida pelo usuário
    
    // Solicita ao usuário que insira uma palavra
    printf("Informe uma palavra: ");
    scanf("%s", palavra);  // Lê a palavra inserida pelo usuário
    
    // Chama a função verificarPalindromo e verifica se a palavra é um palíndromo
    if (verificarPalindromo(palavra)) {
        // Se for palíndromo, exibe a mensagem correspondente
        printf("A palavra '%s' é um palíndromo.\n", palavra);
    } else {
        // Se não for palíndromo, exibe a mensagem correspondente
        printf("A palavra '%s' não é um palíndromo.\n", palavra);
    }
    
    return 0;  // Retorna 0 indicando que o programa terminou corretamente
}
