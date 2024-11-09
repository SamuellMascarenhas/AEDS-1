#include <stdio.h>
#include <stdlib.h>  // Inclui a biblioteca para funções padrão, como rand() e srand()
#include <math.h>    // Inclui a biblioteca de funções matemáticas (neste caso, não é utilizada)
#include <time.h>    // Inclui a biblioteca para manipulação de tempo, usada para inicializar a semente de números aleatórios

int tam = 5; // Define uma variável global que representa o tamanho da matriz (5x5)

// Função que imprime uma matriz 5x5
void imprimirMatriz(int matriz[][5]) {
    int i, j; // Declaração das variáveis de índice

    // Percorre cada linha e coluna da matriz
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("%2d ", matriz[i][j]); // Imprime cada elemento da matriz com espaçamento de 2 caracteres
        }
        printf("\n"); // Quebra de linha ao final de cada linha da matriz
    }
}

// Função que calcula a soma dos elementos de uma coluna específica da matriz
int somaColunaMatriz(int m[][5], int c) {
    int l, soma = 0; // Inicializa a variável 'soma'

    // Percorre cada linha na coluna especificada e acumula os valores
    for (l = 0; l < tam; l++) {
        soma += m[l][c]; // Adiciona o valor da célula [l][c] à soma
    }
    return soma; // Retorna a soma da coluna
}

int main() {
    int j, i;           // Declaração das variáveis de índice
    int mat[5][5];      // Declaração da matriz 5x5

    srand(time(NULL));  // Inicializa a semente de números aleatórios usando o tempo atual

    // Preenche a matriz com valores aleatórios entre 0 e 9
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            mat[i][j] = rand() % 10;
        }
    }

    // Imprime a matriz gerada
    imprimirMatriz(mat);

    printf("\n");

    // Calcula e imprime a soma dos elementos de cada coluna
    for (i = 0; i < tam; i++) {
        printf("\nSoma da coluna %d: %d", i, somaColunaMatriz(mat, i));
    }

    return 0; // Indica que o programa terminou com sucesso
}
