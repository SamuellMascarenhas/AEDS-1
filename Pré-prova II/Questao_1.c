#include <stdio.h>

#define LINHAS 3 // Definindo o número de linhas da matriz
#define COLUNAS 3 // Definindo o número de colunas da matriz

// Função que calcula a média de um elemento e seus vizinhos
float mediaVizinhos(float matriz[LINHAS][COLUNAS], int linha, int coluna) {
    int soma = 0, count = 0;

    // Percorre as posições vizinhas (cima, baixo, esquerda, direita)
    for (int i = linha - 1; i <= linha + 1; i++) {
        for (int j = coluna - 1; j <= coluna + 1; j++) {
            // Verifica se o índice está dentro dos limites da matriz
            if (i >= 0 && i < LINHAS && j >= 0 && j < COLUNAS) {
                soma += matriz[i][j]; // Adiciona o valor ao total
                count++;               // Conta o número de vizinhos considerados
            }
        }
    }

    // Retorna a média
    return (float) soma / count;
}

int main() {
    float matriz[LINHAS][COLUNAS] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };

    int linha, coluna;

    // Solicita ao usuário as coordenadas do elemento
    printf("Informe a linha e a coluna do elemento: ");
    scanf("%d %d", &linha, &coluna);

    // Chama a função e imprime o resultado
    float resultado = mediaVizinhos(matriz, linha, coluna);
    printf("A média dos vizinhos é: %.2f\n", resultado);

    return 0;
}
