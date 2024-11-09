#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão do C para funcionalidades adicionais (não usada diretamente aqui, mas comumente incluída)

// Função recursiva que calcula o enésimo termo da sequência de Fibonacci
// A sequência de Fibonacci é definida como:
// Fibonacci(1) = 0, Fibonacci(2) = 1
// Para n > 2: Fibonacci(n) = Fibonacci(n - 1) + Fibonacci(n - 2)
int fibonacci(int n) {
    
    // Caso base da recursão: se n é 1, o termo é 0
    if(n == 1) {
        return 0;
    }
    // Outro caso base: se n é 2, o termo é 1
    else if(n == 2) {
        return 1;
    }
    else {
        // Caso recursivo: o enésimo termo é a soma dos dois termos anteriores
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    
    int n;  // Declara uma variável inteira para armazenar o termo desejado na sequência de Fibonacci

    // Exibe uma mensagem pedindo ao usuário para inserir um valor
    printf("\nDigite um valor maior que zero: ");
    
    // Lê o número inteiro digitado pelo usuário e o armazena na variável 'n'
    scanf(" %d", &n);
    
    // Calcula o enésimo termo da sequência de Fibonacci chamando a função 'fibonacci' e exibe o resultado
    printf("\nO termo %d eh: %d", n, fibonacci(n));

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
