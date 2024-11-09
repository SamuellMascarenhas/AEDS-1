#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão do C para funcionalidades adicionais (não usada diretamente aqui, mas comumente incluída)

// Função recursiva que calcula a soma dos elementos de um vetor
// A função recebe um vetor de inteiros 'v' e seu tamanho 'tam' e retorna a soma dos elementos
int soma(int v[], int tam) {
    
    // Caso base: se o tamanho do vetor é 0, a soma é 0
    if(tam == 0) {
        return 0;
    }
    else {
        // Caso recursivo: soma o último elemento do vetor (v[tam - 1])
        // com o resultado da soma dos elementos restantes
        return v[tam - 1] + soma(v, tam - 1);
    }
}

int main() {
    
    // Declara um vetor de inteiros com 10 elementos
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Chama a função 'soma' para calcular a soma de todos os elementos do vetor e exibe o resultado
    printf("\nSoma: %d\n", soma(vet, 10));

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
