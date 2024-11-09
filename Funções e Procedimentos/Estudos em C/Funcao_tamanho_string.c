// Inclui a biblioteca padrão de entrada e saída para usar funções como printf
#include <stdio.h>

// Função que calcula o comprimento de uma string (número de caracteres até o caractere nulo '\0')
int minhaStrLen(char str[]) {
    int tam = 0; // Inicializa a variável 'tam' que contará o tamanho da string
    
    // Loop que percorre a string até encontrar o caractere nulo '\0', que indica o fim da string
    while (str[tam] != '\0') {
        tam++; // Incrementa o contador para cada caractere até o fim da string
    }
    return tam; // Retorna o tamanho da string
}

int main() {
    char vet[20] = {"ola"}; // Declara um vetor de caracteres (string) com capacidade para 20 caracteres e inicializa com "ola"
    
    // Chama a função minhaStrLen para calcular o comprimento da string 'vet' e exibe o resultado
    printf("minhaStrLen: %d\n", minhaStrLen(vet));

    return 0; // Indica que o programa terminou com sucesso
}
