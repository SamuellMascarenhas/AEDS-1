/*Identificar se um inteiro é par ou ímpar*/

#include <stdio.h>

int ParOrImpa(int numero)
{

    if (numero % 2 == 0)
    {
        return 0; // representa par
    }
    else
    {
        return 1; // representa impar
    }
}
int main()
{

    int numero;
    int resultado;

    printf("Informe o numero: ");
    scanf("%i", &numero);

    resultado = ParOrImpa(numero);

    if (resultado == 0)
    {
        printf("O numero %i é: par\n", numero);
    }
    else
    {
        printf("O numero %i é: ímpar\n", numero);
    }

    return 0;
}