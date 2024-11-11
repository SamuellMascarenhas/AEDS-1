#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, area;

    // Solicita o valor do raio
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    // Calcula a área do círculo
    area = PI * raio * raio;

    // Exibe o resultado
    printf("A área do círculo com raio %.2f é: %.2f\n", raio, area);

    return 0;
}
