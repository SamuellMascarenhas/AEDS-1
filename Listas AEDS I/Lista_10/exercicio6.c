/*Construa algoritmos para calcular o k-ésimo termo Fibonacci utilizando as abordagens abaixo. Antes
de iniciar a codificação, busque e planeje, cuidadosamente, as estratégias que o algoritmo deverá
adotar.
b) Algoritmo recursivo*/

#include <stdio.h>

// Função recursiva para calcular o k-ésimo termo de Fibonacci
int fibonacciRecursivo(int k) {
    if (k == 0) return 0;
    if (k == 1) return 1;

    return fibonacciRecursivo(k - 1) + fibonacciRecursivo(k - 2);
}

int main() {
    int k;
    printf("Informe o valor de k para calcular o k-ésimo termo de Fibonacci: ");
    scanf("%d", &k);

    int resultado = fibonacciRecursivo(k);
    printf("O %d-ésimo termo de Fibonacci (recursivo) é: %d\n", k, resultado);

    return 0;
}
