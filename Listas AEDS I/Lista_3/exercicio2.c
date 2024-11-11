/*Tipos de triângulos:
Equilátero: Todos os três lados são iguais.
Isósceles: Dois lados são iguais e um é diferente.
Escaleno: Todos os lados são diferentes.*/

#include <stdio.h>

int main() {
    float a, b, c;

    // Leitura dos lados do triângulo
    printf("Informe o comprimento do primeiro lado: ");
    scanf("%f", &a);
    printf("Informe o comprimento do segundo lado: ");
    scanf("%f", &b);
    printf("Informe o comprimento do terceiro lado: ");
    scanf("%f", &c);

    // Verificação se os lados formam um triângulo
    if (a + b > c && a + c > b && b + c > a) {
        // Identificação do tipo de triângulo
        if (a == b && b == c) {
            printf("Os lados formam um triângulo equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Os lados formam um triângulo isósceles.\n");
        } else {
            printf("Os lados formam um triângulo escaleno.\n");
        }
    } else {
        printf("Os valores informados não formam um triângulo.\n");
    }

    return 0;
}
