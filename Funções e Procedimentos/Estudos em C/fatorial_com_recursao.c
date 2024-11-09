#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão do C para funcionalidades adicionais (não usada diretamente aqui, mas comumente incluída)

// Função recursiva que calcula o fatorial de um número
// O fatorial de um número n (n!) é o produto de todos os inteiros positivos de 1 até n.
// Exemplo: 5! = 5 * 4 * 3 * 2 * 1 = 120
int fatorial(int num) {
    
    // Caso base da recursão: se o número é 0 ou 1, o fatorial é 1
    if(num == 0 || num == 1) {
        return 1;   // Retorna 1 como resultado do fatorial de 0 ou 1
    }
    else {
        // Caso recursivo: multiplica o número atual pelo fatorial de (num - 1)
        // A função chama a si mesma, reduzindo o valor de num até atingir o caso base
        return num * fatorial(num - 1);
    }
}

// Função principal do programa
int main() {
    
    int num;  // Declara uma variável inteira para armazenar o número fornecido pelo usuário

    // Exibe uma mensagem pedindo ao usuário para inserir um número
    printf("\nDigite um número maior que zero: ");
    
    // Lê o número inteiro digitado pelo usuário e o armazena na variável 'num'
    scanf(" %d", &num);

    // Calcula o fatorial chamando a função 'fatorial' e exibe o resultado
    printf("O Fatorial de %d é: %d", num, fatorial(num));

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
