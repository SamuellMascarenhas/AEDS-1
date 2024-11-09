#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída para usar funções como printf e scanf
#include <stdlib.h>  // Inclui a biblioteca padrão do C para funcionalidades adicionais (não usada diretamente aqui, mas comumente incluída)

// Função recursiva que calcula a potência de um número
// A função calcula x^n (x elevado a n) usando recursão
int potencia(int x, int n) {
    
    // Caso base da recursão: se n é 0, qualquer número elevado a 0 é 1
    if(n == 0) {
        return 1;
    }
    else {
        // Caso recursivo: multiplica x pelo resultado da função potencia(x, n-1)
        // Chamadas recursivas continuam até n ser reduzido a 0
        return x * potencia(x, n - 1);
    }
}

int main() {
    
    int x, n;  // Declara variáveis inteiras para armazenar a base (x) e o expoente (n)

    // Solicita ao usuário o valor de x (a base)
    printf("\nDigite o valor de X: ");
    scanf(" %d", &x);

    // Solicita ao usuário o valor de n (o expoente)
    printf("\nDigite o valor de N: ");
    scanf(" %d", &n);

    // Calcula x elevado a n chamando a função 'potencia' e exibe o resultado
    printf("\nResultado de %d elevado a %d eh: %d", x, n, potencia(x, n));

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
