/*Calcular e escrever a potenciação. A base e o expoente deverão ser valores lidos – rejeitar a leitura de
valores inválidos.
Considere: base um valor real.
Expoente: um número natural: inteiro, positivo ou nulo(zero).
Obs: Não usar a biblioteca math.h. A potenciação deverá ser calculada de forma iterativa.*/
#include <stdio.h>

int main()
{
    float base;
    int expoente;
    float resultado = 1; // Inicia o resultado como 1

    // Leitura da base
    printf("Informe a base (valor real): ");
    scanf("%f", &base);

    // Leitura e validação do expoente
    do
    {
        printf("Informe o expoente (numero natural): ");
        scanf("%d", &expoente);

        if (expoente < 0)
        {
            printf("O expoente deve ser um numero natural (0 ou positivo).\n");
        }
    } while (expoente < 0); // Garante que o expoente seja não-negativo

    // Cálculo da potenciação
    for (int i = 0; i < expoente; i++)
    {
        resultado *= base;
    }

    // Exibe o resultado
    printf("Resultado: %.2f\n", resultado);

    return 0;
}
