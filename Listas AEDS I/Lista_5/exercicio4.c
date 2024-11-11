/*
Construa uma nova versão para o programa que calcula o peso ideal de uma pessoa. Nela, rejeite a
leitura de dados fora do domínio em ambos os casos, altura e sexo. Considere os seguintes domínios:
Sexo: ‘M’, ‘m’, ‘F’, ‘f’
Altura: 0..2,5*/
#include <stdio.h>

int main()
{
    float altura;
    char sexo;
    float pesoIdeal;

    // Leitura da altura
    do
    {
        printf("Informe sua altura (0 a 2,5 m): ");
        scanf("%f", &altura);
        if (altura < 0 || altura > 2.5)
        {
            printf("Altura inválida. Tente novamente.\n");
        }
    } while (altura < 0 || altura > 2.5);

    // Leitura do sexo
    do
    {
        printf("Informe seu sexo (M/F): ");
        scanf(" %c", &sexo);
        if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f')
        {
            printf("Sexo inválido. Tente novamente.\n");
        }
    } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

    // Cálculo do peso ideal
    if (sexo == 'M' || sexo == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58; // Fórmula para homens
    }
    else
    {
        pesoIdeal = (62.1 * altura) - 44.7; // Fórmula para mulheres
    }

    // Exibir o resultado
    printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);

    return 0;
}
