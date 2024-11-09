#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão do C para funcionalidades adicionais (não usada diretamente aqui, mas comumente incluída)

// Função recursiva para converter um número decimal em binário
// Recebe o número decimal 'n' e imprime seu valor binário
void binario(int n) {

    // Caso base: se 'n' é zero, imprime '0'
    if(n == 0) {
        printf(" %d", n);
    }
    else {
        // Chama a função recursivamente dividindo 'n' por 2
        binario(n / 2);

        // Imprime o resto da divisão de 'n' por 2 (0 ou 1), que corresponde a um dígito binário
        printf(" %d", n % 2);
    }
}

int main() {

    int n;
    
    // Solicita ao usuário que insira um número decimal
    printf("\nDigite um valor decimal: ");
    scanf(" %d", &n);
    
    // Chama a função binario para imprimir a representação binária de 'n'
    binario(n);

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
