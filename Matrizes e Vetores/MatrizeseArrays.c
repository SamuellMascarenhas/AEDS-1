#include <stdio.h>      // Biblioteca padrão para entrada e saída
#include <stdlib.h>     // Biblioteca padrão C para funcionalidades adicionais

int main (){

    // Declara e inicializa uma matriz 3x3 com valores de 1 a 9
    int matriz[3][3] = {{1, 2, 3}, 
                        {4, 5, 6}, 
                        {7, 8, 9}};

    int i, j; // Declara variáveis `i` e `j` para controlar os loops

    // Loop externo para percorrer as linhas da matriz
    for(i = 0; i < 3; i++){
        // Loop interno para percorrer as colunas da matriz
        for(j = 0; j < 3; j++){
            // Imprime o elemento atual da matriz na posição [i][j]
            printf(" %d", matriz[i][j]);
        }
        // Quebra de linha após cada linha da matriz
        printf("\n");
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
