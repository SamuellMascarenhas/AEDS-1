#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão do C para funcionalidades adicionais (não usada diretamente aqui, mas comumente incluída)

// Função recursiva para encontrar o maior elemento em um vetor
// A função recebe um vetor de inteiros 'v', o tamanho 'tam' e o índice atual do maior valor encontrado
int maior(int v[], int tam, int indice) {
    
    // Caso base: quando 'tam' é 0, o índice atual armazena o maior valor encontrado
    if(tam == 0) {
        return v[indice];
    }
    else {
        // Verifica se o elemento atual (v[tam - 1]) é maior que o elemento no índice armazenado
        if(v[tam - 1] > v[indice]) {
            // Caso seja maior, chama a função recursivamente com o novo índice do maior valor encontrado
            return maior(v, tam - 1, tam - 1);
        }
        else {
            // Caso contrário, chama a função recursivamente mantendo o índice atual
            return maior(v, tam - 1, indice);
        }
    }
}

int main() {
    
    // Declara e inicializa um vetor de inteiros
    int vet[10] = {11, 258, 13, 445, 58, 67, 7, 8, 9, 10};

    // Chama a função 'maior' e exibe o maior valor do vetor
    printf("\nMaior: %d\n", maior(vet, 10, 0));

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
