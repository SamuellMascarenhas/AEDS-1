/*Ler um inteiro qualquer. Calcular e escrever o número de divisores que o número lido possui */

#include <stdio.h>

int main()
{
    int numero, contadorDivisores = 0;

    do
    {
        printf("\nInforme o número inteiro e positivo: ");
        scanf(" %i", &numero);

        if (numero <= 0)
        {
            printf("Número inválido! Informe um número positivo e inteiro.\n");
        }
    } while (numero <= 0);

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        { // Verifica se i é um divisor de numero
            contadorDivisores++;
        }
    }

    // Exibir o resultado
    printf("O número %d possui %d divisores.\n", numero, contadorDivisores);

    return 0;
}
