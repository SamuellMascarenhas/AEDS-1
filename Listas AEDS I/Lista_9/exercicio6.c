/*Calcular a potenciação (não usar a classe Math)*/
#include <stdio.h>

// Função para calcular a potência
float potencia(float base, int expoente) {
    float resultado = 1.0;
    
    // Se o expoente for negativo, calculamos a potência como 1/(base^abs(expoente))
    if (expoente < 0) {
        base = 1 / base;
        expoente = -expoente;
    }
    
    // Multiplicação para calcular a potência
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    
    return resultado;
}

int main() {
    float base;
    int expoente;
    
    // Entrada de dados
    printf("Informe a base: ");
    scanf("%f", &base);
    printf("Informe o expoente: ");
    scanf("%d", &expoente);
    
    // Chamada da função e exibição do resultado
    float resultado = potencia(base, expoente);
    printf("%.2f elevado a %d é: %.2f\n", base, expoente, resultado);
    
    return 0;
}
