#include <math.h>    // Inclui a biblioteca de funções matemáticas (neste caso, não é utilizada)
#include <stdlib.h>  // Inclui a biblioteca para funções padrão, como rand() e srand()
#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída para usar printf
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

// Função que calcula a soma dos elementos de uma linha específica da matriz
int somaLinha(int m[][5], int linha) {
    int coluna, soma = 0; // Inicializa a variável soma

    // Percorre cada coluna da linha especificada e soma seus valores
    for (coluna = 0; coluna < tam; coluna++) {
        soma += m[linha][coluna];
    }
    return soma; // Retorna a soma da linha
}

int main() {
    int i, j; // Declaração dos índices de linha e coluna
    int mat[5][5]; // Declaração da matriz 5x5

    srand(time(NULL)); // Inicializa a semente de números aleatórios usando o tempo atual

    // Preenche a matriz com valores aleatórios entre 0 e 9
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            mat[i][j] = rand() % 10;
        }
    }

    // Imprime a matriz gerada
    imprimirMatriz(mat);

    // Calcula e imprime a soma dos elementos das linhas 0, 1 e 2
    printf("Soma da linha 0: %d\n", somaLinha(mat, 0));
    printf("Soma da linha 1: %d\n", somaLinha(mat, 1));
    printf("Soma da linha 2: %d\n", somaLinha(mat, 2));

    return 0; // Indica que o programa terminou com sucesso
}
