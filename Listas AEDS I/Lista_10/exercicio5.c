/*Construa algoritmos para calcular o k-ésimo termo Fibonacci utilizando as abordagens abaixo. Antes
de iniciar a codificação, busque e planeje, cuidadosamente, as estratégias que o algoritmo deverá
adotar.
a) Algoritmo iterativo
*/

#include <stdio.h>

// Função iterativa para calcular o k-ésimo termo de Fibonacci
int fibonacciIterativo(int k) {
    if (k == 0) return 0;
    if (k == 1) return 1;

    int fib_1 = 0;  // F(n-2)
    int fib_2 = 1;  // F(n-1)
    int fib_k = 0;

    for (int i = 2; i <= k; i++) {
        fib_k = fib_1 + fib_2;  // F(n) = F(n-1) + F(n-2)
        fib_1 = fib_2;  // Atualiza F(n-2)
        fib_2 = fib_k;  // Atualiza F(n-1)
    }
    
    return fib_k;
}

int main() {
    int k;
    printf("Informe o valor de k para calcular o k-ésimo termo de Fibonacci: ");
    scanf("%d", &k);

    int resultado = fibonacciIterativo(k);
    printf("O %d-ésimo termo de Fibonacci (iterativo) é: %d\n", k, resultado);

    return 0;
}
