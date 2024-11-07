// Inclui a biblioteca padrão de entrada e saída para usar funções como printf
#include <stdio.h>

// Função que imprime os caracteres de uma string passada como parâmetro
void imprimirString(char str[]) {
    int i = 0; // Inicializa o índice 'i' para percorrer a string
    
    // Loop que percorre cada caractere da string até encontrar o caractere nulo '\0', indicando o fim da string
    while (str[i] != '\0') {
        printf("%c", str[i]); // Imprime o caractere atual da string
        i++; // Incrementa o índice para avançar para o próximo caractere
    }
    printf("\n"); // Quebra de linha após imprimir toda a string
}

int main() {
    char vet[20] = {"Ola"}; // Declara um vetor de caracteres (string) com capacidade para 20 caracteres e inicializa com "Ola"
    
    // Chama a função imprimirString para imprimir a string 'vet' no console
    imprimirString(vet);

    return 0; // Indica que o programa terminou com sucesso
}
