/*Abaixo é apresentada a função de Ackerman, válida para valores inteiros e não negativos de m e n.
Para ela, construa uma versão recursiva do algoritmo.
Antes da implementação em C, verifique manualmente o seu comportamento para a chamada
A(1, 2)
Analise o comportamento da recursão neste caso (o seu ritmo de crescimento)
n + 1, para m=0
A(m, n) = A(m-1, 1), para m>0 e n=0
A(m-1, A(m, n-1) ), para m>0 e n>0*/

#include <stdio.h>

// Função de Ackermann
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
    return -1; // Apenas por segurança, caso algum caso inválido ocorra
}

int main() {
    int m, n;
    printf("Informe os valores de m e n: ");
    scanf("%d %d", &m, &n);

    int resultado = ackermann(m, n);
    printf("Ackermann(%d, %d) = %d\n", m, n, resultado);

    return 0;
}
