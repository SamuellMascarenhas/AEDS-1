#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    // Leitura dos coeficientes
    printf("Informe o coeficiente a (diferente de zero): ");
    scanf("%f", &a);
    
    if (a == 0) {
        printf("O coeficiente a deve ser diferente de zero para ser uma equação do segundo grau.\n");
        return 1; // Finaliza o programa com erro
    }
    
    printf("Informe o coeficiente b: ");
    scanf("%f", &b);
    
    printf("Informe o coeficiente c: ");
    scanf("%f", &c);

    // Cálculo do discriminante
    delta = b * b - 4 * a * c;

    // Verificação das raízes
    if (delta > 0) {
        // Duas raízes reais diferentes
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes da equação são: x1 = %.2f e x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        // Uma raiz real
        x1 = -b / (2 * a);
        printf("A raiz da equação é: x = %.2f\n", x1);
    } else {
        // Não há raízes reais
        printf("A equação não possui raízes reais.\n");
    }

    return 0;
}
