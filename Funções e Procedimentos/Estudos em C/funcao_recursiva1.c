#include <stdlib.h>
#include <stdio.h>

// Função recursiva que imprime números de forma decrescente, de 'num' até 0
void imprimirNumeroRec(int num) {
    // Caso base: se o número é 0, apenas imprime 0 e encerra a recursão
    if (num == 0) {
        printf(" %i", num);
    } else {
        // Imprime o número atual
        printf(" %i", num);
        
        // Chama a função novamente, passando o número decrementado em 1
        imprimirNumeroRec(num - 1);
    }
}

int main() {
    int numero;

    // Solicita ao usuário um número inteiro maior que zero
    printf("\nDigite um número maior que zero: ");
    scanf(" %i", &numero);

    // Chama a função para imprimir os números de 'numero' até 0
    imprimirNumeroRec(numero);

    return 0; // Indica que o programa terminou com sucesso
}
