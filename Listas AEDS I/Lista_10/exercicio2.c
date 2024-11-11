#include <stdio.h>

/*Construa uma função recursiva que escreva na tela a sequência abaixo:
1, 2, 3, 4, 5, 5, 4, 3, 2, 1*/

void escreverSequencia(int n) {
    if (n <= 5) {
        printf("%d ", n); // Imprime o número atual
        escreverSequencia(n + 1); // Chama recursivamente para o próximo número
        printf("%d ", n); // Imprime o número atual novamente para a sequência decrescente
    }
}

int main() {
    escreverSequencia(1); // Inicia a sequência a partir de 1
    printf("\n"); // Nova linha após a sequência
    return 0;
}
