/*Identificar se um número natural é primo ou não*/

#include <stdio.h>

int ehPrimo(int numero) {
    if (numero < 2) {
        return 0; // Números menores que 2 não são primos
    }

    for (int i = 2; i * i <= numero; i++) { // Verifica até a raiz quadrada do número
        if (numero % i == 0) {
            return 0; // Número não é primo
        }
    }

    return 1; // Número é primo
}

int main() {
    int numero;

    printf("Informe um número natural: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}
