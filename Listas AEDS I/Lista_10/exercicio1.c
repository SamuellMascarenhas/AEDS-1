/*Construa uma função recursiva que escreva na tela a sequência abaixo:
1, 2, 3, 4, 5*/
#include <stdio.h>

void escreverSequencia(int n) {
    if (n > 5) {
        return; // Caso base: se n for maior que 5, encerra a função
    }
    
    printf("%d ", n); // Imprime o número atual
    escreverSequencia(n + 1); // Chama a função recursivamente com o próximo número
}

int main() {
    escreverSequencia(1); // Inicia a sequência a partir de 1
    printf("\n"); // Nova linha após a sequência
    return 0;
}
