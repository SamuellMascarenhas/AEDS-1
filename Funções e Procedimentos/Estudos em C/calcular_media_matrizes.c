#include <stdio.h>
#include <stdlib.h>

// Função para calcular a média dos valores de uma matriz 3x3
float calculaMedia(float matriz[3][3]) {
    float total = 0;
    int i, j;

    // Soma todos os valores da matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            total += matriz[i][j];
        }
    }

    // Retorna a média dos valores
    return total / 9;
}

// Função para imprimir os valores de uma matriz 3x3
void imprimeMatriz(float matriz[3][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz[3][3] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    };

    // Imprime a matriz
    printf("Valores da matriz:\n");
    imprimeMatriz(matriz);

    // Calcula e imprime a média
    float media = calculaMedia(matriz);
    printf("A média dos valores é: %.2f\n", media);

    return 0;
}
