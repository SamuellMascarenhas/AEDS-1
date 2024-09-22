//calculadora

#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        // Exibir o menu
        printf("Calculadora\n");
        printf("0 - Sair do programa\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Verificar a opção escolhida
        switch (opcao) {
            case 0:
                printf("Obrigado por usar este programa.\n");
                break;
            case 1:
                printf("Informe o primeiro número: ");
                scanf("%f", &num1);
                printf("Informe o segundo número: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                printf("Informe o primeiro número: ");
                scanf("%f", &num1);
                printf("Informe o segundo número: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                printf("Informe o primeiro número: ");
                scanf("%f", &num1);
                printf("Informe o segundo número: ");
                scanf("%f", &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                printf("Informe o primeiro número: ");
                scanf("%f", &num1);
                printf("Informe o segundo número: ");
                scanf("%f", &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisão por zero.\n");
                }
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0); // Continue até que a opção seja 0

    return 0;
}
