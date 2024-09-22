/*Calcule e escreva os n primeiros termos Fibonacci, sendo n um valor lido. A sequência Fibonacci é
constituída dos seguintes termos:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, .*/

#include <stdio.h>

int main()
{
    int n, primeiro = 0, segundo = 1, proximo;

    printf("Informe o número de termos de Fibonacci a serem exibidos: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci:\n");

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d ", primeiro); // Imprime o primeiro termo
            continue;
        }
        if (i == 1)
        {
            printf("%d ", segundo); // Imprime o segundo termo
            continue;
        }
        // Calcula o próximo termo
        proximo = primeiro + segundo;
        printf("%d ", proximo);

        // Atualiza os valores para o próximo cálculo
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");
    return 0;
}
