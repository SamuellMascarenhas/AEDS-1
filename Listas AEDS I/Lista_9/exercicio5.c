/*Calcular o fatorial de um número natural*/
#include <stdio.h>

// Função para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Fatorial de 0 ou 1 é 1
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}

int main() {
    int numero;

    printf("Informe um número natural: ");
    scanf("%d", &numero);

    // Verificar se o número é negativo
    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        // Chamar a função fatorial e exibir o resultado
        printf("O fatorial de %d é: %d\n", numero, fatorial(numero));
    }

    return 0;
}
