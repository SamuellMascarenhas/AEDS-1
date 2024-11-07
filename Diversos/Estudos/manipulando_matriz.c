#include <stdio.h>
#include <stdlib.h>

int main() {

    // Declara uma matriz 3x3 e inicializa seus valores diretamente
    int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Loop para percorrer as linhas da matriz
    for (int i = 0; i < 3; i++) {
        // Loop para percorrer as colunas da matriz
        for (int j = 0; j < 3; j++) {
            // Imprime o elemento da posição [i][j] da matriz com um espaço
            printf(" %i", matriz[i][j]);
        }
        // Quebra de linha após cada linha da matriz ser impressa
        printf("\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}
