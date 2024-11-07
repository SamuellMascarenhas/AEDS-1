#include <stdio.h>
#include <stdlib.h>

#define TAM 3 // Define a constante TAM como o tamanho do array (3)

// Array global para armazenar os valores
float valorReal[TAM] = {0}; // Inicializa o array com 0 para evitar valores indeterminados

// Função para trocar o valor em uma posição específica
void trocarPosicao(float valorInserido, int posicaoVetor) {
    // Verifica se a posição informada está dentro dos limites do array
    if (posicaoVetor >= 0 && posicaoVetor < TAM) {
        valorReal[posicaoVetor] = valorInserido; // Altera o valor na posição especificada
        printf("O valor na posição %d agora é %.2f\n", posicaoVetor, valorInserido);
    } else {
        printf("Posição inválida! Insira um valor entre 0 e %d.\n", TAM - 1); // Mensagem de erro para posição inválida
    }
}

int main() {
    float valorInserido; // Variável para armazenar o valor inserido pelo usuário
    int posicaoVetor;    // Variável para armazenar a posição onde o valor será inserido

    // Solicita ao usuário o valor e a posição para inserção
    printf("Insira um valor: ");
    scanf("%f", &valorInserido);
    printf("Posição (0 a %d): ", TAM - 1);
    scanf("%d", &posicaoVetor);

    // Chama a função para trocar o valor na posição especificada
    trocarPosicao(valorInserido, posicaoVetor);

    // Exibe o estado atual do array
    printf("\nEstado atual do array:\n");
    for (int i = 0; i < TAM; i++) {
        printf("Posição %d: %.2f\n", i, valorReal[i]);
    }

    return 0; // Indica que o programa terminou com sucesso
}
