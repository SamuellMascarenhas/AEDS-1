#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão do C para funcionalidades adicionais (não usada diretamente aqui, mas comumente incluída)


// Função recursiva que calcula a soma dos números de 1 até n
// A função recebe um número inteiro n e retorna a soma de todos os inteiros de 1 até n
int soma(int n) {
    
    // Caso base da recursão: se n é 0, a soma até 0 é 0
    if(n == 0) {
        return 0;
    }
    else {
        // Caso recursivo: soma o número atual n com o resultado da função soma(n - 1)
        // A função continua chamando a si mesma, reduzindo o valor de n até atingir o caso base
        return n + soma(n - 1);
    }
}

int main() {
    
    int n;  // Declara uma variável inteira para armazenar o valor fornecido pelo usuário

    // Exibe uma mensagem pedindo ao usuário para inserir um valor
    printf("\nDigite um valor: ");
    
    // Lê o número inteiro digitado pelo usuário e o armazena na variável 'n'
    scanf(" %d", &n);

    // Calcula a soma de 1 até n chamando a função 'soma' e exibe o resultado
    printf("\nA soma de 1 ate %d eh: %d", n, soma(n));

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
